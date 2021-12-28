#include "empleado.h"
#include "empleadoIndependiente.h"
#include <string>
EmpleadoIndependiente::EmpleadoIndependiente(int id, char nombre[], char apellido[], char email[], int tipo, int id_supervisor, int montoporhora, int horas){
    this->id=id;
    this->nombre=nombre;
    this->apellido=apellido;
    this->email=email;
    this->tipo=tipo;
    this->id_supervisor=id_supervisor;
    this->montoporhora = montoporhora;
    this->horas= horas;
    this->CalculoPago();
}

void EmpleadoIndependiente::CalculoPago(){
    this->pago=this->montoporhora*this->horas;
}

int EmpleadoIndependiente::getID(){
    return this->id;
}

std::string EmpleadoIndependiente::getNombreCompleto(){
    std::string out = this->nombre + " " + this->apellido;
    return out;
}

float EmpleadoIndependiente::getPago(){
    return this->pago;
}