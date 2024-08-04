#include "CaminoMinimo.h"

CaminoMinimo::CaminoMinimo(Lista<Vertice> *vertices, int **matrizAdyacencia) {
    this -> vertices = vertices;
    this -> matrizAdyacencia = matrizAdyacencia;
    cantidadVertices = vertices -> obtenerCantidadDeElementos();
    calcularMatrices();
}

int ** CaminoMinimo::crearMatrizCaminos(){

    int ** caminos = new int*[cantidadVertices];
    for(int i = 0; i < cantidadVertices; i++){
        caminos[i] = new int[cantidadVertices];
    }

    for(int i = 0; i < cantidadVertices; i++){
        for(int j = 0; j < cantidadVertices; j++) {
            if(matrizAdyacencia[i][j] == INFINITO){
                caminos[i][j] = -1;
            } else {
                caminos[i][j] = j;
            }
            
        }
    }

    return caminos;
}

int ** CaminoMinimo::crearMatrizCostos(int ** matrizAdyacencia){

    int ** costos = new int*[cantidadVertices];
    for(int i = 0; i < cantidadVertices; i++){
        costos[i] = new int[cantidadVertices];
    }

    for(int i = 0; i < cantidadVertices; i++){
        for(int j = 0; j < cantidadVertices; j++){
            costos[i][j] = matrizAdyacencia[i][j];
        }
    }
    return costos;
}

void CaminoMinimo::mostrarMatrices(){
    cout << "Matriz de costos:      ||           Matriz de caminos:" << endl;
    string filaCostos;
    string filaCaminos;
    for(int i = 0; i < cantidadVertices; i++){
        for(int j = 0; j < cantidadVertices * 2; j++) {
            if(j == cantidadVertices * 2 - 1){
                filaCostos += "            ||           ";
                filaCaminos += "\n";
            } else if(j % 2 == 0){
                if(matrizCostos[i][j/2] == INFINITO){
                    filaCostos += "i";
                } else {
                    filaCostos += to_string(matrizCostos[i][j/2]);
                }

                if(matrizCaminos[i][j/2] == POSICION_NO_ENCONTRADA){
                    filaCaminos += "-";
                } else {
                    filaCaminos += to_string(matrizCaminos[i][j/2]);
                }
            } else{
                filaCaminos += "|";
                filaCostos += "|";
            }
        }
        cout << filaCostos << filaCaminos;
        filaCostos = "";
        filaCaminos = "";
    }
    cout << endl;
}

void CaminoMinimo::calcularMatrices() {

    cantidadVertices = vertices -> obtenerCantidadDeElementos();
    matrizCostos = crearMatrizCostos(matrizAdyacencia);
    matrizCaminos = crearMatrizCaminos();

    // ToDo: Escribir el código necesario
    for (int k = 0; k < cantidadVertices; k++){
        for (int i = 0; i < cantidadVertices; i++){
            for (int j = 0; j < cantidadVertices; j++){
                if(matrizCostos[i][j] > matrizCostos[i][k]+matrizCostos[k][j]){
                    matrizCostos[i][j] = matrizCostos[i][k]+matrizCostos[k][j];
                    matrizCaminos[i][j]= matrizCaminos[i][k];
                }
            }
         }
        }
    


}

void CaminoMinimo::caminoMinimo(int origen, int destino) {
    if(matrizCaminos[origen][destino] == POSICION_NO_ENCONTRADA){
        cout << "No hay un vuelo que conecte de " <<  vertices->obtenerNombre(origen + 1) << " a " << vertices->obtenerNombre(destino + 1);
    } else {
        cout << "El camino minimo que une " <<  vertices->obtenerNombre(origen + 1) << " con " << vertices->obtenerNombre(destino + 1);
        cout << " tiene un costo de: " << matrizCostos[origen][destino] << " y es el siguiente: ";
        cout << vertices->obtenerNombre(origen + 1);
        do {
            origen = matrizCaminos[origen][destino];
            cout << " -> " << vertices->obtenerNombre(origen + 1);
        } while(origen != destino);
    }
    cout << endl;

}

void CaminoMinimo::liberarMatrices() {
    if(matrizCostos != nullptr && matrizCaminos != nullptr){
        for(int i = 0; i < cantidadVertices; i++){
            delete[] matrizCostos[i];
            delete[] matrizCaminos[i];
        }
        delete[] matrizCostos;
        delete[] matrizCaminos;

        matrizCostos = nullptr;
        matrizCaminos = nullptr;
    }
}

CaminoMinimo::~CaminoMinimo(){
    liberarMatrices();
}

