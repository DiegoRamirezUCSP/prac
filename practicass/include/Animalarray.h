#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H
#include "Animals3.h"
#include <iostream>

using namespace std;

class Animalarray
{
    public:
        Animalarray();
        Animalarray(const Animals3 pts[],const int sizee);
        Animalarray(const Animalarray &o);
        ~Animalarray();
        void clear ();
        int getSize () const { return sizee ;}
        void push_back ( const Animals3 &p);
        void insert (const int pos , const Animals3 &p);
        void remove ( const int pos );
        void print();
//protected:

    private:
        Animals3 *arr;
        int sizee;
        void resize (int size );
};

#endif // ANIMALARRAY_H
