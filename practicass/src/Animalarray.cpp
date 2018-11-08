#include "Animalarray.h"
#include "Animals3.h"
#include <iostream>

using namespace std;

Animalarray::Animalarray()
{
    sizee = 0;
    arr = new Animals3[sizee];
}

Animalarray::Animalarray(const Animals3 pts[],const int si)
{
    sizee = si;
    arr = new Animals3[sizee];
    for(int i = 0;i < sizee; i++)
        arr[i]=pts[i];
}
Animalarray::Animalarray(const Animalarray &o){
    sizee = o.sizee;
    arr = new Animals3[sizee];
    for(int i = 0;i < sizee; i++)
        arr[i]=o.arr[i];
}
Animalarray::~Animalarray()
{
    delete[] arr;
}
void Animalarray::resize(int newsize){
    Animals3 *pts = new Animals3 [newsize];
    int minSize = ( newsize > sizee ? sizee : newsize );
    for (int i = 0; i < minSize ; i++)
        pts[i] = arr [i];
    delete [] arr;
    sizee = newsize;
    arr = pts;
}
void Animalarray::clear(){
    resize(0);
}

void Animalarray::push_back(const Animals3 &p){
    resize(sizee + 1);
    arr[sizee - 1] = p;
}

void Animalarray::insert(const int posi, const Animals3 &p){
    resize(sizee + 1);
    for(int i = sizee-1;i > posi;i--)
            arr [i] = arr [i -1];
    arr[posi] = p;
}

void Animalarray::remove(const int posi){
    if( posi >= 0 && posi < sizee ) {
        for(int i = posi; i < sizee - 2; i++) {
            arr[i] = arr[i + 1];
        }
        resize(sizee - 1);
    }
}

void Animalarray::print(){
    for(int i=0;i < sizee;i++){
        arr[i].habla();
        if(i ==sizee-1)
            cout << " ";
        else
            cout << " , ";
          }
    }
