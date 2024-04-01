#include <iostream>

using namespace std;

// Definición de la estructura de datos M
struct EstructuraM {
    int **datos;  // Puntero a puntero para representar la matriz de enteros
    int filas;
    int columnas;
};

// Función para crear una estructura de datos M con tamaño variable y espacio en blanco en el centro
EstructuraM crearEstructuraM(int tamano) {
    // Verificar que el tamaño sea impar
    if (tamano % 2 == 0) {
        tamano++; // Aumentar en 1 si es par para asegurar que sea impar
    }

    EstructuraM estructura;
    estructura.filas = tamano;
    estructura.columnas = tamano;
    
    // Asignar memoria dinámica para la matriz
    estructura.datos = new int*[tamano];
    for (int i = 0; i < tamano; i++) {
        estructura.datos[i] = new int[tamano];
    }

    // Rellenar la matriz con valores -1 (espacios en blanco)
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            estructura.datos[i][j] = -1;
        }
    }

    // Rellenar el centro de la matriz con números del 1 al tamaño^2 excluyendo el centro
    int num = 1;
    int centro = tamano / 2;
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            if (i != centro || j != centro) {
                estructura.datos[i][j] = num++;
            }
        }
    }
    
    return estructura;
}

// Función para liberar la memoria asignada a una estructura M
void liberarEstructuraM(EstructuraM &estructura) {
    for (int i = 0; i < estructura.filas; i++) {
        delete[] estructura.datos[i];
    }
    delete[] estructura.datos;
    estructura.filas = 0;
    estructura.columnas = 0;
}

int main() {
    // Ejemplo de uso del módulo para crear una estructura M de tamaño 3x3 con espacio en blanco en el centro
    int tamano = 4;
    EstructuraM M = crearEstructuraM(tamano);

    // Impresión de la estructura creada (solo como ejemplo)
    cout << "Estructura M creada de tamaño " << M.filas << "x" << M.columnas << " con espacio en blanco en el centro:" << endl;
    for (int i = 0; i < M.filas; i++) {
        for (int j = 0; j < M.columnas; j++) {
            if (M.datos[i][j] == -1) {
                cout << "  ";  // Imprimir espacio en blanco
            } else {
                cout << M.datos[i][j] << " ";
            }
        }
        cout << endl;
    }

    // Liberar memoria asignada a la estructura M
    liberarEstructuraM(M);

    return 0;
}
