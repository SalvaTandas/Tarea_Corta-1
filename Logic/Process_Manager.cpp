//
// Created by sebas211288 on 24/04/19.
//

#include "Process_Manager.h"

Process_Manager::Process_Manager()
{
    this->main= nullptr;
    this->waiting= nullptr;
    this->type="Undefined";
    this->current=0;
}

Process_Manager::Process_Manager(MainLane *m, WaitingQueue *w)
{
    this->main=m;
    this->waiting=w;
    this->type="Undefined";
    this->current=0;
}

void Process_Manager::setType(string s)
{
    this->type=s;
}

void Process_Manager::add(Process* p)
{
    if(current==3)
    {
        waiting->add(p);
    }
    else
    {
        main->add(p);
        current++;
    }
}

void Process_Manager::del(int pn)
{
    main->del(pn);
    current--;
}
