//
// Created by sebas211288 on 24/04/19.
//

#include <vector>
#include <iostream>
#include "MainLane.h"

MainLane::MainLane()
{
    this->length=0;
    this->head= nullptr;
    this->x=260;
    this->y=60;
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
    n->getProcess()->updateRect(x,y);
    y=y+60;
    length++;
}

void MainLane::del(int pnumber)
{
    Node* temp=this->head;
    if(temp->getProcess()->getPnumber()==pnumber)
    {
        Node* temp3= this->head->getNext();
        //temp->setNext(nullptr);
        delete(temp);
        this->head=temp3;
        while(temp3!= nullptr)
        {
            temp3->getProcess()->updateRect(temp3->getProcess()->getX(),temp3->getProcess()->getY()-60);
            temp3=temp3->getNext();
        }
//delete(temp3);

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
        if(temp!= nullptr) {
            Node *temp2 = temp->getNext();
            temp->setNext(temp2->getNext());
            Node* temp3=temp->getNext();
            while(temp3!= nullptr)
            {
                temp3->getProcess()->updateRect(temp3->getProcess()->getX(),temp3->getProcess()->getY()-60);
                temp3=temp3->getNext();
            }
            delete(temp2);
        }
    }
    y=y-60;
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


