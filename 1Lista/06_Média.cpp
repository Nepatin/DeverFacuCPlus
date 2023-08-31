#include <stdio.h>
#include <locale.h>

int main(void){

	float n1, n2, n3, media;
	
	n1= 0;
	
	n2= 0;
	
	n3= 0;
	
	media= 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite as 3 notas para calcular a média");
	
	printf("\nDigite a 1a nota: ");
	scanf("%f", &n1);
	
	printf("\nDigite a 2a nota: ");
	scanf("%f", &n2);
	
	printf("\nDigite a 3a nota: ");
	scanf("%f", &n3);

	media= (n1+n2+n3)/3;
	
	if (media >= 6){
		printf("\nO aluno passou com a Média %0.2f", media);
	}else{
		printf("\nO aluno reprovou com a Média %0.2f", media);
	}
	
	printf("\n\nA 1a nota foi %0.2f, a 2a nota foi %0.2f e a 3a foi %0.2f.", n1, n2, n3);
	printf("\n\nSendo a média igual a: %0.2f", media);
	
	return(0);
}
