//
// Created by sebas211288 on 24/04/19.
//

#ifndef GAME_PROCESS_H
#define GAME_PROCESS_H

#include <SFML/Graphics.hpp>
#include <string>
#include <fstream>
#include <cctype>
using namespace sf;
using namespace std;

class Process {
private:
    string type;
    string ctype;
    int time;
    int pnumber;
    int porder;
    int x;
    int y;
    RectangleShape rect;
    sf::Text text;
public:
    Process();
    Process(int t, string tp,string ct,int pn,int po,int x,int y);
    void setTime(int t);
    void setType(string s);
    int getTime();
    string getType();
    void setPnumber(int p);
    int getPnumber();
    void setPorder(int p);
    int getPorder();
    string getCtype();
    void updateRect(int x,int y);
    int getX();
    int getY();

    RectangleShape getRect();

    Text getText();
};


#endif //GAME_PROCESS_H
