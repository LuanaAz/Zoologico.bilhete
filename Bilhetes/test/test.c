// teste.c
#include "minunit-master/minunit.h"
#include "../src/bilhete.h" 

// Declara a função que será testada
int calcular_total(int idade, int quantidade);
MU_TEST(test_crianca) {
   mu_assert_int_eq(30, calcular_total(10, 3));
}
MU_TEST(test_adulto) {
   mu_assert_int_eq(90, calcular_total(25, 3));
}
MU_TEST(test_idoso) {
   mu_assert_int_eq(45, calcular_total(65, 3));
}
MU_TEST(test_idade_limite_12) {
    mu_assert_int_eq(10, calcular_total(12, 1)); // criança ainda
}
  MU_TEST(test_idade_limite_13) {
    mu_assert_int_eq(30, calcular_total(13, 1)); // adulto começa
}
  MU_TEST(test_idade_limite_59) {
    mu_assert_int_eq(30, calcular_total(59, 1)); // adulto ainda
}
  MU_TEST(test_idade_limite_60) {
    mu_assert_int_eq(15, calcular_total(60, 1)); // idoso começa
}
MU_TEST(test_limite_invalido) {
   mu_assert_int_eq(-1, calcular_total(25, 6)); // mais de 5 bilhetes
}
MU_TEST_SUITE(test_suite) {
   MU_RUN_TEST(test_crianca);
   MU_RUN_TEST(test_adulto);
   MU_RUN_TEST(test_idoso);
   MU_RUN_TEST(test_limite_invalido);
}
int main() {
   MU_RUN_SUITE(test_suite);
   MU_REPORT();
   return 0;
}