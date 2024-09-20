//Vitória Riccelle Wanderley de Sousa 
//Matéria: Arquitetura de computadores 
#include <stdio.h>

// Função para imprimir os bits de um número float (32 bits)
void imprimirBits32(unsigned int valor) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (valor >> i) & 1);
    }
    printf("\n");
}

// Função para imprimir os bits de um número double (64 bits)
void imprimirBits64(unsigned long valor) {
    for (int i = 63; i >= 0; i--) {
        printf("%lu", (valor >> i) & 1);
    }
    printf("\n");
}

int main() {
    int escolha;
    float numeroFloat;
    double numeroDouble;
    unsigned int bitsFloat;
    unsigned long bitsDouble;

    // menu para o usuário
    printf("Escolha o tipo de número para converter em bits:\n");
    printf("1 - Float (32 bits)\n");
    printf("2 - Double (64 bits)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            // float
            printf("Digite um número real (float): ");
            scanf("%f", &numeroFloat);

            // pega os bits do float
            bitsFloat = *(unsigned int*)&numeroFloat;

            // printa a representação em bits
            printf("Representação em bits (32 bits): ");
            imprimirBits32(bitsFloat);
            break;

        case 2:
            // double
            printf("Digite um número real (double): ");
            scanf("%lf", &numeroDouble);

            // pega os bits do double
            bitsDouble = *(unsigned long*)&numeroDouble;

            // printa a representação em bits
            printf("Representação em bits (64 bits): ");
            imprimirBits64(bitsDouble);
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}