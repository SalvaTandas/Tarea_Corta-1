//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_NODE_H
#define GAME_NODE_H

#include <string>
#include "../Logic/Process.h"

using namespace std;
class Node {
private:
    Process* proceso;
    Node* next;
public:
    Node();
    Node(Process p);
    Node (Process* p);
    Node* getNext();
    Process* getProcess();
    void setProcess(Process p);
    void setNext(Node n);
    void setNext(Node* n);


};



#endif //GAME_NODE_H
