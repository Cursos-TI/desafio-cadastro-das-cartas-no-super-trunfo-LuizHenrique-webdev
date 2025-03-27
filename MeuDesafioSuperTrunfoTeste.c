#include <stdio.h>

int main(){
    char estado1;
    char estado2;
    char cidade1 [50], cidade2 [50];
    int populacao1, populacao2, Pturistico1, Pturistico2;
    float area1, area2, PIB1, PIB2;
    
    printf ("--------------------------------------------------------\n");
    printf ("       Bem Vindo ao Jogo Super Trunfo\n");
    printf ("--------------------------------------------------------\n");
    printf ("    \n");
    printf ("Vamos comecar cadastrando a primeira carta!!!\n");
    printf ("informe uma letra que represente um Estado: ");
    scanf ("%c", &estado1);
    printf ("informe o nome da cidade: ");
    scanf ("%s", &cidade1);
    printf ("informe a populacao: ");
    scanf ("%d", &populacao1);
    printf  ("informe a area: ");
    scanf ("%f", &area1);
    printf ("informe o PIB: ");
    scanf ("%f", &PIB1);
    printf ("informe a quantidade de pontos turisticos: ");
    scanf ("%d", &Pturistico1);
    
    printf ("   \n");
    printf ("Otimo, vamos cadastrar a segunda carta!!!\n ");
    printf ("informe uma letra que represente um Estado: ");
    scanf (" %c", &estado2);
    printf ("informe o nome da cidade: ");
    scanf ("%s", &cidade2);
    printf ("informe a populacao: ");
    scanf ("%d", &populacao2);
    printf  ("informe a area: ");
    scanf ("%f", &area2);
    printf ("informe o PIB: ");
    scanf ("%f", &PIB2);
    printf ("informe a quantidade de pontos turisticos: ");
    scanf ("%d", &Pturistico2);
    
    printf ("----------------------------------------\n");
    printf ("CARTA 1:\n" );
    printf ("ESTADO: %c\n", estado1);
    printf ("CODIGO: %c 01\n", estado1);
    printf ("CIDADE: %s\n", cidade1);
    printf ("POPULACAO: %d\n", populacao1);
    printf ("AREA: %f\n", area1);
    printf ("PIB: %f\n", PIB1);
    printf ("PONTOS TURISTICOS: %d\n", Pturistico1);
    
    printf ("            \n");
    printf ("CARTA 2:\n" );
    printf ("ESTADO: %c\n", estado2);
    printf ("CODIGO: %c 02\n", estado2);
    printf ("CIDADE: %s\n", cidade2);
    printf ("POPULACAO: %d\n", populacao2);
    printf ("AREA: %f\n", area2);
    printf ("PIB: %f\n", PIB2);
    printf ("PONTOS TURISTICOS: %d\n", Pturistico2);
    
    return 0;
    
}