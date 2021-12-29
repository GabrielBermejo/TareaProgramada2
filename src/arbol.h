#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"
#include <map>
#include <iostream>
#include "empleado.h" 

class Arbol {

    Nodo *raiz;
    std::map<int, Nodo *> elementos;

    public:
    Arbol(int id, Empleado *empleado);
    ~Arbol();
    void RootSet(int id, Empleado *empleado);
    void AgregarNodo(int id, Empleado *empleado, int idPadre);

    friend std::ostream& operator << (std::ostream &o, const Arbol &arbol);
};


#endif