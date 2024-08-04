#include "Archivo.h"
#include <iostream>

Archivo:: Archivo(string nombre_archivo){
    archivo.open(nombre_archivo);
}

Archivo:: ~Archivo(){
    //destructor
}

string Archivo:: leer_dato(){
    string dato;
    archivo >> dato;
    return dato;
}

void Archivo::cerrar() {
    archivo.close();
}

bool Archivo:: existe_linea(){
    return !archivo.eof();
}