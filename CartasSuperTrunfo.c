#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

typedef struct {
    char estado[1],estado2[1];  // Exemplo: "SP", "RJ"
    char codigoCarta[3],codigoCarte2[3];
    char nomeCidade[50],nommeCidade2[50];
    int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int numPontosTuristicos,numPontosTuristicos2;
} Carta;
typedef struct {
    char estado2[1];  // Exemplo: "SP", "RJ"
    char codigoCarte2[3];
    char nommeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
} Carta2;

int main() {
  Carta cidade;
    
    // Entrada de dados carta 1
    printf("Digite os Dados da Carta 1");
    
    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%1s", cidade.estado);
    
    printf("Digite o código da carta: ");
    scanf("%3s",cidade.estado, cidade.codigoCarta);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade.nomeCidade);
    
    printf("Digite a população: ");
    scanf("%d", &cidade.populacao);
    
    printf("Digite a área em km²: ");
    scanf("%f", &cidade.area);
    
    printf("Digite o PIB: ");
    scanf("%f", &cidade.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade.numPontosTuristicos);

 Carta2 cidade2;
    
    // Entrada de dados carta 2
    printf("Digite os Dados da Carta 2");
    
    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%1s", cidade2.estado2);
    
    printf("Digite o código da carta: ");
    scanf("%3s",cidade2.estado, cidade2.codigoCarta2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2.nomeCidade2);

    
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &cidade2.area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &cidade2.pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade2.numPontosTuristicos2);

// verificar se carta1 e maior ou menos que a carta2

    
    // Exibição dos dados
    printf("\n===== DADOS DA Carta 1 =====\n");
    printf("Estado: %s\n", cidade.estado);
    printf("Código da Carta: %s\n", cidade.codigoCarta);
    printf("Nome da Cidade: %s\n", cidade.nomeCidade);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade.numPontosTuristicos);

      printf("\n===== DADOS DA Carta 2 =====\n");
    printf("Estado: %s\n", cidade2.estado2);
    printf("Código da Carta: %s\n", cidade2.codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2.nomeCidade2);
    printf("População: %d\n", cidade2.populacao2);
    printf("Área: %.2f km²\n", cidade2.area2);
    printf("PIB: %.2f\n", cidade2.pib2);
    printf("Número de Pontos Turísticos: %d\n", cidade2.numPontosTuristicos2);
    

    
    return 0;
}
