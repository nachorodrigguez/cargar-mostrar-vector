#include <iostream>
#include "funciones.h"

using namespace std;

void mostrarMenu(){
    cout << "\n========== MENU ==========" << endl;
    cout << "1. Cargar Vector" << endl;
    cout << "2. Mostrar Vector" << endl;
    cout << "3. Salir" << endl;
    cout << "=================================" << endl;
    cout << "Seleccione una opcion (1-3): ";
}

int* cargarVector(int &tamanio){
    int *vec;
    cout << "Ingrese el tamanio del array: ";
    cin >> tamanio;
    vec = new int [tamanio]{};
    for (int x =0 ; x<tamanio; x++){
        cout << "Ingrese el valor para la posicion " << x+1 << " :";
        cin >> vec[x];
    }
    return vec;
}
void mostrarVector(int *vec, int tamanio){
    for (int x= 0; x<tamanio; x++){
        cout << "Posicion " << x + 1 << " : " << vec[x] << endl;
    }
}
