#include <stdio.h>

int main()  {

    char estado1[20], estado2[20], cod1[20], cod2[20], nome1[20], nome2[20];
    int pop1, pop2, pt1, pt2;
    float area1, area2, pib1, pib2;

    printf ("Digite o Primeiro Estado: ");
    scanf ("%s", estado1);

    printf ("Digite o Segundo Estado: ");
    scanf ("%s", estado2);
    
    printf ("Digite o Primeiro Código: ");
    scanf ("%s", cod1);

    printf ("Digite o Segundo Código: ");
    scanf ("%s", cod2);

    printf ("Digite o nome da primeira cidade: ");
    scanf ("%s", nome1);

    printf ("Digite o nome da segunda cidade: ");
    scanf ("%s", nome2);

    printf ("Digite a população da primeira cidade: ");
    scanf ("%d", &pop1);

    printf ("Digite a população da segunda cidade: ");
    scanf ("%d", &pop2);

    printf("Digite a área da primeira cidade (em km²): ");
    scanf ("%f", &area1);

    printf("Digite a área da segunda cidade (em km²): ");
    scanf ("%f", &area2);

    printf("Digite o PIB da primeira cidade: ");
    scanf ("%f", &pib1);

    printf("Digite o PIB da segunda cidade: ");
    scanf ("%f", &pib2);
    
    printf ("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf ("%d", &pt1);

    printf ("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf ("%d", &pt2);

    \n
    \n

    printf("CARTA 1\n");
    printf("O Estado é: %s\n", estado1);
    printf("O Código é: %s\n", cod1);
    printf("A cidade é: %s\n", nome1);
    printf ("A população é: %d\n", pop1);
    printf ("A área é: %f km²\n", area1);
    printf ("O PIB é: %f bilhões de reais\n", pib1);
    printf ("O numero de pontos turísticos é: %d\n", pt1);




    printf("CARTA 2\n");
    printf("O Estado é: %s\n", estado2);
    printf("O Código é: %s\n", cod2);
    printf("A cidade é: %s\n", nome2);
    printf ("A população é: %d\n", pop2);
    printf ("A área é: %f km²\n", area2);
    printf ("O PIB é: %f bilhões de reais\n", pib2);
    printf ("O numero de pontos turísticos é: %d\n", pt2);



}