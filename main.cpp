#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <cctype>
#include "Logic/Process_Maker.h"
#include "Logic/Factory.h"

using namespace sf;
using namespace std;
Process_Maker* Factory::pMaker= new Process_Maker();
int Factory::pCounter=0;
RenderWindow Factory::windowM(sf::VideoMode(1100, 750), "SFML Work!");
int main()
{
        Factory *f = new Factory();
        f->Initialize();
        f->start();


return 0;
}