#include <gtest/gtest.h>

#include "../src/nominaInput.h"
//Prueba de que el arbol retornado del texto es correcto
namespace {
    TEST(nominaInputTest, SalaryReturn) {
        Input *in = new Input;
        Arbol *arbol = in->Read();

        EXPECT_FLOAT_EQ(arbol.raiz.id, 1);
        EXPECT_EQ(arbol.raiz.empleado.nombre, "Just");
        EXPECT_EQ(arbol.raiz.id.apellido, "Atest");
    }
}