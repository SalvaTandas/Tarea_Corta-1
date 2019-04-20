//
// Created by dcamachog1501 on 16/04/19.
//

#include "Process.h"

Process::Process()
{
    time= 0;
    type= "Unassigned";
}

Process::Process(int t, string s)
{
    time= t;
    type= s;
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
