#include <gtest/gtest.h>

#include "../src/nominaInput.h"
//Prueba de la lectura de los datos para el calculo de pago
namespace {
    TEST(nominaInputTest, SalaryReturn) {
        NominaInput indemp();
        
        int salary=indemp.Read(1);
        
        EXPECT_FLOAT_EQ(9130, salary);
    }
}