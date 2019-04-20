//
// Created by dcamachog1501 on 16/04/19.
//

#ifndef TAREA_CORTA_Car_Lane_H
#define TAREA_CORTA_Car_Lane_H


#include <vector>
#include "Node.h"

class Car_Lane{
    private:
        int length;
        string type;
        Node* head;
        vector<string> schedule;
        int current;
    public:
        Car_Lane(string sch);
        Node* getHead();
        int getLength();
        void add(Process p);
        Process get(int i);
        void setType(string s);
        void createSchedule();
        void print();
        Process* next(int porder);
        Process getCurrent();
};


#endif //TAREA_CORTA_Car_Lane_H
