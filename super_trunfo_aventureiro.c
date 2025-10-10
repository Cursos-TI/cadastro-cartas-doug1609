#include <stdio.h>

int main()
{

    char cartaA[50] = "A";
    char estadoA[50];
    char codigocartaA[50];
    char nomedacidadeA[50];
    int numerohabitantesA;
    float areacidadeqA;
    float pibA;
    int numeroturisticosA;

    float  calcpibcartaA; 
    float calcpopulacartaA;



    char cartaB[50] = "B";
    char estadoB[50];
    char codigocartaB[50];
    char nomedacidadeB[50];
    int numerohabitantesB;
    float areacidadeqB;
    float pibB;
    int numeroturisticosB;

    float  calcpibcartaB; 
    float calcpopulacartaB;



    printf("Carta A! \n");

    printf("Digite o estado Uma letra de 'A' a 'H' : \n");
    scanf("%s", estadoA);

    printf("Digite o Codigo da carta  A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) : \n");
    scanf("%s", codigocartaA);

    printf("Digite o nome da cidade \n");
    scanf("%s", nomedacidadeA);

    printf("Digite o número de habitantes da cidade \n");
    scanf("%d", &numerohabitantesA);

    printf("Digite a área da cidade em quilômetros quadrados \n");
    scanf("%f", &areacidadeqA);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &pibA);

    printf("Digite a quantidade de numeros turisticos \n");
    scanf("%d", &numeroturisticosA);

    printf("\nCarta B! \n");

    printf("Digite o estado Uma letra de 'A' a 'H' : \n");
    scanf("%s", estadoB);

    printf("Digite o Código da carta (ex: A01, B03): \n");
    scanf("%s", codigocartaB);

    printf("Digite o nome da cidade \n");
    scanf("%s", nomedacidadeB);

    printf("Digite o número de habitantes da cidade \n");
    scanf("%d", &numerohabitantesB);

    printf("Digite a área da cidade em quilômetros quadrados \n");
    scanf("%f", &areacidadeqB);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &pibB);

    printf("Digite a quantidade de números turísticos \n");
    scanf("%d", &numeroturisticosB);


    calcpibcartaA =  (pibA) / numerohabitantesA;
    calcpopulacartaA = (numerohabitantesA) / areacidadeqA;

    calcpibcartaB = (pibB) / numerohabitantesB;
    calcpopulacartaB =  (numerohabitantesB) / areacidadeqB;

    printf("\nAs informações da Carta %s são:\n", cartaA);
    printf("Estado: %s \n", estadoA);
    printf("Código: %s \n", codigocartaA);
    printf("Nome da Cidade %s \n", nomedacidadeA);
    printf("População %d \n", numerohabitantesA);
    printf("Área %f \n", areacidadeqA);
    printf("PIB %f \n", pibA);
    printf("Número de Pontos Turísticos %d \n", numeroturisticosA);
    printf("a Densidade Populacional e %f \n" , calcpopulacartaA);
    printf("O pib percentual por capital e %f", calcpibcartaA);



    printf("\nAs informações da Carta %s são:\n", cartaB);
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigocartaB);
    printf("Nome da Cidade: %s\n", nomedacidadeB);
    printf("População: %d\n", numerohabitantesB);
    printf("Área: %.2f km²\n", areacidadeqB);
    printf("PIB: %.2f bilhões\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", numeroturisticosB);
    printf("a Densidade Populacional e %f \n" , calcpopulacartaB);
    printf("O pib percentual por capital e %f", calcpibcartaB);


 
 
 
 
 
    return (0);
}
