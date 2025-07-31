## Anotações basicas em C

# Características da Linguagem C

A linguagem C é uma das mais influentes e amplamente utilizadas linguagens de programação da história. Abaixo estão suas principais características:

## 1. **Linguagem de Baixo Nível com Recursos de Alto Nível**
- Permite manipular diretamente memória e registradores, como linguagens de baixo nível.
- Também possui estruturas de controle, funções e bibliotecas, como linguagens de alto nível.

## 2. **Portabilidade**
- Códigos escritos em C podem ser facilmente adaptados para diferentes plataformas com poucas modificações.

## 3. **Linguagem Estruturada**
- Suporte completo à programação estruturada com uso de funções, laços, condicionais e escopo de variáveis.

## 4. **Eficiência e Desempenho**
- Programas escritos em C são rápidos e eficientes, frequentemente usados em sistemas embarcados, sistemas operacionais e software de tempo real.

## 5. **Acesso Direto à Memória**
- Uso de ponteiros permite manipulação direta de endereços de memória.

## 6. **Compilada**
- C é uma linguagem compilada, o que resulta em maior desempenho comparado a linguagens interpretadas.

## 7. **Sintaxe Simples e Compacta**
- A linguagem tem um conjunto pequeno de palavras-chave e uma gramática clara, facilitando o aprendizado e a escrita de código enxuto.

## 8. **Biblioteca Padrão**
- Oferece uma biblioteca padrão (Standard Library) com funções para manipulação de strings, arquivos, memória e muito mais.

## 9. **Modularidade**
- Programas podem ser divididos em múltiplos arquivos e funções, facilitando a organização e manutenção do código.

