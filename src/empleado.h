#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
    protected:
    int id;
    std::string nombre;
    std::string apellido;
    std::string email;
    int tipo;
    int id_supervisor;
    float pago;
    Empleado() {}
    public:
    
    ~Empleado() {}
    virtual void CalculoPago() = 0;  
    virtual int getID()=0;
    virtual std::string getNombreCompleto()=0;
    virtual float getPago()=0;
    
};

#endif