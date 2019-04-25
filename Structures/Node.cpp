//
// Created by sebas211288 on 24/04/19.
//
#include "Node.h"

Node::Node()
{
    next= nullptr;
    proceso= nullptr;
}

Node::Node(Process p)
{
    next= nullptr;
    proceso= new Process;
    *proceso=p;
}
Node::Node(Process *p)
{
    next= nullptr;
    proceso=p;
}
Node *Node::getNext()
{
    return next;
}

Process *Node::getProcess()
{
    return proceso;
}

void Node::setProcess(Process p)
{
    Process* pr= new Process();
    *pr=p;
    proceso=pr;
}
void Node::setNext(Node *n)
{
    this->next=n;
}

