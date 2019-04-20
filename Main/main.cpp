#include <iostream>
#include "../Logic/Factory.h"

Process_Maker* Factory::pMaker= new Process_Maker();
int Factory::pCounter=0;
int main() {
    Factory* f= new Factory();
    f->Initialize();
    f->start();
    while(true)
    {

    }
    return 0;
}