/*ARQUIVO BILHETE.C*/



// Implementação da função
int calcular_total(int idade, int quantidade) {
    if (quantidade < 1 || quantidade > 5) {
        return -1; // quantidade inválida
    }
    int preco_unitario;
    if (idade <= 5) {
        preco_unitario = 0;
    } else if (idade >= 6 && idade <= 17) {
        preco_unitario = 15;
    } else if (idade >= 18 && idade <= 59) {
        preco_unitario = 30;
    } else { // idade >= 60
        preco_unitario = 20;
    }
    return preco_unitario * quantidade;
 }