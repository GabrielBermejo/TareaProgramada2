#ifndef INPUT_H
#define INPUT_H
#include <string>
#include "empleado.h"
#include "arbol.h"
class Input{
    Arbol* arbol;
    public:
    Input();
    Arbol* Read();
};
#endif