#ifndef GRAFOS_CAMINOMINIMO_H
#define GRAFOS_CAMINOMINIMO_H
#include <string>
#include "Lista.h"
#include "Vertice.h"
#include <iostream>

const int INFINITO = 99999999;

class CaminoMinimo {
//Atributos
protected:
    int ** matrizAdyacencia;
    Lista<Vertice> * vertices;
    int cantidadVertices;

    int ** matrizCostos;
    int ** matrizCaminos;

    //pre: requiere una matriz de adyacencia bien cargada
    //post: crea la matriz costo inicializandola con los valores de la matriz de adyacencia
    int ** crearMatrizCostos(int ** matrizAdyacencia);

    //post: crea una matriz de caminos
    int ** crearMatrizCaminos();

    //post: libera la memoria de las matrices de costos y caminos
    void liberarMatrices();

    //post: muestra la matriz de costo y de caminos.
    void mostrarMatrices();

    //post:calcula las matrices de costos y caminos.
    void calcularMatrices();

//Métodos
public:
    CaminoMinimo(Lista<Vertice> * vertices, int** matrizAdyacencia);

    //post: muestra por pantalla el camino mínimo entre el origen y el destino, detallando su recorrido y peso
    void caminoMinimo(int origen, int destino);

    ~CaminoMinimo();
};


#endif //GRAFOS_CAMINOMINIMO_H
