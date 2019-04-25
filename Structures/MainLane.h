//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_MAINLANE_H
#define GAME_MAINLANE_H


#include "Node.h"

class MainLane
{
private:
    Node* head;
    int length;
    int x;
    int y;
public:
    MainLane();
    void add(Process* p);
    void del(int pn);
    Node* getHead();
    int getLength();
    Process* get(int pn);
    void print();

};



#endif //GAME_MAINLANE_H
