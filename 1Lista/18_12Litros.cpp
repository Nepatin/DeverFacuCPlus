#include <iostream>
#include <locale>
#include <math.h>

int main (void){

	int temp, vel, dis;

	float lit;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nOl�, bem vindo ao meu programa.\nPense a seguinte situa��o, o seu automov�l faz 12km/l e voc� deseja saber a velocidade m�dia do auto, tempo gasto, dist�ncia percorrida e a quantidade de litros.\nEu irei fazer o calculo!\nSinta-se agradecido!\n");
    
	printf("\nDigite o tempo gasto em horas:");
	scanf("%i", &temp);
	
	printf("\nDigite a velocidade:");
	scanf("%i", &vel);	
	
	dis= temp * vel;
	
	lit= dis/12;
	
	printf("\nA velocidade de seu ve�culo � %im/s\n\nTempo gasto na viagem � %ih\n\nA dist�ncia percorrida � de %ikm/h\n\nA quantidade de litros utilizada na viagem foi %0.2fkm/l\n\n", vel, temp, dis, lit);
	
	system("pause");
	
	return(0);
	
}