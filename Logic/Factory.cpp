//
// Created by dcamachog1501 on 16/04/19.
//

#include "Factory.h"

Factory::Factory()
{
    this->type1= new Lane("A/B/C/D/E/F");
    type1->setLimit(3);
    type1->setType("Tipo1");
    this->type2= new Lane("C/A/B/E/D/F");
    type2->setLimit(3);
    type2->setType("Tipo2");
    this->type3= new Lane("D/E/A/C/B/F");
    type3->setLimit(3);
    type3->setType("Tipo3");
    this->type4= new Lane("B/C/D/A/F/E");
    type4->setLimit(3);
    type4->setType("Tipo4");
    this->type5= new Lane("E/F/B/C/A/D");
    type5->setLimit(3);
    type5->setType("Tipo5");
    this->type6= new Lane("F/D/C/B/E/A");
    type6->setLimit(3);
    type6->setType("Tipo6");
    this->waitingLane= new Lane("/0");
    waitingLane->setLimit(-1);
    waitingLane->setType("Espera");

}

