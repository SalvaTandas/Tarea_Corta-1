#include <iostream>
#include "../Logic/Factory.h"

Process_Maker* Factory::pMaker= new Process_Maker();
Lane* Factory::waitingLane= new Lane("/0");
int main() {
    Lane* l= new Lane("C/A/B/E/D/F");
    l->setLimit(3);
    l->setType("Tipo2");
    l->addSchedule();
    l->start();
    /*l->print();
    l->delTop();
    l->print();*/
    while(true)
    {

    }
    return 0;
}