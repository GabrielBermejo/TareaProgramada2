#include <iostream>
#include "arbol.h"
#include "empleadoIndependiente.h"
#include "empleadoNomina.h"
#include "empleado.h"
#include "input.h"
#include "output.h"
#include <string>
int main() {


    /*
    char wow[30]="wow";

    EmpleadoIndependiente* indemp = new EmpleadoIndependiente(1, wow, wow, wow, 1, 1, 7, 60);
            indemp->CalculoPago();
            float result=indemp->getPago();
        std::cout << result;

    /*EmpleadoIndependiente *indemp;*/
    
    /*Arbol *arbol = new Arbol(1, indemp);
    
    EmpleadoIndependiente* indemp2 = new EmpleadoIndependiente(333, wow, wow, wow, 1, 1, 13, 10);
            indemp2->CalculoPago();
            float result2=indemp2->getPago();
        std::cout << result2;
    arbol->AgregarNodo(333, indemp2, 1);
    
    /*Empleado* emp;
    Arbol *arbol = new Arbol(1, emp);*/
    
    /*EmpleadoNomina *nom = new EmpleadoNomina(8, wow, wow, wow, 1, 333, 99);
            nom->CalculoPago();
            float result3=nom->getPago();
        std::cout << result3;
    arbol->AgregarNodo(8, nom, 333);

    

    */

   //reads and stores in an arbol
    Input *in = new Input;
    Arbol *arbol = in->Read();

    //outputs said arbol onto a csv file
    Output *out = new Output;
    out->PrintToFile();


    delete arbol;
    return 0;
}