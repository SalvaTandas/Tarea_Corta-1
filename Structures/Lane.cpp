//
// Created by dcamachog1501 on 16/04/19.
//

#include "Lane.h"
#include <boost/algorithm/string.hpp>
#include <boost/thread.hpp>
#include <thread>

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
}

void Lane::setTop(Process p)
{
    Node * n= new Node(p);
    n->setNext(top);
    top=n;
}

void Lane::setLimit(int i)
{
    this->type=i;
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
    
}
