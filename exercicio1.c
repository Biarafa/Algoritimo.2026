
#include <stdio.h>

int main() {
// imprime algumas mensagens na tela
float salario_minimo, salario_bruto, qt_salarios_minimos;
printf("Digite o salario minímo: \n");
scanf("%d", &salario_minimo);

printf("Digite o salario bruto: \n");
scanf("%d", &salario_bruto);

printf("O salario minímo: %.2f\n", salario_minimo);
printf("O salario bruto: %.2f\n", salario_minimo);

qt_salario_minimos = salario_bruto / salario_minimo;
printf("Quantidade de salarios mininmos: %.2f\n", qt_salario_minimos);

return 0;
  
}
