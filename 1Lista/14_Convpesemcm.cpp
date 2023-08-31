#include <iostream>
#include <locale>
#include <math.h>

int main(void){
    
    float pes, metros;

    setlocale(LC_ALL, "Portuguese");

    printf("\nOlá, bem vindo ao meu programa. Irei converter pés em metros.\n");

    printf("\nColoque a medida em pés: \n");
    scanf("%f", &pes);

    metros= (pes*0.3048);

    printf("\nO resultado da conversão vai dar: %0.4f\n", metros);

    system("pause");
    
    return(0);
}