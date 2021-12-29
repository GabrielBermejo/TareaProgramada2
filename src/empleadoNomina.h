#ifndef EMPLEADONOMINA_H
#define EMPLEADONOMINA_H

#include "empleado.h"
#include <string>

class EmpleadoNomina : public Empleado {
    /*int id;
    std::string nombre;
    std::string apellido;
    std::string email;
    int tipo;
    int id_supervisor;*/
    int salario;
    //float pago;

    public:
        EmpleadoNomina(int, char[], char[], char[], int, int, int);
        float CalculoRetencion(); 
        virtual void CalculoPago(); 
        virtual int getID();
        virtual std::string getNombreCompleto();
        virtual float getPago();
};

#endif