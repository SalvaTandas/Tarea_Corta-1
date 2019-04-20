//
// Created by dcamachog1501 on 19/04/19.
//

#include "WaitingQueue.h"

WaitingQueue::WaitingQueue()
{
    this->head= nullptr;
    this->length=0;
}

void WaitingQueue::del()
{
    Node* temp= this->head;
    this->head=head->getNext();
    delete(temp);
}

void WaitingQueue::add(Process *p)
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

Process *WaitingQueue::pop()
{
    Node* temp= this->head;
    this->head=head->getNext();
    temp->setNext(nullptr);
    return temp->getProcess();
}
