//
// Created by sebas211288 on 24/04/19.
//

#include <zconf.h>
#include <thread>
#include <iostream>
#include "Factory.h"
using namespace std;
Factory::Factory()
{
    this->type1= new Car_Lane("A/B/C/D/E/F");
    type1->setType("Tipo1");
    type1->createSchedule();

    this->type2= new Car_Lane("C/A/B/E/D/F");
    type2->setType("Tipo2");
    type2->createSchedule();

    this->type3= new Car_Lane("D/E/A/C/B/F");
    type3->setType("Tipo3");
    type3->createSchedule();

    this->type4= new Car_Lane("B/C/D/A/F/E");
    type4->setType("Tipo4");
    type4->createSchedule();

    this->type5= new Car_Lane("E/F/B/C/A/D");
    type5->setType("Tipo5");
    type5->createSchedule();

    this->type6= new Car_Lane("F/D/C/B/E/A");
    type6->setType("Tipo6");
    type6->createSchedule();

    this->waiting= new WaitingQueue();
    this->mainLane= new MainLane();

    this->typeA= new Process_Manager(this->mainLane,this->waiting);
    typeA->setType("TipoA");

    this->typeB= new Process_Manager(this->mainLane,this->waiting);
    typeB->setType("TipoB");

    this->typeC= new Process_Manager(this->mainLane,this->waiting);
    typeC->setType("TipoC");

    this->typeD= new Process_Manager(this->mainLane,this->waiting);
    typeD->setType("TipoD");

    this->typeE= new Process_Manager(this->mainLane,this->waiting);
    typeE->setType("TipoE");

    this->typeF= new Process_Manager(this->mainLane,this->waiting);
    typeF->setType("TipoF");

}

void Factory::Initialize()
{
    Process p=type1->getCurrent();
    Process* pr= new Process();
    *pr=p;
    definer(p.getType())->add(pr);

    p=type2->getCurrent();
    pr= new Process();
    *pr=p;
    definer(p.getType())->add(pr);

    p=type3->getCurrent();
    pr= new Process();
    *pr=p;
    definer(p.getType())->add(pr);

    p=type4->getCurrent();
    pr= new Process();
    *pr=p;
    definer(p.getType())->add(pr);

    p=type5->getCurrent();
    pr= new Process();
    *pr=p;
    definer(p.getType())->add(pr);

    p=type6->getCurrent();
    pr= new Process();
    *pr=p;
    definer(p.getType())->add(pr);

    mainLane->print();
}
Car_Lane *Factory::definer(string type,int p)
{
    if(type=="Tipo1")
    {
        return type1;
    }
    else if(type=="Tipo2")
    {
        return type2;
    }
    else if(type=="Tipo3")
    {
        return type3;
    }
    else if(type=="Tipo4")
    {
        return type4;
    }
    else if(type=="Tipo5")
    {
        return type5;
    }
    else if (type=="Tipo6")
    {
        return type6;
    }
}
Process_Manager *Factory::definer(string type)
{
    if(type=="TipoA")
    {
        return typeA;
    }
    else if(type=="TipoB")
    {
        return typeB;
    }
    else if(type=="TipoC")
    {
        return typeC;
    }
    else if(type=="TipoD")
    {
        return typeD;
    }
    else if(type=="TipoE")
    {
        return typeE;
    }
    else if (type=="TipoF")
    {
        return typeF;
    }
}
void Factory::Interface()
{
    processQueue.setSize(Vector2f(200,650));
    processQueue.setFillColor(Color::Transparent);
    processQueue.setPosition(250,50);
    processQueue.setOutlineThickness(8.f);
    processQueue.setOutlineColor(sf::Color::Green);

    // Rectangle Queue
    queue.setSize(Vector2f(200,650));
    queue.setFillColor(Color::Transparent);
    queue.setPosition(800,50);
    queue.setOutlineThickness(8.f);
    queue.setOutlineColor(sf::Color::Green);

    sf::Font font;
    if(!font.loadFromFile("share-tech-mono.regular.ttf")){

    }

    //  Text of process Queue

    textPQ.setFont(font);
    textPQ.setString("ProcessQueue");
    textPQ.setCharacterSize(24);
    textPQ.setPosition(260,10);
    textPQ.setFillColor(sf::Color::Green);
    textPQ.setStyle(sf::Text::Bold | sf::Text::Underlined);

    //  Text of Queue



    textQ.setFont(font);
    textQ.setString("Queue");
    textQ.setCharacterSize(24);
    textQ.setPosition(870,10);
    textQ.setFillColor(sf::Color::Green);
    textQ.setStyle(sf::Text::Bold | sf::Text::Underlined);
    while (Factory::windowM.isOpen()) {
        Event event;
        while (Factory::windowM.pollEvent(event)) {
            if (event.type == Event::Closed) {
                Factory::windowM.close();
            } else if (event.type == Event::MouseButtonPressed) {
                cout << "click! " << endl;
            }
        }

        //staticDraw
        updateInterface();
        //dinamicDraw
        /*Factory::windowM.draw(us);
        Factory::windowM.draw(uss);*/
        //loopFunction -> window.draw(proces.getRec());

        Factory::windowM.display();
    }

}
void Factory::Updater()
{
    while(true)
    {
        Node* temp= mainLane->getHead();
        while(temp!= nullptr)
        {
            temp->getProcess()->setTime(temp->getProcess()->getTime()-1);
            temp=temp->getNext();
        }
        temp=mainLane->getHead();
        while(temp!= nullptr)
        {
            if(temp->getProcess()->getTime()==0)
            {
                Process_Manager* pm=definer(temp->getProcess()->getType());
                if(temp->getProcess()->getPorder()<6)
                {
                    Car_Lane* c=definer(temp->getProcess()->getCtype(),0);
                    pm->add(c->next(temp->getProcess()->getPorder()));
                }
                pm->del(temp->getProcess()->getPnumber());
            }
            temp=temp->getNext();
        }
        mainLane->print();
        usleep(1000000);
    }
}
void Factory::start()
{
    thread Car_LaneT= thread(&Factory::Updater,this);
    Car_LaneT.detach();
    Interface();
}
void Factory::updateInterface()
{
    Factory::windowM.clear();
    Factory::windowM.draw(queue);
    Factory::windowM.draw(processQueue);
    Factory::windowM.draw(textPQ);
    Factory::windowM.draw(textQ);
    RectangleShape r(Vector2f(180,50));
    r.setPosition(260,60);
    draw();
}

void Factory::draw()
{
    if(mainLane->getLength()>0)
    {
        Node *temp = mainLane->getHead();
        while (temp != nullptr) {
            RectangleShape r= temp->getProcess()->getRect();
            r.setSize(Vector2f(180,50));
            r.setFillColor(Color::Green);
            r.setPosition(temp->getProcess()->getX(),temp->getProcess()->getY());
            windowM.draw(r);

            sf::Font font;
            if (!font.loadFromFile("share-tech-mono.regular.ttf")) {
                cout << "No se encontro la fuente" << endl;
            }
            sf::Text t = temp->getProcess()->getText();
            t.setPosition(temp->getProcess()->getX(), temp->getProcess()->getY() + 10);
            t.setFillColor(Color::Black);
            t.setCharacterSize(18);
            t.setString(temp->getProcess()->getType() + " " + to_string(temp->getProcess()->getTime()) + " C: " +
                        temp->getProcess()->getCtype());
            t.setStyle(sf::Text::Bold);
            t.setFont(font);
            windowM.draw(t);

            temp = temp->getNext();
        }
    }
}