## 10. **Base para Outras Linguagens**
- Muitas linguagens modernas (como C++, Java, C#, Objective-C) derivam conceitos ou sintaxe da linguagem C.

---

> **Nota:** Apesar de poderosa, C exige atenção com gerenciamento de memória e pode ser propensa a erros como vazamento de memória e violação de acesso.

# Hello World em C - Explicado Linha por Linha

__________________________________________________________________________

Este é o exemplo clássico de um programa em C que imprime "Hello, World!" na tela. Abaixo, cada linha é explicada para facilitar o entendimento.

```c
#include <stdio.h> /*Essa linha inclui a biblioteca padrão de entrada   e     saída do C, chamada stdio.h (Standard Input Output Header).
        Ela é necessária para usar a função printf, que será responsável por imprimir algo na tela.*/

int main() {


        printf("Hello, World!\n"); /*
        
        Essa linha chama a função printf para imprimir a mensagem "Hello, World!" na tela.
        O \n no final da string é um caractere especial que representa uma quebra de linha, ou seja, faz o cursor pular para a próxima linha depois de imprimir o texto.
        
        */




    return 0 /* Finaliza a função main, retornando o valor 0.
            Esse valor é devolvido ao sistema operacional e indica que o programa terminou com sucesso.*/
}
```

# Tipos de Dados em C

A linguagem C oferece diversos tipos de dados para representar números, caracteres e estruturas mais complexas. Abaixo estão os principais:

---

## 1. **Tipos Numéricos Inteiros**

Usados para representar números inteiros (sem parte decimal).

| Tipo        | Descrição                        | Tamanho (aprox.) | Faixa de valores (signed)           |
|-------------|----------------------------------|------------------|-------------------------------------|
| `int`       | Inteiro padrão                   | 4 bytes          | -2.147.483.648 a 2.147.483.647      |
| `short`     | Inteiro curto                    | 2 bytes          | -32.768 a 32.767                    |
| `long`      | Inteiro longo                    | 4 ou 8 bytes     | Depende do sistema                  |
| `long long` | Inteiro muito longo              | 8 bytes          | ±9 quintilhões (±9 * 10¹⁸)         |
| `unsigned`  | Versão sem sinal de inteiros     | mesmo tamanho    | 0 até o dobro do valor positivo    |

> **Nota:** Versões `unsigned` não representam números negativos.

---

## 2. **Tipos Numéricos Reais (Ponto Flutuante)**

Usados para representar números com parte decimal.

| Tipo     | Descrição                  | Tamanho (aprox.) | Precisão                |
|----------|----------------------------|------------------|--------------------------|
| `float`  | Precisão simples            | 4 bytes          | Aproximadamente 6-7 dígitos |
| `double` | Precisão dupla              | 8 bytes          | Aproximadamente 15 dígitos |
| `long double` | Precisão estendida     | 10 a 16 bytes     | Varia conforme o compilador |

---

## 3. **Tipo de Caractere**

| Tipo     | Descrição                     | Tamanho | Observações                         |
|----------|-------------------------------|---------|--------------------------------------|
| `char`   | Armazena um único caractere   | 1 byte  | Pode ser `signed` ou `unsigned`     |

- Um `char` armazena valores numéricos entre -128 e 127 (ou 0 a 255, se `unsigned`).
- Usado com aspas simples: `'A'`, `'1'`, `'@'`.

---

## 4. **Tipo `void`**

- O tipo `void` representa **ausência de valor**.
- Muito usado para:
  - Funções que **não retornam nada**: `void minhaFuncao()`
  - Ponteiros genéricos: `void *ptr`

---

## 5. **Modificadores de Tipo**

- Podem alterar o comportamento e tamanho dos tipos:
  - `signed`
  - `unsigned`
  - `short`
  - `long`

**Exemplos:**

```c
unsigned int idade = 25;
long double valor = 123.456789;
short int ano = 2025;
```

# Especificadores de Formato em C

Em C, **especificadores de formato** são símbolos especiais usados dentro de funções como `printf()` e `scanf()` para indicar **qual tipo de dado** será exibido ou lido.

Eles são sempre precedidos por um sinal de **porcentagem (%)** e informam ao compilador como interpretar o valor correspondente.

---

## 📌 Por que são necessários?

A linguagem C é fortemente tipada e precisa saber como tratar corretamente cada tipo de dado (inteiro, decimal, caractere, etc.).  
Os especificadores de formato ajudam a **conectar o conteúdo da variável ao formato da saída ou entrada de dados**.

---

## 🧾 Exemplo com `printf`:

```c
int idade = 25;
printf("A minha idade é %i anos.", idade);

```

##Principais Especificadores de Formato em C
Em C, os especificadores de formato são códigos especiais usados em funções de entrada e saída, como printf() e scanf(), para indicar o tipo de dado que está sendo lido ou escrito. Eles são cruciais para garantir que os dados sejam interpretados e exibidos corretamente.

Cada especificador de formato começa com um sinal de porcentagem (%) seguido por um ou mais caracteres que definem o tipo de dado.

Aqui estão os principais especificadores de formato que você encontrará em C:

Para Números Inteiros
%d ou %i: Usados para imprimir ou ler números inteiros decimais (base 10) com sinal.

Exemplo: printf("Idade: %d\n", 30);

%u: Usado para imprimir ou ler números inteiros decimais sem sinal.

Exemplo: printf("Total: %u\n", 150000);

%o: Usado para imprimir ou ler números inteiros em formato octal (base 8) sem sinal.

Exemplo: printf("Valor octal: %o\n", 64); (que é 100 em octal)

%x ou %X: Usados para imprimir ou ler números inteiros em formato hexadecimal (base 16) sem sinal. %x usa letras minúsculas (a-f), enquanto %X usa maiúsculas (A-F).

Exemplo: printf("Valor hex: %x\n", 255); (que é ff em hexadecimal)

Para Números de Ponto Flutuante (Decimais)
%f: Usado para imprimir ou ler números de ponto flutuante (tipo float ou double). Por padrão, exibe 6 casas decimais.

Exemplo: printf("Preço: %.2f\n", 19.99); (.2 especifica 2 casas decimais)

%lf: Especificamente usado com scanf() para ler valores do tipo double. Embora %f possa funcionar para double em printf(), é uma boa prática usar %lf para scanf() quando se trata de double.

Exemplo: scanf("%lf", &altura);

%e ou %E: Usados para imprimir ou ler números de ponto flutuante em notação científica (exponencial). %e usa 'e', %E usa 'E'.

Exemplo: printf("Grande valor: %e\n", 12345.67); (Saída: 1.234567e+04)

%g ou %G: Usados para imprimir números de ponto flutuante no formato mais curto, escolhendo entre %f ou %e (ou %F ou %E) com base no valor. Remove zeros à direita desnecessários.

Exemplo: printf("Valor: %g\n", 123.00); (Saída: 123)

Para Caracteres e Strings
%c: Usado para imprimir ou ler um único caractere.

Exemplo: printf("Incial: %c\n", 'J');

%s: Usado para imprimir ou ler uma string (sequência de caracteres terminada em nulo).

Exemplo: printf("Nome: %s\n", "Maria");

Para Ponteiros
%p: Usado para imprimir o endereço de memória de um ponteiro.

Exemplo: int num = 10; printf("Endereço de num: %p\n", &num);

Outros Especificadores Úteis
%%: Usado para imprimir um sinal de porcentagem literal (%).

Exemplo: printf("100%%\n"); (Saída: 100%)

Modificadores de Largura e Precisão
Além dos especificadores básicos, você pode usar modificadores para controlar a largura, precisão e alinhamento da saída:

Largura Mínima: Um número inteiro colocado entre % e o especificador define a largura mínima do campo. Se o valor for menor que a largura, ele será preenchido com espaços (ou zeros, se um 0 for prefixado).

Exemplo: printf("%5d\n", 123); (Saída:   123)

Precisão: Usado principalmente com números de ponto flutuante (para o número de casas decimais) e strings (para o número máximo de caracteres a serem impressos). É especificado com um ponto (.) seguido por um número.

Exemplo: printf("%.2f\n", 3.14159); (Saída: 3.14)

Exemplo: printf("%.5s\n", "Hello World"); (Saída: Hello)

Flags: Caracteres especiais que modificam o comportamento da formatação:

-: Alinha à esquerda. Por padrão, a saída é alinhada à direita.

Exemplo: printf("%-5d\n", 123); (Saída: 123  )

+: Exibe o sinal (+ ou -) para números.

Exemplo: printf("%+d\n", 10); (Saída: +10)

 : Insere um espaço antes de números positivos (se + não for usado).

Exemplo: printf("% d\n", 10); (Saída:  10)

0: Preenche com zeros à esquerda (após o sinal) quando usado com largura.

Exemplo: printf("%05d\n", 123); (Saída: 00123)

#: Usado com %o, %x, %X para prefixos (0 para octal, 0x/0X para hexadecimal). Para %f, %e, %E, %g, %G, garante que o ponto decimal esteja presente.

Exemplo: printf("%#x\n", 255); (Saída: 0xff)


# Operadores Matemáticos em C

Em C, os **operadores matemáticos (ou aritméticos)** são usados para realizar operações entre variáveis e valores, como soma, subtração, multiplicação, etc.

---

## ✏️ Operadores Básicos

| Operador | Operação       | Exemplo           | Resultado (se `a = 10`, `b = 3`) |
|----------|----------------|-------------------|----------------------------------|
| `+`      | Adição         | `a + b`           | 13                               |
| `-`      | Subtração      | `a - b`           | 7                                |
| `*`      | Multiplicação  | `a * b`           | 30                               |
| `/`      | Divisão        | `a / b`           | 3 (divisão inteira)              |
| `%`      | Módulo         | `a % b`           | 1 (resto da divisão)             |

> **Atenção:** A divisão entre inteiros resulta em um número inteiro (parte decimal é descartada).

---

## 📌 Exemplos de Uso

```c
int a = 10, b = 3;

int soma = a + b;      // soma = 13
int sub = a - b;       // sub = 7
int mult = a * b;      // mult = 30
int div = a / b;       // div = 3
int resto = a % b;     // resto = 1
```

---

## ⚠️ Divisão com números reais

Para obter o resultado com casas decimais, use `float` ou `double`:

```c
float x = 10.0, y = 3.0;
float resultado = x / y; // resultado = 3.333...
```

---

## 🔁 Operadores de Atribuição Combinada

Esses operadores **realizam uma operação e atribuem o resultado** na mesma variável.

| Operador | Equivalente a     | Exemplo         |
|----------|-------------------|-----------------|
| `+=`     | `a = a + b`       | `a += b;`       |
| `-=`     | `a = a - b`       | `a -= b;`       |
| `*=`     | `a = a * b`       | `a *= b;`       |
| `/=`     | `a = a / b`       | `a /= b;`       |
| `%=`     | `a = a % b`       | `a %= b;`       |

---

## ⏫ Incremento e Decremento

| Operador | Descrição               | Exemplo       | Efeito              |
|----------|-------------------------|---------------|---------------------|
| `++`     | Incrementa em 1         | `a++` ou `++a`| `a = a + 1`         |
| `--`     | Decrementa em 1         | `a--` ou `--a`| `a = a - 1`         |

- `a++`: **pós-incremento** (incrementa depois de usar o valor)
- `++a`: **pré-incremento** (incrementa antes de usar o valor)

---

## ✅ Exemplo Completo:

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão inteira: %d\n", a / b);
    printf("Resto da divisão: %d\n", a % b);

    a += 5; // a agora é 15
    printf("Após a += 5, a = %d\n", a);

    a++; // incremento
    printf("Após a++, a = %d\n", a);

    return 0;
}
```

---

Esses operadores são fundamentais em qualquer linguagem de programação e são amplamente usados em cálculos, laços e condições.