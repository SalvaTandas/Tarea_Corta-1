//
// Created by dcamachog1501 on 19/04/19.
//

#ifndef TAREA_CORTA_MAINLANE_H
#define TAREA_CORTA_MAINLANE_H


#include "Node.h"

class MainLane
{
    private:
        Node* head;
        int length;
    public:
        MainLane();
        void add(Process* p);
        void del(int pn);
        Node* getHead();
        int getLength();
        Process* get(int pn);
        void print();

};


#endif //TAREA_CORTA_MAINLANE_H
