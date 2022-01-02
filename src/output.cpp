#include <fstream>
#include <iostream>
#include "arbol.h"
void output(Arbol* arbol)
{
    
    std::ofstream file("Reporte.csv", std::ofstream::out);

    for (arbol->elementos) {

        file << elementos.find()->second->getID() << elementos.find()->second->getNombreCompleto() << elementos.find()->second->getPago()  << std::endl;
    }


    // Importante!
    file.close();

}
