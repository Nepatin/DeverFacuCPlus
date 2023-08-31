#include <iostream>
#include <locale>

int main (void){

	setlocale(LC_ALL, "Portuguese");

	int a, b, soma;

	a= 0;
	b= 0;
	soma= 0;

	printf("Digite primeiro valor: ");
	scanf("%i", &a);

	printf("\nDigite segundo valor: ");
	scanf("%i", &b);

	soma= a + b;

	printf("\n%i + %i = %i\n\n", a, b, soma);

	system("pause");

	return(0);
}
