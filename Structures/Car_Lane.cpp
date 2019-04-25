//
// Created by sebas211288 on 24/04/19.
//

#include "Car_Lane.h"
#include "../Logic/Factory.h"
#include <boost/algorithm/string.hpp>
#include <thread>
#include <iostream>

using namespace std;
Car_Lane::Car_Lane(string sch)
{
    this->length=0;
    this->head= nullptr;
    this->type="Undefined";
    boost::split(schedule,sch,boost::is_any_of("/"));
    current=0;
}

Node *Car_Lane::getHead() {
    return this->head;
}
int Car_Lane::getLength() {
    return this->length;
}

void Car_Lane::add(Process p)
{
    Node* n= new Node(p);
    if(this->head==nullptr)
    {
        this->head=n;
    }
    else
    {
        Node* temp=this->head;
        while(temp->getNext()!= nullptr)
        {
            temp=temp->getNext();
        }
        temp->setNext(n);
    }
    length++;
}
void Car_Lane::setType(string s)
{
    this->type=s;
}
void Car_Lane::print()
{
    Node* temp= this->head;
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

void Car_Lane::createSchedule()
{
    for(int i=0;i<schedule.size();i++)
    {
        this->add(Factory::pMaker->make(this->type,"Tipo"+schedule[i]));
    }
}

Process Car_Lane::get(int i)
{
    Node* temp= this->head;
    int n=0;
    while(i!=n)
    {
        temp=temp->getNext();
        n++;
    }
    return *temp->getProcess();
}

Process Car_Lane::getCurrent()
{
    Process p= get(current);
    current++;
    if(current==schedule.size())
    {
        current=0;
    }
    return p;
}

Process* Car_Lane::next(int porder)
{
    Node* temp= this->head;
    while(temp!= nullptr)
    {
        if(temp->getProcess()->getPorder()==porder+1)
        {
            return temp->getProcess();
        }
        temp=temp->getNext();
    }
}

