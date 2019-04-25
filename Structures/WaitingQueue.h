//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_WAITINGQUEUE_H
#define GAME_WAITINGQUEUE_H


#include "Node.h"

class WaitingQueue
{
private:
    Node* head;
    int length;
    int x;
    int y;
public:
    WaitingQueue();
    Process* pop();
    void del();
    void add(Process* p);
};


#endif //GAME_WAITINGQUEUE_H
