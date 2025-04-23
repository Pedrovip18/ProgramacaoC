#include <stdio.h>

int main()  {

    char nome[20];
    int idade;
    float altura;
    float peso;

    printf ("Digite seu nome: ");
    scanf ("%s", nome);
    printf("O nome é: %s\n", nome);

    printf ("Digite a sua idade: ");
    scanf ("%d", &idade);
    printf ("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf ("%f", &altura);
    printf ("A altura é: %f\n", altura);
    
    printf ("Digite seu peso: ");
    scanf ("%f", &peso);
    printf("O peso é: %f\n", peso);

}