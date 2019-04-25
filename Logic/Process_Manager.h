//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_PROCESS_MANAGER_H
#define GAME_PROCESS_MANAGER_H

#include <string>
#include "../Structures/MainLane.h"

#include "../Structures/WaitingQueue.h"
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


#endif //GAME_PROCESS_MANAGER_H
