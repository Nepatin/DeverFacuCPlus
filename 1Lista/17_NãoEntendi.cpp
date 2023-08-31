#include <iostream>
#include <math.h>
#include <locale>

int main(void){

  int a,b,c;

  double d;

  setlocale(LC_ALL, "Portuguese");

  printf("\nOlá eu irei fazer a potênciação do resultado da divisão dos dois valores digitados.");

  printf("\nDigite o primeiro valor: \n");
  scanf("%d",&a);

  printf("\nDigite o segundo valor: \n");
  scanf("%d",&b);

  c=a/b;

  d= pow(c,2);

  printf("\nO resultado é: %0.0lf.\n\n", d);

  system("pause");

  return (0);
}