//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_FACTORY_H
#define GAME_FACTORY_H


#include "../Structures/Car_Lane.h"
#include "Process_Maker.h"
#include "Process_Manager.h"

class Factory
{
private:
    Process_Manager* typeA;
    Process_Manager* typeB;
    Process_Manager* typeC;
    Process_Manager* typeD;
    Process_Manager* typeE;
    Process_Manager* typeF;

    Car_Lane* type1;
    Car_Lane* type2;
    Car_Lane* type3;
    Car_Lane* type4;
    Car_Lane* type5;
    Car_Lane* type6;

    MainLane* mainLane;
    WaitingQueue* waiting;

    RectangleShape processQueue;
    RectangleShape queue;
    sf::Text textPQ;
    sf::Text textQ;

public:
    Factory();
    void Initialize();
    void Updater();
    void Interface();
    void updateInterface();
    Process_Manager* definer(string type);
    Car_Lane* definer(string ltype,int porder);
    static Process_Maker* pMaker;
    static int pCounter;
    static RenderWindow windowM;
    void draw();

    void start();
};


#endif //GAME_FACTORY_H
