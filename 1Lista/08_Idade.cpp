#include <iostream>
#include <locale>

int main (void){

    int ano, idade;

    setlocale(LC_ALL, "Portuguese");

    printf("\nBem vindo, o meu programa ir� calcular a sua idade de acordo com a sua ano de nascimento.\n");

    printf("\nDigite o ano que voc� nasceu: ");
    scanf("%i", &ano);

    idade= 2023-ano;

    printf("\nA sua idade atual � %i anos.\n\n", idade);

    system("pause");

    return (0);
}
