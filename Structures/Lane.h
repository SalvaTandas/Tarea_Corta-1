//
// Created by dcamachog1501 on 16/04/19.
//

#ifndef TAREA_CORTA_LANE_H
#define TAREA_CORTA_LANE_H


#include <vector>
#include "Node.h"

class Lane{
    private:
        Node* top;
        Node* bottom;
        int length;
        int limit;
        string type;
        vector<string> schedule;
        int current;
    public:
        Lane(string sch);
        Node *getTop();
        Node* getBottom();
        int getLength();
        void add(Process p);
        void delTop();
        void setTop(Process p);
        void setLimit(int i);
        void setType(string s);
        void work();
        void start();
        void addSchedule();
        void print();
        void addCurrent();
};


#endif //TAREA_CORTA_LANE_H
