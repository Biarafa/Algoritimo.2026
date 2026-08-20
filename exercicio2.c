#include <stdio.h>

int main() {
    int hora;
    
    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Ja se passaram %d minutos desde o inicio do dia.\n", hora * 60);

    return 0;
}
 //   gcc -o exercicio2.exe exercicio2.c
	//  ./exercicio2.exe 
    