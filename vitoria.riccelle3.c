//Vitória Riccelle Wanderley de Sousa 
//Matéria: Arquitetura de computadores 
#include <stdio.h>

// Função para mostrar o processo de conversão de decimal para complemento de 2 com 16 bits
void decimalParaComplemento2(int n) {
    int mask = 0xFFFF;  // Máscara de 16 bits para garantir o limite
    int complemento2;

    // Exibe o número original
    printf("Número original: %d\n", n);

    // Verifica se o número é negativo
    if (n < 0) {
        // Se for negativo, calcula o complemento a 2
        printf("Passo 1: Como o número é negativo, convertemos o valor absoluto para binário.\n");
        complemento2 = -n;  // Usa o valor absoluto para a conversão inicial
        printf("Passo 2: Valor absoluto: %d\n", complemento2);

        printf("Passo 3: Aplicamos a máscara de 16 bits (FFFF) para garantir que o número caiba em 16 bits.\n");
        complemento2 = (~complemento2 + 1) & mask;  // Faz o complemento a 2 usando inversão e soma 1
        printf("Passo 4: Invertendo os bits e somando 1 (complemento a 2): %X\n", complemento2);
    } else {
        // Se for positivo, apenas aplicamos a máscara para garantir 16 bits
        printf("Passo 1: Como o número é positivo, convertemos ele diretamente para binário.\n");
        complemento2 = n & mask;
        printf("Passo 2: Aplicamos a máscara de 16 bits (FFFF) para garantir que o número caiba em 16 bits.\n");
    }

    // Exibindo o resultado final em binário
    printf("Passo 5: O resultado final em complemento de 2 com 16 bits é: ");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (complemento2 >> i) & 1);  // Exibe bit por bit
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um número em base 10 (entre -32768 e 32767): ");
    scanf("%d", &numero);

    // Verifica se o número está dentro do intervalo de 16 bits com sinal
    if (numero < -32768 || numero > 32767) {
        printf("Número fora do intervalo de 16 bits com sinal!\n");
    } else {
        // Chama a função de conversão para complemento de 2 com 16 bits
        decimalParaComplemento2(numero);
    }

    return 0;
}