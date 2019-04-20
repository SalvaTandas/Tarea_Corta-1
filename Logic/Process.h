//
// Created by dcamachog1501 on 16/04/19.
//

#ifndef TAREA_CORTA_PROCESS_H
#define TAREA_CORTA_PROCESS_H

#include <string>

using namespace std;

class Process {
    private:
        string type;
        string ctype;
        int time;
        int pnumber;
        int porder;
    public:
        Process();
        Process(int t, string tp,string ct,int pn,int po);
        void setTime(int t);
        void setType(string s);
        int getTime();
        string getType();
        void setPnumber(int p);
        int getPnumber();
        void setPorder(int p);
        int getPorder();
        string getCtype();
};


#endif //TAREA_CORTA_PROCESS_H
