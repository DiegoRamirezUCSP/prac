#ifndef ANIMALS3_H
#define ANIMALS3_H
#include <iostream>

using namespace std;


class Animals3
{
    public:
         Animals3(string n = " ",int p = 0) : nombre(n) , nroPatas(p){}
            void habla(void){cout << "guaarr";}
            void hacerHablar(){
                this->habla();
            }
     protected:
        string nombre;
        int nroPatas;

    private:
};

#endif // ANIMALS3_H
