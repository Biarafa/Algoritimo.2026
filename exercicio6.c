#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("O numero e multiplo de 5.\n");
    } else {
        printf("O numero nao e multiplo de 5.\n");
    }

    return 0;
}
 //   gcc -o exercicio6.exe exercicio6.c
	//  ./exercicio6.exe 