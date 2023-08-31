#include <iostream>
#include <locale>
#include <math.h>

#define PI 3.14159

int main (void){
    
    float vol, raio;
    
    setlocale(LC_ALL, "Portuguese");

    printf("\nOlá, bem vindo ao meu programa. Irei calcular e mostrar o volume de sua esfera. Pq? Não sei, só sei que eu vou.\n");

    printf("\nColoque o raio de sua esfera: \n");
    scanf("%f", &raio);

    vol= (4/3) * PI * (pow(raio, 3));

    printf("\nO raio de sua esfera é %0.2f, sendo assim o volume de sua esfera (espero eu) é %f\n\n", raio, vol);

    system("pause");

    return(0);
}