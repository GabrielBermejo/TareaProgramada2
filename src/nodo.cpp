#include "nodo.h"
#include <iostream>
#include "empleado.h" 
Nodo::Nodo(int id, Empleado* empleado)
{
    this->id = id;
    this->empleado = empleado;
}

Nodo::~Nodo()
{
    std::clog << "Borrando nodo " << this->id << std::endl;

    for (Nodo* hijo : this->hijos)
    {
        delete hijo;
    }

    std::clog << "Termina de borrar nodo " << this->id << std::endl;
}

void Nodo::AgregarHijo(Nodo *hijo) {
    this->hijos.push_back(hijo);
}

std::ostream& operator << (std::ostream &o, const Nodo &nodo)
{
    // Imprimir información del nodo
    o << "Nodo: ";
    o << nodo.id;
    o << ". Valor: ";
    o << nodo.empleado;
    o << std::endl;

    // Imprimir información de cada hijo
    for (Nodo *nodoHijo : nodo.hijos)
    {
        o << *nodoHijo;
    }

    return o;
}