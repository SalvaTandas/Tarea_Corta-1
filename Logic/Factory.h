//
// Created by dcamachog1501 on 16/04/19.
//

#ifndef TAREA_CORTA_FACTORY_H
#define TAREA_CORTA_FACTORY_H


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

    public:
        Factory();
        void Initialize();
        void Updater();
        Process_Manager* definer(string type);
        Car_Lane* definer(string ltype,int porder);
        static Process_Maker* pMaker;
        static int pCounter;


    void start();
};


#endif //TAREA_CORTA_FACTORY_H
