#include <gtest/gtest.h>

#include "../src/empleadoNomina.h"
//Prueba del calculo de pago
namespace {
    TEST(empleadoNominaTest, PayCalculationTest) {
        EmpleadoNomina nomemp {666, "nombre", "apellido", "email", 1, 1, 100};
        indemp.CalculoPago();
        
        EXPECT_FLOAT_EQ(93,nomemp.getPago());
    }
}
