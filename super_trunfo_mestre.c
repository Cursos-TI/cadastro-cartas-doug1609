
#include <stdio.h>

int main()
{

    char cartaA[50] = "A";
    char estadoA[50];
    char codigocartaA[50];
    char nomedacidadeA[50];
    unsigned long int numerohabitantesA;
    float areacidadeqA;
    float pibA;
    int numeroturisticosA;
    float  calcpibcartaA; 
    float calcpopulacartaA;
    float superpoderA;


    char cartaB[50] = "B";
    char estadoB[50];
    char codigocartaB[50];
    char nomedacidadeB[50];
    unsigned long int numerohabitantesB;
    float areacidadeqB;
    float pibB;
    int numeroturisticosB;
    float  calcpibcartaB; 
    float calcpopulacartaB;
    float superpoderB;


    

                /*aqui estamos coletando as infomraçoes da carta A */
    printf("Carta A! \n");  
    printf("Digite o estado Uma letra de 'A' a 'H' : \n");
    scanf("%s", estadoA);
    printf("Digite o Codigo da carta  A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) : \n");
    scanf("%s", codigocartaA);
    printf("Digite o nome da cidade \n");
    scanf("%s", nomedacidadeA);
    printf("Digite o número de habitantes da cidade \n");
    scanf("%lu", &numerohabitantesA);
    printf("Digite a área da cidade em quilômetros quadrados \n");
    scanf("%f", &areacidadeqA);
    printf("Digite o PIB da cidade \n");
    scanf("%f", &pibA);
    printf("Digite a quantidade de numeros turisticos \n");
    scanf("%d", &numeroturisticosA);



    /*aqui estamos coletando as infomraçoes da carta A */
    printf("\nCarta B! \n");
    printf("Digite o estado Uma letra de 'A' a 'H' : \n");
    scanf("%s", estadoB);
    printf("Digite o Código da carta (ex: A01, B03): \n");
    scanf("%s", codigocartaB);
    printf("Digite o nome da cidade \n");
    scanf("%s", nomedacidadeB);
    printf("Digite o número de habitantes da cidade \n");
    scanf("%lu", &numerohabitantesB);
    printf("Digite a área da cidade em quilômetros quadrados \n");
    scanf("%f", &areacidadeqB);
    printf("Digite o PIB da cidade \n");
    scanf("%f", &pibB);
    printf("Digite a quantidade de números turísticos \n");
    scanf("%d", &numeroturisticosB);



                     /*aqui e o calculo da densidade e pib*/
    calcpibcartaA =  (pibA) / numerohabitantesA;
    calcpopulacartaA = (numerohabitantesA) / areacidadeqA;

    calcpibcartaB = (pibB) / numerohabitantesB;
    calcpopulacartaB =  (numerohabitantesB) / areacidadeqB;

                 
             
  /*inverso das densidades */
   float invdensA;
   float invdensB;
    invdensA = 1 / calcpopulacartaA;  /* inverso da densidade A */
    invdensB = 1 / calcpopulacartaB;  /* inverso da densidade B */


                    /* calculo dos super poderes */
superpoderA = numerohabitantesA + areacidadeqA + pibA + numeroturisticosA + calcpibcartaA + invdensA;
superpoderB = numerohabitantesB + areacidadeqB + pibB + numeroturisticosB + calcpibcartaB + invdensB;
   

               
             /*aqui estamos informando as infomraçoes da carta A */

    printf("\nAs informações da Carta %s são:\n", cartaA);
    printf("Estado: %s \n", estadoA);
    printf("Código: %s \n", codigocartaA);
    printf("Nome da Cidade %s \n", nomedacidadeA);
    printf("População %lu \n", numerohabitantesA);
    printf("Área %f \n", areacidadeqA);
    printf("PIB %f \n", pibA);
    printf("Número de Pontos Turísticos %d \n", numeroturisticosA);
    printf("a Densidade Populacional e %f \n" , calcpopulacartaA);
    printf("O pib percentual por capital e %f \n", calcpibcartaA);
    printf("super poder A %f \n" , superpoderA);

    /*aqui estamos informando as infomraçoes da carta B */

    printf("\nAs informações da Carta %s são:\n", cartaB);
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigocartaB);
    printf("Nome da Cidade: %s\n", nomedacidadeB);
    printf("População: %lu\n", numerohabitantesB);
    printf("Área: %.2f km²\n", areacidadeqB);
    printf("PIB: %.2f bilhões\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", numeroturisticosB);
    printf("a Densidade Populacional e %f \n" , calcpopulacartaB);
    printf("O pib percentual por capital e %f \n", calcpibcartaB);
    printf("Super poder B %f \n", superpoderB);



      /* aqui vai ser quem vai vencer*/



      /* maior vence */
int r_pop   = (numerohabitantesA > numerohabitantesB);
int r_area  = (areacidadeqA      > areacidadeqB);
int r_pib   = (pibA              > pibB);
int r_pts   = (numeroturisticosA > numeroturisticosB);
int r_pc    = (calcpibcartaA     > calcpibcartaB);
int r_sup   = (superpoderA       > superpoderB);

/* menor vence para densidade */
int r_dens  = (calcpopulacartaA  < calcpopulacartaB);

printf("\nComparação de Cartas:\n");
printf("População: Carta 1 venceu (%d)\n", r_pop);
printf("Área: Carta 1 venceu (%d)\n", r_area);
printf("PIB: Carta 1 venceu (%d)\n", r_pib);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", r_pts);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", r_dens);
printf("PIB per Capita: Carta 1 venceu (%d)\n", r_pc);
printf("Super Poder: Carta 1 venceu (%d)\n", r_sup);

 
 
 
 
 
    return (0);
}
