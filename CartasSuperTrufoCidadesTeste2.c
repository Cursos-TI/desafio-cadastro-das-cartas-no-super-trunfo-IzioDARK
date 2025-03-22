#include <stdio.h>

int main(){
    char Carta = 01;
    char Estado[50] = "Alagoas";
    char Código[20] = "A01";
    char Cidade[20] = "Maceio";
    int População = 3127511;
    float Área= 27848.140;
    float PIB = 76.266;
    int Numero = 27;
    float Densidade;
    float PIBper;

    Densidade = População / Área;
    PIBper = População / PIB;

    printf("Carta %d\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Código);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d Habitantes\n", População);
    printf("Área em Km²: %.3fKM²\n", Área);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", Numero);
    printf("Densidade Populacional: %.2f Hab/Km² \n", Densidade);
    printf("PIB per Capita: %.2f Reais\n", PIBper);
    printf("\n");
    printf("\n");
    

    char carta = 02;
    char estado[50] = "Pernanbuco";
    char código[20] = "A02";
    char cidade[20] = "Recife";
    int população = 9058155;
    float área= 98067.881;
    float pib = 245.828;
    int numero = 32;
    float densidade;
    float pibPER;

    densidade = população / área;
    pibPER = população / pib;

    
    printf("Carta %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", código);
    printf("Cidade: %s\n", cidade);
    printf("População: %d Habitantes\n", população);
    printf("Área em Km²: %.3fKm²\n", área);
    printf("PIB: %.3f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numero);
    printf("Densidade Populacional: %.2f Hab/Km² \n", densidade);
    printf("PIB per Capita: %.2f Reais\n", pibPER);

    return 0;
}
