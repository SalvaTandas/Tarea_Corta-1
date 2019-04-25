//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_CAR_LANE_H
#define GAME_CAR_LANE_H


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



#endif //GAME_CAR_LANE_H
