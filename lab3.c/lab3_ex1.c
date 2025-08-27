 //exercicio 1 lab 3 
#include <stdio.h>
 int main()  
 { 
    float media, frequencia;
    printf("Digite sua média (0.0 a 10.0): ");
    scanf("%f", &media);
    printf("Digite sua frequência (0 a 100%%): ");
    scanf("%f", &frequencia);
    if (frequencia < 75.0)
        printf("REPROVADO\n");
    else if (media >= 7.5)
        printf("APROVADO\n");
    else
        printf("DE EXAME\n");
    return 0;
    }
