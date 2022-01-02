#include <fstream>
#include <iostream>
#include "output.h"
#include "arbol.h"
Output::Output(){

}
void PrintToFile(Arbol* arbol)
{
    
    std::ofstream file("Reporte.csv", std::ofstream::out);

    for (arbol->elementos) {

        file << elementos.find()->second->getID() << elementos.find()->second->getNombreCompleto() << elementos.find()->second->getPago()  << std::endl;
    }


    // Importante!
    file.close();

}
