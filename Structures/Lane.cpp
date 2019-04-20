//
// Created by dcamachog1501 on 16/04/19.
//

#include "Lane.h"
#include "../Logic/Factory.h"
#include <boost/algorithm/string.hpp>
#include <thread>
#include <iostream>

using namespace std;
Lane::Lane(string sch)
{
    top= nullptr;
    bottom= nullptr;
    this->length=0;
    this->limit=0;
    this->type="Undefined";
    boost::split(schedule,sch,boost::is_any_of("/"));
    current=0;
}

Node *Lane::getTop() {
    return top;
}

Node *Lane::getBottom() {
    return bottom;
}

int Lane::getLength() {
    return this->length;
}

void Lane::add(Process p)
{
    if(length==limit)
    {

    }
    else
    {
        Node* n= new Node();
        n->setProcess(p);
        if(length==0)
        {
            this->top=n;
            this->bottom=n;
        }
        else
        {
            bottom->setNext(n);
            bottom=n;

        }
        length++;
    }
}

void Lane::delTop()
{
    Node* temp=top;
    top=top->getNext();
    delete(temp);
    length--;
}

void Lane::setTop(Process p)
{
    Node * n= new Node(p);
    n->setNext(top);
    top=n;
}

void Lane::setLimit(int i)
{
    this->limit=i;
}

void Lane::setType(string s)
{
    this->type=s;
}
void Lane::start()
{
    thread laneT= thread(&Lane::work,this);
    laneT.detach();
}

void Lane::work()
{
    while(true)
    {
        if (length == 0) {
            this->add(Factory::pMaker->make(this->type, "Tipo" + schedule[current]));
            current++;
            if (current >= schedule.size()) {
                current = 0;
            }
        }
        while (top->getProcess()->getTime() !=0) {
            usleep(1000000);
            print();
            top->getProcess()->setTime(top->getProcess()->getTime() - 1);
        }
        this->delTop();
    }
}
void Lane::print()
{
    Node* temp= this->top;
    vector<string> pcs;
    string str="";
    while(temp!= nullptr)
    {
        str+= "| "+temp->getProcess()->getType()+" "+to_string(temp->getProcess()->getTime())+"s"+" |";
        temp=temp->getNext();
    }
    string d="";
    for(int i=0; i<this->length;i++)
    {
        d+="------------";
    }
    cout<<d<<endl;
    cout<<str<<endl;
    cout<<d<<endl;
}
void Lane::addSchedule()
{
    for(int i=0;i<limit;i++)
    {
        Process p= Factory::pMaker->make(this->type,"Tipo"+schedule[i]);
        this->add(p);
        current++;
    }
    if(current>=6)
    {
        current=0;
    }
}
void Lane::addCurrent()
{
    this->add(Factory::pMaker->make(this->type,"Tipo"+schedule[current]));
    current++;
    if(current==schedule.size())
    {
        current=0;
    }
}
