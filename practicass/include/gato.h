#ifndef GATO_H
#define GATO_H
#include "Animals.h"
#include <iostream>

using namespace std;

class gato : public Animals
{
    public:

        gato(string gnombre,int gpatas
              ,string graza,string gcolor,string colordeo)
        : Animals(gnombre, gpatas), razaa(graza),coloorp(gcolor),coloro(colordeo){}
        void habla(void){cout << "miau" << endl;}
  /* void getdatosde(){cout << "nombre : " << nombre
   << " , raza : " << razaa
   << " , color de pelo : " << coloorp
    << " , color de ojos : " << coloro << endl;}
*/
    private:
        string razaa;
        string coloorp;
        string coloro;
};


#endif // GATO_H
