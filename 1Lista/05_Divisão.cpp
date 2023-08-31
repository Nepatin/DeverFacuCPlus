#include <iostream>
#include <locale>

int main (void){
    int a, b, res;

    a= 1;
    b= 1;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Olá, bem vindo(a), ao meu programa. Ele vai fazer a divisão dos números digitados.\n");

    printf("\nInsira o dividendo: ");
    scanf("%i", &a);

    printf("\nInsira o divisor: ");
    scanf("%i", &b);

    res= a/b;

    if (res<1)
    {
        printf("\nNão é possível dividir o numero\n");
    }else{
        printf("\n%i / %i = %i\n", a, b, res);
    }

    system("pause");

    return(0);
}
