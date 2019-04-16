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
    this->waitingLane= new Lane("");
    waitingLane->setLimit(-1);
    waitingLane->setType("Espera");

}

void Factory::processMaker(string pType, string lType)
{
    Process p;
    if(lType=="Tipo1")
    {
        if(pType=="TipoA")
        {
            p= Process(2,pType);
            type1->add(p);
        }
        if(pType=="TipoB")
        {
            p= Process(2,pType);
            type1->add(p);
        }
        if(pType=="TipoC")
        {
            p= Process(4,pType);
            type1->add(p);
        }
        if(pType=="TipoD")
        {
            p= Process(1,pType);
            type1->add(p);
        }
        if(pType=="TipoE")
        {
            p= Process(3,pType);
            type1->add(p);
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType);
            type1->add(p);
        }
    }
    else if(lType=="Tipo2")
    {
        if(pType=="TipoA")
        {
            p= Process(1,pType);
            type2->add(p);
        }
        if(pType=="TipoB")
        {
            p= Process(1,pType);
            type2->add(p);
        }
        if(pType=="TipoC")
        {
            p= Process(2,pType);
            type2->add(p);
        }
        if(pType=="TipoD")
        {
            p= Process(3,pType);
            type2->add(p);
        }
        if(pType=="TipoE")
        {
            p= Process(2,pType);
            type2->add(p);
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType);
            type2->add(p);
        }
    }
    else if(lType=="Tipo3")
    {
        if(pType=="TipoA")
        {
            p= Process(3,pType);
            type3->add(p);
        }
        if(pType=="TipoB")
        {
            p= Process(1,pType);
            type3->add(p);
        }
        if(pType=="TipoC")
        {
            p= Process(2,pType);
            type3->add(p);
        }
        if(pType=="TipoD")
        {
            p= Process(1,pType);
            type3->add(p);
        }
        if(pType=="TipoE")
        {
            p= Process(4,pType);
            type3->add(p);
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType);
            type3->add(p);
        }
    }
    else if(lType=="Tipo4")
    {
        if(pType=="TipoA")
        {
            p= Process(3,pType);
            type4->add(p);
        }
        if(pType=="TipoB")
        {
            p= Process(2,pType);
            type4->add(p);
        }
        if(pType=="TipoC")
        {
            p= Process(1,pType);
            type4->add(p);
        }
        if(pType=="TipoD")
        {
            p= Process(4,pType);
            type4->add(p);
        }
        if(pType=="TipoE")
        {
            p= Process(1,pType);
            type4->add(p);
        }
        if(pType=="TipoF")
        {
            p= Process(2,pType);
            type4->add(p);
        }
    }
    else if(lType=="Tipo5")
    {
        if(pType=="TipoA")
        {
            p= Process(1,pType);
            type5->add(p);
        }
        if(pType=="TipoB")
        {
            p= Process(2,pType);
            type5->add(p);
        }
        if(pType=="TipoC")
        {
            p= Process(4,pType);
            type5->add(p);
        }
        if(pType=="TipoD")
        {
            p= Process(3,pType);
            type5->add(p);
        }
        if(pType=="TipoE")
        {
            p= Process(4,pType);
            type5->add(p);
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType);
            type5->add(p);
        }
    }
    else if(lType=="Tipo6")
    {
        if(pType=="TipoA")
        {
            p= Process(4,pType);
            type6->add(p);
        }
        if(pType=="TipoB")
        {
            p= Process(4,pType);
            type6->add(p);
        }
        if(pType=="TipoC")
        {
            p= Process(2,pType);
            type6->add(p);
        }
        if(pType=="TipoD")
        {
            p= Process(1,pType);
            type6->add(p);
        }
        if(pType=="TipoE")
        {
            p= Process(3,pType);
            type6->add(p);
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType);
            type6->add(p);
        }
    }
}
