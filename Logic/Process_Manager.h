//
// Created by dcamachog1501 on 19/04/19.
//

#include <string>
#include "../Structures/MainLane.h"
#include "../Structures/WaitingQueue.h"

#ifndef TAREA_CORTA_LANE_MANAGER_H
#define TAREA_CORTA_PROCESS_MANAGER_H
using namespace std;

class Process_Manager
{
    private:
        string type;
        int current;
        MainLane* main;
        WaitingQueue* waiting;
    public:
        Process_Manager();
        Process_Manager(MainLane* m, WaitingQueue* w);
        void setType(string s);
        void add(Process* p);
        void del(int pn);




};


#endif //TAREA_CORTA_LANE_MANAGER_H
