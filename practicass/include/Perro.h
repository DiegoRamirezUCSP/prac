#ifndef PERRO_H
#define PERRO_H
#include "Animals.h"
#include <iostream>

using namespace std;

class Perro : public Animals
{
    public:

        Perro(string pnombre,int ppatas
              ,string praza,string ccolor)
        : Animals(pnombre, ppatas), raza(praza),color(ccolor){}
        void habla(void){cout << "guau" << endl;}
   /* void getdatosde(){cout << "nombre : " << nombre
    << " , raza : " << raza
    << " , color : " << color << endl;}
*/
    private:
        string raza;
        string color;
};

#endif // PERRO_H
