#include <stdio.h>

int main() {
    float salarioMinimo, dolar;
    float valorCasa, dinheiroDisponivel;
    int quantidadeCasas;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do dolar: ");
    scanf("%f", &dolar);

    valorCasa = salarioMinimo * 150;
    dinheiroDisponivel = 10000000 * dolar;

    quantidadeCasas = dinheiroDisponivel / valorCasa;

    printf("Quantidade de casas possiveis: %d\n", quantidadeCasas);

    return 0;
}

 //   gcc -o exercicio5.exe exercicio5.c
	//  ./exercicio5.exe 