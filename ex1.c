#include <stdio.h>

int main()  {

    char nome[20] = "pedro";
    int idade = 31;
    float altura = 1.70;
    float peso = 87.600;

    printf ("O nome do rapaz é: %s\n", nome);
    printf ("A idade do %s é: %d\n", nome, idade);
    printf("A altura do %s é %.2f e o peso é %.3f\n", nome, altura, peso);
}
