//
// Created by dcamachog1501 on 19/04/19.
//

#include <vector>
#include <iostream>
#include "MainLane.h"

MainLane::MainLane()
{
    this->length=0;
    this->head= nullptr;
}

Node *MainLane::getHead() {
    return this->head;
}

int MainLane::getLength() {
    return this->length;
}

void MainLane::add(Process* p)
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

void MainLane::del(int pnumber)
{
    Node* temp=this->head;
    if(head->getProcess()->getPnumber()==pnumber)
    {
        this->head=temp->getNext();
        delete(temp);
    }
    else
    {
        while(temp->getNext()->getProcess()->getPnumber()!=pnumber)
        {
            temp=temp->getNext();
            if(temp==nullptr)
            {
                break;
            }
        }
        if(temp!= nullptr)
        {
            Node* temp2=temp->getNext();
            temp->setNext(temp2->getNext());
            delete(temp2);
            temp= nullptr;
            delete(temp);
        }
    }
    length--;
}

void MainLane::print()
{
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
}

Process *MainLane::get(int pn)
{
    Node* temp=head;
    while(temp!= nullptr)
    {
        if(temp->getProcess()->getPnumber()==pn)
        {
            return temp->getProcess();
        }
        temp=temp->getNext();
    }
    return nullptr;
}

