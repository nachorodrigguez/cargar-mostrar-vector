#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int *vec = nullptr;
    int opcion, tamanio;
    bool continuar = true;

    while (continuar == true){
       mostrarMenu();
       cin >> opcion;

       switch(opcion){
           case 1:
               if (vec != nullptr){
                   delete []vec;
               }
               vec = cargarVector(tamanio);
               break;
           case 2:
               mostrarVector(vec,tamanio);
               break;
           case 3:
               cout << "Fin del programa." << endl;
               continuar = false;
               break;
       }
    }
    return 0;
}
