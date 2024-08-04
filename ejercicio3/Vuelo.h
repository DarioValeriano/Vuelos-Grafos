#ifndef VUELO
#define VUELO
#include <iostream>
using namespace std;

class Vuelo{
    private:
        /* data */
        string codigo_IATA_partida;
        string nombre_aeropuerto_partida;
        string ciudad_partida;
        string pais_partida;
        string codigo_IATA_destino;
        string nombre_aeropuerto_destino;
        string ciudad_destino;
        string pais_destino;
        int costo_vuelo;

    public:
        Vuelo(string codigo_IATA_partida,
        string nombre_aeropuerto_partida,
        string ciudad_partida,
        string pais_partida,
        string codigo_IATA_destino,
        string nombre_aeropuerto_destino,
        string ciudad_destino,
        string pais_destino,
        int costo_vuelo);
        ~Vuelo();
        string obtener_codigo_IATA_partida();
        string obtener_nombre_aeropuerto_partida();
        string obtener_ciudad_partida();
        string obtener_pais_partida();
        string obtener_codigo_IATA_destino();
        string obtener_nombre_aeropuerto_destino();
        string obtener_ciudad_destino();
        string obtener_pais_destino();
        int obtener_costo_vuelo();
        string obtener_detalle_partida();
        string obtener_detalle_destino();
        void obtener_detalle();
        
};


#endif // VUELO