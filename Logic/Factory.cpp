//
// Created by dcamachog1501 on 16/04/19.
//

#include <zconf.h>
#include <thread>
#include "Factory.h"

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
}



