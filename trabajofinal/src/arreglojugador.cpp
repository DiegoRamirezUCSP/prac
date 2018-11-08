#include "arreglojugador.h"
#include <iostream>
using namespace std;
arreglojugador::arreglojugador()
{
    size = 0;
    jug = new jugador[size];
}


arreglojugador::arreglojugador(const jugador pts[],
                               const int sizee)
{
    size = sizee;
    jug=new jugador[sizee];
    for(int i = 0;i < sizee; ++i)
    jug[i] = pts[i];
}
arreglojugador::arreglojugador(const arreglojugador &np){
    size = np.size;
    jug = new jugador[size];
    for(int i = 0; i < size; i++)
        jug[i]= np.jug[i];
}

arreglojugador::~arreglojugador()
{
    delete[] jug;
}

void arreglojugador::resizeju(int newSize){
   jugador *pts = new jugador[newSize];
    int minSize = ( newSize > size ? size : newSize);
    for (int i = 0; i < minSize ; i++)
    pts[i] = jug[i];
    delete[] jug;
    size = newSize;
    jug = pts;
}

void arreglojugador::push_backk(const jugador &newplayer) {
    resizeju(size + 1);
    jug[size - 1] = newplayer;
}

void arreglojugador::removee(const int pos){
    if((pos >= 0) && (pos < size)){
        for(int i = pos; i < size - 2; i++)
            jug[i] = jug[i + 1];
    resizee(size - 1);
    }
}
