//
// Created by sebas211288 on 24/04/19.
//

#include "Process_Maker.h"
#include "Factory.h"

Process_Maker::Process_Maker()
{
        this->x=260;
        this->y=60;
}

Process Process_Maker::make(string lType,string pType)
{
    Process p;
    if(lType=="Tipo1")
    {
        if(pType.compare("TipoA")==0)
        {
            p= Process(2,pType,lType,Factory::pCounter++,1,x,y);

            return p;
        }
        if(pType=="TipoB")
        {
            p= Process(2,pType,lType,Factory::pCounter++,2,x,y);
            return p;
        }
        if(pType=="TipoC")
        {
            p= Process(4,pType,lType,Factory::pCounter++,3,x,y);
            return p;
        }
        if(pType=="TipoD")
        {
            p= Process(1,pType,lType,Factory::pCounter++,4,x,y);
            return p;
        }
        if(pType=="TipoE")
        {
            p= Process(3,pType,lType,Factory::pCounter++,5,x,y);
            return p;
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType,lType,Factory::pCounter++,6,x,y);
            return p;
        }
    }
    else if(lType=="Tipo2")
    {
        if(pType=="TipoA")
        {
            p= Process(1,pType,lType,Factory::pCounter++,2,x,y);
            return p;
        }
        if(pType=="TipoB")
        {
            p= Process(1,pType,lType,Factory::pCounter++,3,x,y);
            return p;
        }
        if(pType=="TipoC")
        {
            p= Process(2,pType,lType,Factory::pCounter++,1,x,y);
            return p;
        }
        if(pType=="TipoD")
        {
            p= Process(3,pType,lType,Factory::pCounter++,5,x,y);
            return p;
        }
        if(pType=="TipoE")
        {
            p= Process(2,pType,lType,Factory::pCounter++,4,x,y);
            return p;
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType,lType,Factory::pCounter++,6,x,y);
            return p;
        }
    }
    else if(lType=="Tipo3")
    {
        if(pType=="TipoA")
        {
            p= Process(3,pType,lType,Factory::pCounter++,3,x,y);
            return p;
        }
        if(pType=="TipoB")
        {
            p= Process(1,pType,lType,Factory::pCounter++,5,x,y);
            return p;
        }
        if(pType=="TipoC")
        {
            p= Process(2,pType,lType,Factory::pCounter++,4,x,y);
            return p;
        }
        if(pType=="TipoD")
        {
            p= Process(1,pType,lType,Factory::pCounter++,1,x,y);
            return p;
        }
        if(pType=="TipoE")
        {
            p= Process(4,pType,lType,Factory::pCounter++,2,x,y);
            return p;
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType,lType,Factory::pCounter++,6,x,y);
            return p;
        }
    }
    else if(lType=="Tipo4")
    {
        if(pType=="TipoA")
        {
            p= Process(3,pType,lType,Factory::pCounter++,4,x,y);
            return p;
        }
        if(pType=="TipoB")
        {
            p= Process(2,pType,lType,Factory::pCounter++,1,x,y);
            return p;
        }
        if(pType=="TipoC")
        {
            p= Process(1,pType,lType,Factory::pCounter++,2,x,y);
            return p;
        }
        if(pType=="TipoD")
        {
            p= Process(4,pType,lType,Factory::pCounter++,3,x,y);
            return p;
        }
        if(pType=="TipoE")
        {
            p= Process(1,pType,lType,Factory::pCounter++,6,x,y);
            return p;
        }
        if(pType=="TipoF")
        {
            p= Process(2,pType,lType,Factory::pCounter++,5,x,y);
            return p;
        }
    }
    else if(lType=="Tipo5")
    {
        if(pType=="TipoA")
        {
            p= Process(1,pType,lType,Factory::pCounter++,5,x,y);
            return p;
        }
        if(pType=="TipoB")
        {
            p= Process(2,pType,lType,Factory::pCounter++,3,x,y);
            return p;
        }
        if(pType=="TipoC")
        {
            p= Process(4,pType,lType,Factory::pCounter++,4,x,y);
            return p;
        }
        if(pType=="TipoD")
        {
            p= Process(3,pType,lType,Factory::pCounter++,6,x,y);
            return p;
        }
        if(pType=="TipoE")
        {
            p= Process(4,pType,lType,Factory::pCounter++,1,x,y);
            return p;
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType,lType,Factory::pCounter++,2,x,y);
            return p;
        }
    }
    else if(lType=="Tipo6")
    {
        if(pType=="TipoA")
        {
            p= Process(4,pType,lType,Factory::pCounter++,6,x,y);
            return p;
        }
        if(pType=="TipoB")
        {
            p= Process(4,pType,lType,Factory::pCounter++,4,x,y);
            return p;
        }
        if(pType=="TipoC")
        {
            p= Process(2,pType,lType,Factory::pCounter++,3,x,y);
            return p;
        }
        if(pType=="TipoD")
        {
            p= Process(1,pType,lType,Factory::pCounter++,2,x,y);
            return p;
        }
        if(pType=="TipoE")
        {
            p= Process(3,pType,lType,Factory::pCounter++,5,x,y);
            return p;
        }
        if(pType=="TipoF")
        {
            p= Process(1,pType,lType,Factory::pCounter++,1,x,y);
            return p;
        }
    }
}

