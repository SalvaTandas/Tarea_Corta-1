//
// Created by dcamachog1501 on 16/04/19.
//

#include "Process.h"

Process::Process()
{
    time= 0;
    type= "Unassigned";
    ctype="Unassigned";
    pnumber=0;
    porder=0;
}

Process::Process(int t, string tp,string ct,int pn,int po)
{
    time= t;
    type= tp;
    ctype=ct;
    pnumber=pn;
    porder=po;
}

void Process::setTime(int t)
{
    time=t;
}

void Process::setType(string s)
{
    type=s;
}

int Process::getTime() {
    return time;
}

string Process::getType() {
    return type;
}

void Process::setPnumber(int p)
{
    this->pnumber=p;
}
int Process::getPnumber()
{
    return this->pnumber;
}
void Process::setPorder(int p)
{
    this->porder=p;
}
int Process::getPorder()
{
    return this->porder;
}

string Process::getCtype()
{
    return ctype;
}
