#include "Vuelo.h"

Vuelo::Vuelo(string codigo_IATA_partida,
        string nombre_aeropuerto_partida,
        string ciudad_partida,
        string pais_partida,
        string codigo_IATA_destino,
        string nombre_aeropuerto_destino,
        string ciudad_destino,
        string pais_destino,
        int costo_vuelo)
{
    this ->codigo_IATA_partida = codigo_IATA_partida;
    this -> nombre_aeropuerto_partida = nombre_aeropuerto_partida;
    this -> ciudad_partida = ciudad_partida;
    this -> pais_partida = pais_partida;
    this -> codigo_IATA_destino = codigo_IATA_destino;
    this -> nombre_aeropuerto_destino = nombre_aeropuerto_destino;
    this -> ciudad_destino = ciudad_destino;
    this -> pais_destino = pais_destino;
    this -> costo_vuelo = costo_vuelo;

}

Vuelo::~Vuelo()
{
}

string Vuelo:: obtener_codigo_IATA_partida(){
    return codigo_IATA_partida;
}

string Vuelo:: obtener_nombre_aeropuerto_partida(){
    return nombre_aeropuerto_partida;
}

string Vuelo:: obtener_ciudad_partida(){
    return ciudad_partida;
}

string Vuelo:: obtener_pais_partida(){
    return pais_partida;
}

string Vuelo:: obtener_codigo_IATA_destino(){
    return codigo_IATA_destino;
}

string Vuelo:: obtener_nombre_aeropuerto_destino(){
    return nombre_aeropuerto_destino;
}

string Vuelo:: obtener_ciudad_destino(){
    return ciudad_destino;
}

string Vuelo:: obtener_pais_destino(){
    return pais_destino;
}

int Vuelo:: obtener_costo_vuelo(){
    return costo_vuelo;
}

string Vuelo:: obtener_detalle_partida(){
    return codigo_IATA_partida + " " + nombre_aeropuerto_partida + " " + ciudad_partida + " " + pais_partida;
}

string Vuelo:: obtener_detalle_destino(){
    return codigo_IATA_destino + " " + nombre_aeropuerto_destino + " " + ciudad_destino + " " + pais_destino;
}

void Vuelo:: obtener_detalle(){
    cout << codigo_IATA_partida << " " << nombre_aeropuerto_partida << " " << ciudad_partida << " " << pais_partida << " " << codigo_IATA_destino << " " << nombre_aeropuerto_destino << " " << ciudad_destino << " " << pais_destino << " " << costo_vuelo;
}