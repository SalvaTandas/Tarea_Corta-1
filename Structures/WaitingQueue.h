//
// Created by dcamachog1501 on 19/04/19.
//

#ifndef TAREA_CORTA_WAITINGQUEUE_H
#define TAREA_CORTA_WAITINGQUEUE_H


#include "Node.h"

class WaitingQueue
{
    private:
        Node* head;
        int length;
    public:
        WaitingQueue();
        Process* pop();
        void del();
        void add(Process* p);
};


#endif //TAREA_CORTA_WAITINGQUEUE_H
