#include <iostream>
#include <locale>

int main (void){
    int a, b, res;

    a= 1;
    b= 1;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Ol�, bem vindo(a), ao meu programa. Ele vai fazer a divis�o dos n�meros digitados.\n");

    printf("\nInsira o dividendo: ");
    scanf("%i", &a);

    printf("\nInsira o divisor: ");
    scanf("%i", &b);

    res= a/b;

    if (res<1)
    {
        printf("\nN�o � poss�vel dividir o numero\n");
    }else{
        printf("\n%i / %i = %i\n", a, b, res);
    }

    system("pause");

    return(0);
}
