#include <map>
#include "arbol.h"
#include "nodo.h"

Arbol::Arbol(int id, int valor) {

    Nodo *nodoRaiz = new Nodo(id, valor);
    this->raiz = nodoRaiz;

    this->elementos.insert(std::pair<int,Nodo *>(id, nodoRaiz));
}

Arbol::~Arbol() {


    delete this->raiz;

}


void Arbol::AgregarNodo(int id, int valor, int idPadre)
{
    Nodo *nodo = new Nodo(id, valor);


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