#ifndef NODO_H
#define NODO_H
#include "empleado.h" 
#include <vector>

class Nodo {

    int id;
    Empleado *empleado;
    std::vector<Nodo *> hijos;
    
    public:
    Nodo(int id, Empleado *empleado);
    ~Nodo();

    void AgregarHijo(Nodo *hijo);

    friend std::ostream& operator << (std::ostream &o, const Nodo &nodo);
};

#endif