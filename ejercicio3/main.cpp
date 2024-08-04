#include "Grafo.h"
#include "Archivo.h"
#include "Vuelo.h"
#include <iostream>
using namespace std;

int main() {
    Lista<Vuelo> vuelos;
    Archivo aeropuerto("vuelos.txt");
    while (aeropuerto.existe_linea())
    {
        string codigo_IATA_partida = aeropuerto.leer_dato();
        string nombre_aeropuerto_partida = aeropuerto.leer_dato();
        string ciudad_partida = aeropuerto.leer_dato();
        string pais_partida = aeropuerto.leer_dato();
        string codigo_IATA_destino = aeropuerto.leer_dato();
        string nombre_aeropuerto_destino = aeropuerto.leer_dato();
        string ciudad_destino = aeropuerto.leer_dato();
        string pais_destino = aeropuerto.leer_dato();
        int costo_vuelo = stoi(aeropuerto.leer_dato());
        //cout << codigo_IATA_partida << " " << codigo_IATA_destino << " costo:" << costo_vuelo << endl;
        Vuelo vuelo1(codigo_IATA_partida, nombre_aeropuerto_partida, ciudad_partida, pais_partida, codigo_IATA_destino, nombre_aeropuerto_destino, ciudad_destino, pais_destino, costo_vuelo);
        vuelos.agregar_tipo(vuelo1);
    }
    
    /*for (int i = 1; i <= vuelos.obtenerCantidadDeElementos(); i++)
    {   
        cout << vuelos.obtenerNodo(i)->obtener_costo_vuelo() << endl;
    }*/
    
    
    
    

    Lista<Vertice> codigos_IATA;
    for(int j = 1; j <= vuelos.obtenerCantidadDeElementos(); j++){
        int i=1;
        bool repetido_partida = false;
        bool repetido_destino = false;
        while((!repetido_partida || !repetido_destino) && i <= codigos_IATA.obtenerCantidadDeElementos()){
            if(vuelos.obtenerNodo(j)->obtener_codigo_IATA_partida() == codigos_IATA.obtenerNombre(i)){
                repetido_partida = true;
            }
            if(vuelos.obtenerNodo(j)->obtener_codigo_IATA_destino() == codigos_IATA.obtenerNombre(i)){
                repetido_destino = true;
            }
            i+=1;
        }
        if(!repetido_partida){
            codigos_IATA.agregar(vuelos.obtenerNodo(j)->obtener_codigo_IATA_partida());
        }
        if(!repetido_destino){
            codigos_IATA.agregar(vuelos.obtenerNodo(j)->obtener_codigo_IATA_destino());
        }
    }
    
    


    Grafo grafo;
    for (int i = 1; i <= codigos_IATA.obtenerCantidadDeElementos(); i++)
    {   
        grafo.agregarVertice(codigos_IATA.obtenerNombre(i));
    }
    /*
    grafo.agregarVertice("A");
    grafo.agregarVertice("B");
    grafo.agregarVertice("C");
    grafo.agregarVertice("D");
    grafo.agregarVertice("E");
    grafo.agregarVertice("F");
    */
   
    for (int i = 1; i <= vuelos.obtenerCantidadDeElementos(); i++)
    {   
        grafo.agregarCamino(vuelos.obtenerNodo(i)->obtener_codigo_IATA_partida(), vuelos.obtenerNodo(i)->obtener_codigo_IATA_destino(), vuelos.obtenerNodo(i)->obtener_costo_vuelo());
    }
    /*
    grafo.agregarCamino("A", "C", 8);
    grafo.agregarCamino("C", "B", 7);
    grafo.agregarCamino("C", "D", 5);
    grafo.agregarCamino("D", "B", 1);
    grafo.agregarCamino("E", "A", 1);
    grafo.agregarCamino("E", "D", 5);
    */

    grafo.mostrarGrafo();


    /*
    grafo.caminoMinimo("A", "B");
    grafo.caminoMinimo("A", "F");
    grafo.caminoMinimo("D", "C");
    grafo.caminoMinimo("F", "F");
    */

    cout << "Ingrese Codigo IATA de partida:" << endl;
    string iata_partida;
    cin >> iata_partida;
    cout << "Ingrese Codigo IATA de destino:" << endl;
    string iata_destino;
    cin >> iata_destino;

    string partida;
    string destino;
    bool destino_encontrado=false;
    bool partida_encontrada=false;
    int numero_vuelo = 1;
    while ((!partida_encontrada || !destino_encontrado) && numero_vuelo <= vuelos.obtenerCantidadDeElementos()){
        if (!partida_encontrada && vuelos.obtenerNodo(numero_vuelo)->obtener_codigo_IATA_partida() == iata_partida)
        {
            partida = vuelos.obtenerNodo(numero_vuelo)->obtener_detalle_partida();
            partida_encontrada = true;
        } else if(!destino_encontrado && vuelos.obtenerNodo(numero_vuelo)->obtener_codigo_IATA_destino() == iata_destino){
            destino = vuelos.obtenerNodo(numero_vuelo)->obtener_detalle_destino();
            destino_encontrado = true;
        }
        numero_vuelo +=1;
    }
    
    
    
    grafo.caminoMinimo(iata_partida, iata_destino, vuelos);
    return 0;
}
