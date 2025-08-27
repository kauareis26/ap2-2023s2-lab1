 // Desenvolva um programa que: • Sorteie um número inteiro no intervalo de 1 a 100 (incluindo os valores 1 e 100). • Solicite que o usuário tente adivinhar o número sorteado, digitando o seu palpite. (se o usuário entrar um valor inválido - menor que 1 ou maior que 100 - o programa deverá refazer a solicitação até que o usuário entre um valor válido). • Verifique se o palpite do usuário está correto: • Se estiver correto, o programa deverá imprimir na tela “Parabéns!!! Você acertou!” • Se o palpite for menor que o número sorteado, deverá imprimir “Você chutou muito baixo! O valor correto é xx.” (onde xx é o número sorteado). • Se o palpite for maior que o número sorteado, deverá imprimir “Você chutou muito alto! O valor correto é xx.” (onde xx é o número sorteado). • Crie funções para modularizar o seu programa.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sorteia_numero();
int solicita_palpite();
void verifica_palpite(int numero_sorteado, int palpite_usuario);
int main() {
    int numero_sorteado = sorteia_numero();
    int palpite_usuario = solicita_palpite();
    verifica_palpite(numero_sorteado, palpite_usuario);
    return 0;
}
int sorteia_numero() {
    srand(time(NULL));
    return rand() % 100 + 1;
}
int solicita_palpite() {
    int palpite;
    do {
        printf("Digite seu palpite (1-100): ");
        scanf("%d", &palpite);
    } while (palpite < 1 || palpite > 100);
    return palpite;
}
void verifica_palpite(int numero_sorteado, int palpite_usuario) {
    if (palpite_usuario == numero_sorteado) {
        printf("Parabéns!!! Você acertou!\n");
    } else if (palpite_usuario < numero_sorteado) {
        printf("Você chutou muito baixo! O valor correto é %d.\n", numero_sorteado);
    } else {
        printf("Você chutou muito alto! O valor correto é %d.\n", numero_sorteado);
    }
}           
