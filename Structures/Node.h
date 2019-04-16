//
// Created by dcamachog1501 on 16/04/19.
//

#ifndef TAREA_CORTA_NODE_H
#define TAREA_CORTA_NODE_H

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
        Node* getNext();
        Process* getProcess();
        void setProcess(Process p);
        void setNext(Node n);
        void setNext(Node* n);


};


#endif //TAREA_CORTA_NODE_H
