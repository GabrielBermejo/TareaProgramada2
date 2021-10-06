#include <string>
#include "empleado.h"
#include "empleadoNomina.h"
EmpleadoNomina::EmpleadoNomina(int id, char nombre[], char apellido[], char email[], int tipo, int id_supervisor, int salario){
    this->id=id;
    this->nombre=nombre;
    this->apellido=apellido;
    this->email=email;
    this->tipo=tipo;
    this->id_supervisor=id_supervisor;
    this->salario = salario;
    this->CalculoPago();
}
void EmpleadoNomina::CalculoPago(){
    this->pago=this->salario-(this->salario/100*7);
}

int EmpleadoNomina::getID(){
    return this->id;
}

std::string EmpleadoNomina::getNombreCompleto(){
    std::string out = this->nombre + " " + this->apellido;
    return out;
}

float EmpleadoNomina::getPago(){
    return this->pago;
}