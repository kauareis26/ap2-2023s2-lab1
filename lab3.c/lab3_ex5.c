Desenvolva um programa semelhante ao anterior, só que com as seguintes
diferenças:
• Se o palpite do usuário estiver incorreto, o programa deverá imprimir a dica
(“você chutou muito baixo” ou “você chutou muito alto”) sem mostrar o
valor sorteado, incrementar o número de tentativas e dar uma nova chance
até que ele consiga acertar o número sorteado.
• Quando o usuário conseguir acertar o número sorteado, o programa deverá
apresentar a mensagem de parabéns e mostrar o número de tentativas feitas
pelo usuário até acertar o número.
Crie funções para modularizar o seu programa.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gerarNumero(int *numero) {
    srand(time(NULL));
    *numero = rand() % 100 + 1; // Gera um número entre 1 e 100
}
int obterPalpite() {
    int palpite;
    printf("Digite seu palpite (1-100): ");
    scanf("%d", &palpite);
    return palpite;
}
void verificarPalpite(int palpite, int numeroSorteado, int *tentativas) {
    (*tentativas)++;
    if (palpite < numeroSorteado) {
        printf("Você chutou muito baixo!\n");
    } else if (palpite > numeroSorteado) {
        printf("Você chutou muito alto!\n");
    } else {
        printf("Parabéns! Você acertou o número %d em %d tentativas.\n", numeroSorteado, *tentativas);
    }
}
int main() {
    int numeroSorteado, palpite, tentativas = 0;    
    gerarNumero(&numeroSorteado);
    do {
        palpite = obterPalpite();
        verificarPalpite(palpite, numeroSorteado, &tentativas); 
    } while (palpite != numeroSorteado);
    return 0;
}
