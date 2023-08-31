#include <iostream>
#include <locale>

int main(void){
    
    int N1, A1, S2;

    setlocale(LC_ALL, "Portuguese");
    
    N1= 0;
    A1= 0;
    S2= 0;

    printf("Irei advinhar o antecessor e sucessor do seu numero inteiro\n");

    printf("\nInsira o valor:");
    scanf("%i", &N1);

    A1= N1 - 1;

    S2= N1 + 1;

    printf("\nO antecessor de %i é %i\n\nE o sucessor de %i é %i\n\n", N1, A1, N1, S2);
    system("pause");
    return(0);
}
