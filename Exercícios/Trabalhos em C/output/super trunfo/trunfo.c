#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Carta 1
  
  char estado;
  char codigo[5];
  char cidade[50];
  int populacao;
  float area;
  float PIB;
  int pontos;

  // Entrada de dados
  printf("CARTA 1:\n");
  printf("Escolha a letra do estado (de A até H): ");
  scanf(" %c", &estado);

  printf("Digite o codigo da carta (Letra escolhida + um número de 01 até 09): ");
  scanf("%s", codigo);

  printf("Qual o nome da cidade: ");
  scanf("%s", cidade);

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao);

  printf("Qual a área da cidade em km²: ");
  scanf("%f", &area);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &PIB);

  printf("Qual a quantidade de pontos turisticos (em números): ");
  scanf("%d", &pontos);

  float densidade = populacao / area;
  float PIBperCapita = PIB / populacao;
  float superPoder = populacao + area + PIB + pontos + PIBperCapita + densidade;

  // Exibição dos dados da cidade
  printf("Carta 1: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$ %.2f bilhões\n", PIB);
  printf("Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita);
  printf("Super Poder: %.2f\n", superPoder);
  printf("\n");
  
  // Carta 2
  
  char estado2;
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pontos2;

  // Entrada de dados
  printf("CARTA 2:\n");
  printf("Escolha a letra do estado (de A até H): ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta (Letra escolhida + um número de 01 até 09): ");
  scanf("%s", codigo2);

  printf("Qual o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Qual a área da cidade em km²: ");
  scanf("%f", &area2);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &PIB2);

  printf("Qual a quantidade de pontos turisticos (em números): ");
  scanf("%d", &pontos2);

  float densidade2 = populacao2 / area2;
  float PIBperCapita2 = PIB2 / populacao2;
  float superPoder2 = populacao2 + area2 + PIB2 + pontos2 + PIBperCapita2 + densidade2;

  // Exibição dos dados da cidade
  printf("Carta 1: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões\n", PIB2);
  printf("Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
  printf("Super Poder: %.2f\n", superPoder2);
  printf("\n");
  
  // Cartas comparadas
  int comparacao;

    printf("Escolha um tributo para comparação!");
    printf("1: População\n");
    printf("2: Área\n");
    printf("3: PIB\n");
    printf("4: Pontos Tusísticos\n");
    printf("5: Densidade Demográfica\n");
    printf("6: PIB per Capita\n");
    printf("7: Super Poder\n");
    printf("Digite o número do tributo:");
    scanf("%d", &comparacao);

    printf("Comparação das cartas:\n");
    
    switch (comparacao) {
    
      case 1:
        if (populacao > populacao2) {
          printf("Carta 1 venceu!");
        } else if (populacao < populacao2) {
          printf("Carta 2 venceu!");
        } else {
          printf("Empate!");
        }
        break;

      case 2:  
        if (area > area2) {
          printf("Carta 1 venceu!");
        } else if (area < area2) {
          printf("Carta 2 venceu!");
        } else {
        printf("Empate!");
        }
        break;
    
      case 3:  
        if (PIB > PIB2) {
          printf("Carta 1 Venceu!");
        } else if (PIB < PIB2) { 
          printf("Carta 2 venceu!");
        } else {
          printf("Empate!");
        }
        break;
    
      case 4:  
        if (pontos > pontos2) {
          printf("Carta 1 venceu!");
        } else if (pontos < pontos2) {
          printf("Carta 2 venceu!");
        } else {
          printf("Empate!");
        }
        break;
    
      case 5:  
        if (densidade < densidade2) {
          printf("Carta 1 venceu!");
        } else if (densidade > densidade2) {
          printf("Carta 2 venceu!");
        } else {
          printf("Empate!");
        }
        break;
    
      case 6:  
        if (PIBperCapita > PIBperCapita2) {
          printf("Carta 1 venceu!");
        } else if (PIBperCapita < PIBperCapita2) {
          printf("Carta 2 venceu!");
        } else {
          printf("Empate!");
        }
        break;
    
      case 7:  
        if (superPoder > superPoder2) {
          printf("Carta 1 venceu!");
        } else if (superPoder < superPoder2) {
          printf("Carta 2 venceu!");
        } else {
          printf("Empate!");
        }
        break;
    } 
      
return 0;
} 
