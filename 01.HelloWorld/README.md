### Olá Mundo

Nessa aula iremos desenvolver o programa inicial, o conceito é introduzir o principio básico das linguagens de programação para iniciantes. Em `C/C++`, basta colocarmos a instrução `printf()` dentro da função principal, a função `main()` que o programa Hello World já estará pronto. 

Apresentamos o conceito de introdução de comentários em linha e em bloco. A seguir, temos o código completo do programa:

```c
/*
Meu primeiro programa em C
Imprimir uma mensagem na Tela
*/
#include <stdio.h>  // Declarações de bibliotecas utilizadas pelo C
#include <stdlib.h> // Declarações de bibliotecas utilizadas pelo C

int main() // funcao principal do programa, inicio!
{
    printf("Hello World!\n"); // comando para imprimir uma msg na tela de saída

    system("pause"); // faz uma pausa no programa antes de terminar
    return 0;        // Retorna Zero, pois informa ao SO que foi executado sem problemas.
} // fim do programa
```