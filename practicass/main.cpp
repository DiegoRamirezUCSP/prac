#include <iostream>
#include "Animals.h"
#include "Perro.h"
#include "gato.h"
#include "loro.h"
#include "Animalarray.h"
#include "Animals3.h"
using namespace std;

int main()
{
    gato michifu("michifu",4,"persa","negra","negro");
    Perro doky("doky",4,"dalmata","blanco");
    loro perso("perso",2,"verde");
    Animals *aa22 = &michifu;
    Animals *jgb215 = &doky;
    doky.hacerHablar();
    michifu.hacerHablar();
    perso.hacerHablar();
    aa22->hacerHablar();
    jgb215->hacerHablar();

    Animals3 a("a",3);
    Animals3 b("b",5);
    Animals3 c("c",4);
    Animals3 d("d",2);

    const Animals3 zoo[]={a,b,c};
    const Animals3 zoo2[]={a,b,c};
    int size = sizeof(zoo)/sizeof(zoo[0]);
    int size2 = sizeof(zoo2)/sizeof(zoo2[0]);
    Animalarray aa(zoo,size);
    Animalarray ss(zoo2,size2);
    ss.clear();
    Animalarray bb = aa;
    aa.push_back(d);
    bb.print();

    return 0;
}
