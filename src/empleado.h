#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
    int id;
    std::string nombre;
    std::string apellido;
    std::string email;
    int tipo;
    int id_supervisor;
    protected:
    Empleado() { }

    public:
    Empleado(int, std::string, std::string, std::string, int, int) {}
    ~Empleado() {}
    virtual float CalculoPago() = 0;  
};

#endif