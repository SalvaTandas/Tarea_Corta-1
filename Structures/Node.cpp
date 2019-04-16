//
// Created by dcamachog1501 on 16/04/19.
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
    *proceso=p;
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

void Node::setNext(Node n)
{
    Node* nd= new Node();
    *nd= n;
    next=nd;
}

void Node::setNext(Node *n)
{
    this->next=n;
}

