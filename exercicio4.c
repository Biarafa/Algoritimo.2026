#include <stdio.h>

int main() {
    float comprimento, largura, area;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    printf("A area do terreno e: %.2f\n", area);

    return 0;
}

 //   gcc -o exercicio4.exe exercicio4.c
	//  ./exercicio4.exe 