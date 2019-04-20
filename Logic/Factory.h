//
// Created by dcamachog1501 on 16/04/19.
//

#ifndef TAREA_CORTA_FACTORY_H
#define TAREA_CORTA_FACTORY_H


#include "../Structures/Lane.h"
#include "Process_Maker.h"

class Factory
{
    private:
        Lane* type1;
        Lane* type2;
        Lane* type3;
        Lane* type4;
        Lane* type5;
        Lane* type6;
    public:
        Factory();
        static Process_Maker* pMaker;
        static Lane* waitingLane;


};


#endif //TAREA_CORTA_FACTORY_H
