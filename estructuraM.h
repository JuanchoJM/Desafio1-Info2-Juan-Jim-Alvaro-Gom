#ifndef ESTRUCTURAM_H
#define ESTRUCTURAM_H

// Definición de la estructura de datos M
struct EstructuraM {
    int **datos;  // Puntero a puntero para representar la matriz de enteros
    int filas;
    int columnas;
};

// Función para crear una estructura de datos M con tamaño variable y espacio en blanco en el centro
EstructuraM crearEstructuraM(int tamano);

// Función para liberar la memoria asignada a una estructura M
void liberarEstructuraM(EstructuraM &estructura);

// Función para rotar la estructura M en sentido antihorario un número de veces especificado
void rotarAntihorario(EstructuraM &estructura, int rotaciones);

// Función para imprimir la estructura M
void imprimirEstructuraM(EstructuraM &estructura);

#endif // ESTRUCTURAM_H
