#include <iostream>
#include "estructuraM.h"

using namespace std;

int main() {
    // Ejemplo de uso del módulo para crear una estructura M de tamaño variable con espacio en blanco en el centro
    int tamano;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> tamano;

    EstructuraM M = crearEstructuraM(tamano);

    // Impresión de la estructura creada (solo como ejemplo)
    cout << "Estructura M creada de tamaño " << M.filas << "x" << M.columnas << " con espacio en blanco en el centro:" << endl;
    imprimirEstructuraM(M);

    int numRotaciones;
    cout << "\nIngrese el número de rotaciones que desea realizar: ";
    cin >> numRotaciones;

    rotarAntihorario(M, numRotaciones);
    cout << "\nEstructura M rotada " << numRotaciones << " veces en sentido antihorario:" << endl;
    imprimirEstructuraM(M);

    // Liberar memoria asignada a la estructura M
    liberarEstructuraM(M);

    return 0;
}


