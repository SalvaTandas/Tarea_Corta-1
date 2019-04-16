//
// Created by dcamachog1501 on 16/04/19.
//

#ifndef TAREA_CORTA_PROCESS_H
#define TAREA_CORTA_PROCESS_H

#include <string>

using namespace std;

class Process {
    private:
        string* type;
        int* time;
    public:
        Process();
        Process(int t, string s);
        void setTime(int t);
        void setType(string s);
        int getTime();
        string getType();
};


#endif //TAREA_CORTA_PROCESS_H
