//
// Created by sebas211288 on 24/04/19.
//

#include <iostream>
#include "Process.h"
#include "Factory.h"

Process::Process()
{
    time= 0;
    type= "Unassigned";
    ctype="Unassigned";
    pnumber=0;
    porder=0;
}

Process::Process(int t, string tp,string ct,int pn,int po, int x,int y)
{
    time= t;
    type= tp;
    ctype=ct;
    pnumber=pn;
    porder=po;
    this->x=x;
    this->y=y;

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
void Process:: updateRect(int x,int y)
{
    this->x=x;
    this->y=y;
    rect.setPosition(x,y);
    //Factory::draw(x,y);
}

int Process::getX() {
    return this->x;
}

int Process::getY() {
    return this->y;
}
RectangleShape Process::getRect()
{
    return rect;
}
Text Process::getText()
{
    return text;
}

