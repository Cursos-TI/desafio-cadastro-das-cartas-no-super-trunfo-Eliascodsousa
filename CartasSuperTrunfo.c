#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

typedef struct {
    char estado[3];  // Exemplo: "SP", "RJ"
    char codigoCarta[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
} Carta;

int main() {
  Carta cidade;
    
    // Entrada de dados
    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%2s", cidade.estado);
    
    printf("Digite o código da carta: ");
    scanf("%9s", cidade.codigoCarta);
    
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
    
    // Exibição dos dados
    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Estado: %s\n", cidade.estado);
    printf("Código da Carta: %s\n", cidade.codigoCarta);
    printf("Nome da Cidade: %s\n", cidade.nomeCidade);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade.numPontosTuristicos);
    
    return 0;
}
