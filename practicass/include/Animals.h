#ifndef ANIMALS_H
#define ANIMALS_H
#include <iostream>

using namespace std;
class Animals
{
    public:
        Animals(string n,int p) : nombre(n) , nroPatas(p){}
        virtual void habla(void)= 0;
        //virtual void getdatode(){cout << "nombre : " << nombre << " patas : " << nroPatas << endl;}
        void hacerHablar(){
            this->habla();
        }

    protected:
        string nombre;
        int nroPatas;

    //private:
};

#endif // ANIMALS_H
