//
// Created by dcamachog1501 on 16/04/19.
//

#include "Process.h"

Process::Process()
{
    time= new int(0);
    type= new string("Unassigned");
}

Process::Process(int t, string s)
{
    time= new int(t);
    type= new string(s);
}

void Process::setTime(int t)
{
    *time=t;
}

void Process::setType(string s)
{
    *type=s;
}

int Process::getTime() {
    return *time;
}

string Process::getType() {
    return *type;
}
