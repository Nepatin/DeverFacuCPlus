#include <iostream>
#include <locale>
#include <cmath>

int main (void){
    
    float dis, temp, vel;
    
    setlocale(LC_ALL, "Portuguese");

    printf("\nOl�, bem vindo ao meu programa. Ele ir� calcular e mostrar a velocidade de um proj�til em metros por segundo\n");

    printf("\nColoque a dist�ncia em que seu proj�til se encontra: \n");
    scanf("%f", &dis);

    printf("\nColoque os segundos em que seu proj�til se encontra: \n");
    scanf("%f", &temp);

    vel= (dis*1000)/(temp*60);

    printf("\nA velocidade por segundo do seu proj�til � de %0.2f m/s\n\n", vel);

    system("pause");

    return(0);
}