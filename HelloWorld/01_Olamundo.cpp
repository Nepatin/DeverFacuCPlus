#include <iostream>
#include <locale>

int main (void){

    setlocale(LC_ALL, "Portuguese");

    printf("\nOlá, mundo.\n\n");
    
    system("pause");

    return (0);
}
