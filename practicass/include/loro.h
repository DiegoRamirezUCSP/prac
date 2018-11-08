#ifndef LORO_H
#define LORO_H
#include "Animals.h"
#include <iostream>

using namespace std;

class loro : public Animals
{
    public:
        loro(string nombre,int patasl,string color)
             : Animals(nombre,patasl), coloor(color){}
              void habla(void){cout << "graakk" << endl;}
        //virtual ~loro();

    protected:

    private:
        string coloor;
};

#endif // LORO_H
