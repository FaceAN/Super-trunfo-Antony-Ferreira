#include <stdio.h>

int main() {

    //Definição das Variáveis

    char estado01[50], estado02[50];
    char cidade01[50], cidade02[50];
    char carta01[5], carta02[5];
    int populacao01, populacao02;
    int pontos01, pontos02;
    int codigo01, codigo02;
    float area01, area02;
    float pib01, pib02;
    
    //Resgisto da Primeira Carta

    printf("Vamos Registrar a primeira carta\n");
    printf("Digite o nome do estado (ex: Alagoas)\n");
    scanf("%s", estado01);
    printf("Digite o nome da cidade (ex: Maceió)\n");
    scanf("%s", cidade01);
    printf("Digite a área da cidade em km² (ex: 1000.000 )\n");
    scanf("%f", &area01);
    printf("Digite a população da cidade (ex: 1000000)\n");
    scanf("%d", &populacao01);
    printf("Digite o PIB da cidade (ex: 1000000.000)\n");
    scanf("%f", &pib01);
    printf("Digite os pontos turísticos da cidade (ex: 10)\n");
    scanf("%d", &pontos01);
    printf("Finalize ao atribuir um código para a carta (ex: A001, B002)\n");
    scanf("%s", carta01);

    //Registro da Segunda Carta


    printf("Agora, vamos registrar a segunda carta\n");
    printf("Digite o nome do Estado (ex: Bahia)\n");
    scanf("%s", estado02);
    printf("Digite o nome da cidade (ex: Salvador)\n");
    scanf("%s", cidade02);
    printf("Digite a aréa da cidade em KM² (ex: 1000.000)\n");
    scanf("%f", &area02);
    printf("Digite a população da cidade (ex: 2000000)\n");
    scanf("%d", &populacao02);
    printf("Digite o PIB da cidade (ex: 2000000.000)\n");
    scanf("%f", &pib02);
    printf("Digite os pontos turísticos da cidade (ex: 10)\n");
    scanf("%d", &pontos02);
    printf("Agora, finalize ao atribuir um código para a carta (ex: A001, B002)\n");
    scanf("%s", carta02);

    //Apresentação dos dados registrados da primeira carta

    printf("------------------\n");
    printf("Primeira Carta Registrada\n");
    printf("estado: %s\n", estado01);
    printf("cidade: %s\n", cidade01);
    printf("população: %d\n", populacao01);
    printf("área: %.2f km²\n", area01);
    printf("PIB: R$ %.2f\n", pib01);
    printf("pontos turísticos: %d\n", pontos01);
    printf("Código da carta: %s\n", carta01);
 

    //Apresentação dos dados registrados da segunda carta

    printf("------------------\n");
    printf("Segunda Carta Registrada\n");
    printf("Estado: %s\n", estado02);
    printf("cidade: %s\n", cidade02);
    printf("população: %d\n", populacao02);
    printf("área: %.2f km²\n", area02);
    printf("PIB: R$ %.2f\n", pib02);
    printf("pontos turísticos: %d\n", pontos02);
    printf("Código da carta: %s\n", carta02);

    return 0;
}