#include <iostream>
#include "jugador.h"
#include "objetos.h"
#include "arreglojugador.h"
#include "random"
using namespace std;

int comparar(){
    int b;
    cout << "numero de jugadores : ";
    cin >> b;
    if(b <= 1){

        cout << "Numero de jugadores invalido." << endl;
        return comparar();
    }else if(b > 6){
        cout << "Numero de jugadores no mayor a 6." << endl;
        return comparar();
    }
    return b;
}

int main()
{
    string aa;
    int bb=500;
    int cartasT[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int jugadores_max = comparar();
    for(int i = 0;i < jugadores_max;i++){
        cout << "Ingrese su nombre de usuario : ";
        cin >> aa;
        jugador(aa,bb);
        }
}
