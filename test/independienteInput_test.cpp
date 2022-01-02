#include <gtest/gtest.h>

#include "../src/independienteInput.h"

//Prueba de la lectura de los datos para el calculo de pago
namespace {
    TEST(independienteInputTest, PayRateReturn) {
        IndependienteInput indemp();
        
        int* payperhour=indemp.Read(2);
        
        EXPECT_FLOAT_EQ(42.26,payperhour[0])
        EXPECT_FLOAT_EQ(55,payperhour[1]);
    }
}