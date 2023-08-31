#include <iostream>
#include <locale>
#include <cmath>

int main (void){

    float cels, fahr;
    
    setlocale(LC_ALL, "Portuguese");

    printf("\nOlá, bem vindo ao meu programa e nele você vai poder fazer a conversão de Celsius(Cº) para Fahrenheit(ºF).\n");

    printf("\nInsira o valor celsius: \n");
    scanf("%f", &cels);

    fahr= (9*cels+160)/5;

    printf("\nA conversão do grau %0.2fºC para ºF é %0.2fºF.\n\n", cels, fahr);

    system("pause");

    return(0);

}
