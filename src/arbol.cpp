#include <map>
#include "arbol.h"
#include "nodo.h"
#include "empleado.h" 
#include "empleadoNomina.h" 
#include "empleadoIndependiente.h" 
#include <iostream>
Arbol::Arbol(int id, Empleado *empleado) {

    Nodo *nodoRaiz = new Nodo(id, empleado);
    this->raiz = nodoRaiz;

    this->elementos.insert(std::pair<int,Nodo *>(id, nodoRaiz));
}

Arbol::~Arbol() {


    delete this->raiz;

}

void Arbol::RootSet(int id, Empleado *empleado) {
    
    Nodo *nodoRaiz = new Nodo(id, empleado);
    this->raiz = nodoRaiz;
    std::cout<<"allgoood";
    this->elementos.insert(std::pair<int,Nodo *>(id, nodoRaiz));

}

void Arbol::AgregarNodo(int id, Empleado *empleado, int idPadre)
{
    Nodo *nodo = new Nodo(id, empleado);


    Nodo *nodoPadre = this->elementos.at(idPadre);
    nodoPadre->AgregarHijo(nodo);


    this->elementos.insert(std::pair<int,Nodo *>(id, nodo));
}

std::ostream& operator << (std::ostream &o, const Arbol &arbol)
{
    Nodo* raiz = arbol.raiz;
    o << *(raiz);

    return o;
}