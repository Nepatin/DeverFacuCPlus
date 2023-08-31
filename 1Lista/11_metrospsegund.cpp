#include <iostream>
#include <locale>
#include <cmath>

int main (void){
    
    float dis, temp, vel;
    
    setlocale(LC_ALL, "Portuguese");

    printf("\nOlá, bem vindo ao meu programa. Ele irá calcular e mostrar a velocidade de um projétil em metros por segundo\n");

    printf("\nColoque a distância em que seu projétil se encontra: \n");
    scanf("%f", &dis);

    printf("\nColoque os segundos em que seu projétil se encontra: \n");
    scanf("%f", &temp);

    vel= (dis*1000)/(temp*60);

    printf("\nA velocidade por segundo do seu projétil é de %0.2f m/s\n\n", vel);

    system("pause");

    return(0);
}