#include <gtest/gtest.h>

#include "../src/input.h"
#include "../src/arbol.h"
//Prueba de que el arbol retornado del texto es correcto
namespace {
    TEST(nominaInputTest, SalaryReturn) {
        Input *in = new Input;
        Arbol *arbol = in->Read();

        EXPECT_FLOAT_EQ(arbol->raiz->empleado->getID(), 1);
        EXPECT_EQ(arbol->raiz->empleado->getNombreCompleto(), "Just Atest");
    }
}