#ifndef ARCHIVO
#define ARCHIVO
#include <fstream>
using namespace std;

class Archivo {
    private:
        ifstream archivo;
    public:
        Archivo(string nombre_archivo);
        string leer_dato();
        void cerrar();
        bool existe_linea();
        ~Archivo();
};

#endif // ARCHIVO