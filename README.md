# Calculadora Conversora
A calculadora programadora realiza conversões entre diferentes bases numéricas (decimal, binário, octal, hexadecimal e BCD) e converte números reais (float e double) para suas representações binárias, exibindo detalhadamente os bits de sinal, expoente e fração. O processo inclui a exibição passo a passo das operações, facilitando o entendimento didático das conversões.

## Conversão para float e double
Este código foi escrito em linguagem C, que é uma linguagem de programação de baixo nível, muito utilizada para sistemas embarcados e aplicações que precisam de grande controle sobre o hardware. O código permite que o usuário converta um número float (32 bits) ou double (64 bits) em sua representação binária.

### Os pontos feitos no código:

* Menu: O programa começa exibindo um menu para o usuário escolher entre float (32 bits) e double (64 bits).

* Entrada: Dependendo da escolha, o usuário é solicitado a digitar um número real, do tipo float ou double.

* Conversão para Bits: O número é convertido para sua representação binária utilizando o endereço de memória (com casting para unsigned int ou unsigned long).

* Impressão dos Bits: A sequência de bits é exibida, mostrando como o número é armazenado na memória em binário.

## Conversão para base binário (2), octal (8), hexadecimal (16), BCD 
Este código é escrito em linguagem C e implementa a conversão de um número decimal para diferentes bases numéricas. O usuário pode escolher entre converter o número para binário (base 2), octal (base 8), hexadecimal (base 16) ou BCD (Decimal Codificado em Binário). A conversão é feita através de funções recursivas e um menu.

### Passos:

* Entrada: O programa solicita ao usuário que insira um número decimal (base 10) e escolha uma das opções de conversão (binário, octal, hexadecimal ou BCD).

* Conversão Recursiva: Dependendo da escolha do usuário, uma função específica é chamada para converter o número para a base escolhida. As funções de conversão para binário, octal e hexadecimal utilizam recursão para dividir o número em partes menores e imprimir os dígitos da base de cada um.

* Conversão para BCD: No caso do BCD, o número decimal é decomposto em seus dígitos, e cada dígito é convertido para um equivalente de 4 bits, sendo exibido como um número binário de 4 dígitos.

* Exibição do Resultado: O resultado da conversão é printado na tela de acordo com a base escolhida, e o programa encerra após exibir.

## Conversão de base 10 para base com sinal com 16 bits, complemento 2.
Este código em C converte um número decimal (em base 10) para complemento de 2 com 16 bits. Ele mostra passo a passo o processo de conversão, tanto para números positivos quanto negativos, mostrando o valor binário final. O complemento de 2 é usado para representar números negativos em binário. Números positivos são convertidos diretamente, enquanto números negativos passam por uma inversão dos bits seguida de uma soma de 1 para calcular o complemento de 2.

### Passos:

* Entrada do Número:
  O programa solicita ao usuário que insira um número decimal (base 10), verificando se ele está dentro do intervalo permitido para 16 bits com sinal (de -32768 a 32767).

* Verificação de Negatividade:
A função decimalParaComplemento2verifica se o número é negativo. Se o número for negativo, a função converte o valor absoluto do número para binário e, em seguida, aplica o complemento de 2 (invertendo os bits e somando 1). Se o número for positivo, ele é convertido diretamente para binário, e o resultado é determinado.

* Passo a Passo da Conversão:
O código apresenta mensagens explicando cada passo da conversão, tanto para números negativos (complemento de 2) quanto para números positivos.

* Exposição dos Resultados:
Após a conversão, o programa imprime o número em binário com 16 bits, exibindo bit por bit.
