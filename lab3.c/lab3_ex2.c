 // Um triângulo possui 3 lados com tamanhos a, b e c.Para que um triângulo exista, um lado deve ser menor que a soma dos outros dois, ou seja, as seguintes condições devem ser satisfeitas: • a < b + c • b < a + c • c < a + b Desenvolva um programa que: • Solicite que o usuário digite os tamanhos dos lados do triângulo (a, b e c). • Verifique se existe um triângulo com estes lados. • Apresente na tela o resultado. Escreva uma função para verificar se o triângulo existe e outra para apresentar o resultado.
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    float a, b, c;
    bool existe_triangulo(float a, float b, float c);
    void apresentar_resultado(bool existe);

    printf("Digite o tamanho do lado a: ");
    scanf("%f", &a);
    printf("Digite o tamanho do lado b: ");
    scanf("%f", &b);
    printf("Digite o tamanho do lado c: ");
    scanf("%f", &c);
   
    if (a < b + c && b < a + c && c < a + b)
        printf("Os lados formam um triângulo.\n");
            else
                printf("Os lados não formam um triângulo.\n");
   
    bool existe = existe_triangulo(a, b, c);
    apresentar_resultado(existe);
    
    return 0;
}
