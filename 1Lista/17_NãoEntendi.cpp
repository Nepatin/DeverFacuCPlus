#include <iostream>
#include <math.h>
#include <locale>

int main(void){

  int a,b,c;

  double d;

  setlocale(LC_ALL, "Portuguese");

  printf("\nOl� eu irei fazer a pot�ncia��o do resultado da divis�o dos dois valores digitados.");

  printf("\nDigite o primeiro valor: \n");
  scanf("%d",&a);

  printf("\nDigite o segundo valor: \n");
  scanf("%d",&b);

  c=a/b;

  d= pow(c,2);

  printf("\nO resultado �: %0.0lf.\n\n", d);

  system("pause");

  return (0);
}