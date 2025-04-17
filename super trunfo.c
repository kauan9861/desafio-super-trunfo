#include <stdio.h>

int main(void) {

    // Função da carta 1------------------------------------------------

    //declaracao das variaveis

    char estado[3];
    char codigo_da_carta[4];
    char nome_da_cidade[30];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    //area de preenchimento dos dados

    printf("###    SUPER TRUNFO    ###\n\n");

    printf("###    CARTA 1    ###\n\n");

    //estado

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    printf("estado: ");
    scanf("%s", estado);
    printf("\n");

    //codigo da carta

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    printf("codigo da carta: ");
    scanf("%s", codigo_da_carta);
    printf("\n");

    //nome da cidade

    printf("O nome da cidade\n");
    printf("nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade);
    printf("\n");

    //populaçao

    printf("O número de habitantes da cidade\n");
    printf("populacao: ");
    scanf("%i", &populacao);
    printf("\n");

    //area

    printf("A área da cidade em quilômetros quadrados\n");
    printf("area(km²): ");
    scanf("%f", &area);
    printf("\n");

    //PIB

    printf("O Produto Interno Bruto da cidade\n");
    printf("PIB: ");
    scanf("%f", &pib);
    printf("\n");

    //numero de pontos turisticos

    printf("A quantidade de pontos turísticos na cidade\n");
    printf("numero de pontos turisticos: ");
    scanf("%i", &numero_de_pontos_turisticos);
    printf("\n\n");

    //funçao da carta 2 -----------------------------------------------

    //declaracao das variaveis

    char estado2[3];
    char codigo_da_carta2[4];
    char nome_da_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    //area de preenchimento dos dados

    printf("###   carta 2   ###\n\n");

    //estado

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    printf("estado: ");
    scanf("%s", estado2);
    printf("\n");

    //codigo da carta

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    printf("codigo da carta: ");
    scanf("%s", codigo_da_carta2);
    printf("\n");

    //nome da cidade

    printf("O nome da cidade\n");
    printf("nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);
    printf("\n");

    //populaçao

    printf("O número de habitantes da cidade\n");
    printf("populacao: ");
    scanf("%i", &populacao2);
    printf("\n");

    //area

    printf("A área da cidade em quilômetros quadrados\n");
    printf("area(km²): ");
    scanf("%f", &area2);
    printf("\n");

    //PIB

    printf("O Produto Interno Bruto da cidade\n");
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("\n");

    //numero de pontos turisticos

    printf("A quantidade de pontos turísticos na cidade\n");
    printf("numero de pontos turisticos: ");
    scanf("%i", &numero_de_pontos_turisticos2);
    printf("\n\n");

    //aqui esta a exbibiçao final das duas cartas------------------------------------

    printf("###   CARTAS REGISTRADAS   ###\n\n\n");

    printf("###   carta 1   ###\n");
    
    //informaçoes da carta 1

    printf("Estado:%s\n", estado);
    printf("Codigo da carta:%s", codigo_da_carta);
    printf("Nome da cidade:%s\n", nome_da_cidade);
    printf("Populaçao:%i\n", populacao);
    printf("area (km²):%.2f\n", area);
    printf("PIB:%.2f\n", pib);
    printf("Numero de pontos turisticos:%i\n", numero_de_pontos_turisticos);

    printf("\n\n");
    
    //informaçoes da carta 1

    printf("###   carta 2   ###\n");

    printf("Estado:%s\n", estado2);
    printf("Codigo da carta:%s\n", codigo_da_carta2);
    printf("Nome da cidade:%s\n", nome_da_cidade2);
    printf("Populaçao:%i\n", populacao2);
    printf("area (km²):%.2f\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("Numero de pontos turisticos:%i\n", numero_de_pontos_turisticos2);
  
    return 0;
}
