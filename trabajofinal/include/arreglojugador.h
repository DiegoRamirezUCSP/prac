#ifndef ARREGLOJUGADOR_H
#define ARREGLOJUGADOR_H
#include "jugador.h"

class arreglojugador
{
    int size;
    jugador *jug;
    void resizeju (int sizee);

    public:

    arreglojugador();
    arreglojugador(const jugador pts[],const int sizee);
    arreglojugador(const arreglojugador &np);
    ~arreglojugador();
    void push_backk(const jugador &p);
    //void insert(const int pos ,const jugador &p);
    void removee(const int pos);

};

    #endif // ARREGLOJUGADOR_H
