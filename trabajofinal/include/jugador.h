#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
using namespace std;
class jugador
{
    public:

        jugador(string a = "guest",int b=500):  nombre(a), dinero(b){}


    protected:
        string nombre;
        int dinero;



};

#endif // JUGADOR_H
