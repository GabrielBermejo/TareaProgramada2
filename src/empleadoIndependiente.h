#ifndef EMPLEADONOMINA_H
#define EMPLEADONOMINA_H

#include "empleado.h"
#include <string>

class EmpleadoIndependiente : public Empleado {
    /*int id;
    std::string nombre;
    std::string apellido;
    std::string email;
    int tipo;
    int id_supervisor;*/
    int montoporhora;
    int horas;
    //float pago;
    public:
        EmpleadoIndependiente(int, char[], char[], char[], int, int, int, int);
        virtual void CalculoPago(); 
        virtual int getID();
        virtual std::string getNombreCompleto();
        virtual float getPago();
        
};

#endif