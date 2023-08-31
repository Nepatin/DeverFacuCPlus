#include <iostream>
#include <locale>

int main (void){

    setlocale(LC_ALL, "Portuguese");
    
    int a;

    a = 0;

    printf("Digite o valor para ser impresso:\n");
    scanf("%d", &a);

    printf("O valor digitado foi %d.\n", a);

    system("pause");

    return(0);
}
