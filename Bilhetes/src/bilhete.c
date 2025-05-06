/*ARQUIVO BILHETE.C*/

#include "bilhete.h"

int main() {
    int idade, quantidade;
    float preco_unitario, preco_total;
    // Entrada de dados
    printf("Informe a idade do visitante: ");
    scanf("%d", &idade);
    printf("Informe a quantidade de bilhetes: ");
    scanf("%d", &quantidade);
    // Verificação da quantidade de bilhetes
    if (quantidade < 1 || quantidade > 5) {
        printf("Erro: A quantidade máxima de bilhetes por pessoa é 5.\n");
        return 1;
    }
    // Determinação do preço com base na idade
    if (idade <= 12) {
        preco_unitario = 10.0;
    } else if (idade <= 59) {
        preco_unitario = 30.0;
    } else {
        preco_unitario = 15.0;
    }
    // Cálculo do preço total
    preco_total = preco_unitario * quantidade;
    // Saída
    printf("Preço total a pagar: R$ %.2f\n", preco_total);
    return 0;
 }