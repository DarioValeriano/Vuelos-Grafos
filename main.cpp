#include "Grafo.h"
#include <iostream>
using namespace std;

int main() {
    Grafo grafo;
    grafo.agregarVertice("A");
    grafo.agregarVertice("B");
    grafo.agregarVertice("C");
    grafo.agregarVertice("D");
    grafo.agregarVertice("E");
    grafo.agregarVertice("F");


    grafo.agregarCamino("A", "C", 8);
    grafo.agregarCamino("C", "B", 7);
    grafo.agregarCamino("C", "D", 5);
    grafo.agregarCamino("D", "B", 1);
    grafo.agregarCamino("E", "A", 1);
    grafo.agregarCamino("E", "D", 5);


    grafo.mostrarGrafo();

    string iata_partida;
    string iata_destino;
    cout << "Ingresar el codigo IATA de partida" << endl;
    cin >> iata_partida;
    cout << "Ingresar el codigo IATA de destino" << endl;
    cin >> iata_destino;
    

    return 0;
}
