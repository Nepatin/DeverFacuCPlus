#include <iostream>
#include <locale>
#include <cmath>

int main (void){

    float cels, fahr;
    
    setlocale(LC_ALL, "Portuguese");

    printf("\nOl�, bem vindo ao meu programa e nele voc� vai poder fazer a convers�o de Celsius(C�) para Fahrenheit(�F).\n");

    printf("\nInsira o valor celsius: \n");
    scanf("%f", &cels);

    fahr= (9*cels+160)/5;

    printf("\nA convers�o do grau %0.2f�C para �F � %0.2f�F.\n\n", cels, fahr);

    system("pause");

    return(0);

}
