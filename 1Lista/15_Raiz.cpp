#include <iostream>
#include <locale>
#include <math.h>

int main(void){
    
    double num, raiz;

    setlocale(LC_ALL, "Portuguese");

    printf("Ol�, bem vindo ao meu programa. Irei fazer o calculo da raiz para voc�!\nSinta-se agradecido.\n");

    printf("\nDigite a base: \n");
    scanf("%lf", &num);

    raiz= sqrt(num);

    printf("\nA raiz quadrada de %0.0lf, � %0.3lf\n", num, raiz);

    system("pause");
    return(0);
}