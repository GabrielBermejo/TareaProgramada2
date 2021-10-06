#include <gtest/gtest.h>

#include "../src/empleadoIndependiente.h"
//Prueba del calculo de pago
namespace {
    TEST(empleadoIndependienteTest, PayCalculationTest) {
        EmpleadoIndependiente indemp {666, "nombre", "apellido", "email", 1, 1, 7, 60};
        indemp.CalculoPago();
        
        EXPECT_FLOAT_EQ(420,indemp.getPago());
    }
}
