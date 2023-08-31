#include <iostream>
#include <cmath>
#include <locale>

int main (void)
{
    
    float valor, a, b;
    
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    printf("\nO valor vai ser pago à vista [1] ou no credito [2]?\n");
    scanf("%i", &opcao);

    printf("\nInforme o valor do produto: \n");
    scanf("%f", &valor);

    a= valor - (valor*0,10);
    b= valor - (valor*0,05);

    switch (opcao){
        case 1:
        printf("\nO valor vai dar: %0.2f.\n", a);
        break;
    case 2:
        printf("\nO valor vai dar: %0.2f.\n", b);
        break;

    default:
        printf("\nNão foi possível fazer o cálculo para o desconto.\n");
        break;
    }

    system("pause");

    return(0);
}
