#include <stdio.h>


int main() {
    char estado1;                            //area de declaraçoes de variaveis
    char estado2;                            //cada carta tera suas proprias variaveis, cada uma contendo seus respectivos dados
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, Pturistico1, Pturistico2;
    float area1, area2, PIB1, PIB2;
    
    printf ("--------------------------------------------------------\n");       //cabeçalho de inicializaçao (apenas estetico)
    printf ("       Bem Vindo ao Jogo Super Trunfo\n");
    printf ("--------------------------------------------------------\n");
    printf ("    \n");                                                           //imprimir uma linha em branco (apenas estetico)
    printf ("Vamos comecar cadastrando a primeira carta!!!\n");
    printf ("informe uma letra que represente um Estado: ");                    //o codigo começa a pedir dados do usuario
    scanf ("%c", &estado1);                                                     //cada dado informado é lido e armazenado dentro da variavel respectiva
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
    
    printf ("   \n");                                                          //imprimir uma linha em branco(estetico)
    printf ("Otimo, vamos cadastrar a segunda carta!!!\n ");                   //o usuario começa o cadastramento dos dados da segunda carta 
    printf ("informe uma letra que represente um Estado: ");                   //o processo de imprimir na tela a informaçao qque o codigo esta solicitando continua
    scanf (" %c", &estado2);                                                   //o codigo começa a ler as informaçoes enviadas  pelo usuario                               
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
    
    printf ("----------------------------------------\n");                    //imprime uma linha (estetico)
    printf ("CARTA 1:\n" );                                                   //o codigo começa  a imprimir na tela os dados armazenados,  sempre  pulando uma  linha pra ficar organizado e melhorar a experiencia do usuario
    printf ("ESTADO: %c\n", estado1);                                         //o valor das variaveis começam a ser solicitadas da memoria do computador e impressas na tela  atravez  do indicador de variavel
    printf ("CODIGO: %c 01\n", estado1);
    printf ("CIDADE: %s\n", cidade1);
    printf ("POPULACAO: %d\n", populacao1);
    printf ("AREA: %f\n", area1);
    printf ("PIB: %f\n", PIB1);
    printf ("PONTOS TURISTICOS: %d\n", Pturistico1);
    
    printf ("            \n");                                                //pula uma linha (estetico)
    printf ("CARTA 2:\n" );                                                   //codigo começa a imprimir os dados da segunda carta
    printf ("ESTADO: %c\n", estado2);
    printf ("CODIGO: %c 02\n", estado2);
    printf ("CIDADE: %s\n", cidade2);
    printf ("POPULACAO: %d\n", populacao2);
    printf ("AREA: %f\n", area2);
    printf ("PIB: %f\n", PIB2);
    printf ("PONTOS TURISTICOS: %d\n", Pturistico2);
    
    return 0;
    




}
