#include <iostream>
#include <locale>
#include <math.h>

int main (void){
    
    int base, exp, result;

    setlocale(LC_ALL, "Portuguese");

    printf("\nOl�, bem vindo ao meu programa. Farei o calculo da pot�ncia que voc� deseja.\n");

    printf("\nInsira a base: \n");
    scanf("%i", &base);

    printf("\nInsira o expoente: \n");
    scanf("%i", &exp);

    result= pow(base, exp);

    printf("\nA base de sua pot�ncia � %i, o expoente � %i sendo %i o resultado\n\n", base, exp, result);

    system("pause\n");

    return(0);
}