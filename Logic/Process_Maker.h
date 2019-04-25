//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_PROCESS_MAKER_H
#define GAME_PROCESS_MAKER_H


#include "Process.h"

class Process_Maker {
public:
    Process_Maker();
    Process make(string lt,string pt);
private:
    int x;
    int y;

};



#endif //GAME_PROCESS_MAKER_H
