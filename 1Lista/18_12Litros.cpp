#include <iostream>
#include <locale>
#include <math.h>

int main (void){

	int temp, vel, dis;

	float lit;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nOlá, bem vindo ao meu programa.\nPense a seguinte situação, o seu automovél faz 12km/l e você deseja saber a velocidade média do auto, tempo gasto, distância percorrida e a quantidade de litros.\nEu irei fazer o calculo!\nSinta-se agradecido!\n");
    
	printf("\nDigite o tempo gasto em horas:");
	scanf("%i", &temp);
	
	printf("\nDigite a velocidade:");
	scanf("%i", &vel);	
	
	dis= temp * vel;
	
	lit= dis/12;
	
	printf("\nA velocidade de seu veículo é %im/s\n\nTempo gasto na viagem é %ih\n\nA distância percorrida é de %ikm/h\n\nA quantidade de litros utilizada na viagem foi %0.2fkm/l\n\n", vel, temp, dis, lit);
	
	system("pause");
	
	return(0);
	
}