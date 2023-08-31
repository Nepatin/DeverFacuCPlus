#include <iostream>
#include <locale>

int main (void){

    int ano, idade;

    setlocale(LC_ALL, "Portuguese");

    printf("\nBem vindo, o meu programa irá calcular a sua idade de acordo com a sua ano de nascimento.\n");

    printf("\nDigite o ano que você nasceu: ");
    scanf("%i", &ano);

    idade= 2023-ano;

    printf("\nA sua idade atual é %i anos.\n\n", idade);

    system("pause");

    return (0);
}
