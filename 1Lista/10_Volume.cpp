#include <iostream>
#include <locale>
#include <cmath>

int main (void){
    int C, L, h, V;
    setlocale(LC_ALL, "Portuguese");

    printf("\nOl�, bem vindo ao meu programa, eu irei calcular o volume da sua caixa retangular.\n");

    printf("\nPrimeiro, digite o Comprimento de sua caixa: \n");
    scanf("%i", &C);

    printf("\nSegundo, digite a Largura de sua caixa: \n");
    scanf("%i", &L);

    printf("\nTerceiro, digite a Altura de sua caixa: \n");
    scanf("%i", &h);
    
    V= C*L*h;

    printf("\nO comprimento da caixa � %i, a largura � %i e a altura � %i, sendo %i o volume de sua caixa retangular.\n\n", C, L, h, V);

    system("pause");

    return(0);
}