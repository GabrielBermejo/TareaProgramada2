#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
    protected:
    Empleado() {}
    public:
    
    ~Empleado() {}
    virtual void CalculoPago() = 0;  
    virtual int getID()=0;
    virtual std::string getNombreCompleto()=0;
    virtual float getPago()=0;
    
};

#endif