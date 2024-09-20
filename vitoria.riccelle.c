//Meu código 
//Vitória Riccelle Wanderley de Sousa 
//Matéria: Arquitetura de computadores
#include <stdio.h>
// toda as funções aqui são com números decimais inteiros como pedido no exercício.
// função para conversão de decimal para binário
void decimalParaBinario(int n) {
    if (n > 1) {
        decimalParaBinario(n / 2);
    }
    printf("%d", n % 2);
}

// função para conversão de decimal para hexadecimal
void decimalParaHexadecimal(int n) {
    if (n > 15) {
        decimalParaHexadecimal(n / 16);
    }
    int resto = n % 16;
    if (resto < 10) {
        printf("%d", resto);
    } else {
        printf("%c", resto - 10 + 'A');
    }//essa parte é diferente aqui pq depois do 9 em hexadecimal começam as letras A B C D E até o F
}

// função para conversão de decimal para octal
void decimalParaOctal(int n) {
    if (n > 7) {
        decimalParaOctal(n / 8);
    }
    printf("%d", n % 8);
}

// função para conversão de decimal para BCD
void decimalParaBCD(int n) {
    int digito;

    // Começa com o dígito mais significativo
    if (n == 0) {
        printf("0000"); // se o número é zero (já que BCD pega cada dígito e bota em binário)
    } else {
        while (n > 0) {
            digito = n % 10;           // pega o último dígito
            printf("%04d ", digito);    // printa cada dígito como 4 bits
            n /= 10;                    // tira o último dígito
        }
    }
}

// Função principal com menu e chamando as funções de cima
int main() {
    int escolha, numero;

    printf("Digite um número em base 10: ");
    scanf("%d", &numero);

    // Menu de opções (Escolhi fazer assim do que colocar 4 arquivos diferentes para as conversões).
    printf("Escolha a base para conversão:\n");
    printf("1. Base 2 (Binário)\n");
    printf("2. Base 8 (Octal)\n");
    printf("3. Base 16 (Hexadecimal)\n");
    printf("4. BCD (Binary-Coded Decimal)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    //Pega a escolha do menu e com o uso do switch que eu coloquei aqui ele vai realizar a conversão escolhida.
    switch (escolha) {
        case 1:
            printf("O número %d em base 2 é: ", numero);
            decimalParaBinario(numero);
            printf("\n");
            break;
        case 2:
            printf("O número %d em base 8 é: ", numero);
            decimalParaOctal(numero);
            printf("\n");
            break;
        case 3:
            printf("O número %d em base 16 é: ", numero);
            decimalParaHexadecimal(numero);
            printf("\n");
            break;
        case 4:
            printf("O número %d em BCD é: ", numero);
            decimalParaBCD(numero);
            printf("\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}