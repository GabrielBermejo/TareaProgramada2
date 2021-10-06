#ifndef EMPLEADONOMINA_H
#define EMPLEADONOMINA_H

#include "empleado.h"
#include <string>

class EmpleadoIndependiente : public Empleado {
    int id;
    std::string nombre;
    std::string apellido;
    std::string email;
    int tipo;
    int id_supervisor;
    float montoporhora;
    int horas;
    float pago;
    public:
        EmpleadoIndependiente(int, char[], char[], char[], int, int, int, int);
        virtual void CalculoPago(); 
        //virtual std::string ObtenerNombre();
        float getPago();
        
};

#endif