#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

typedef struct {
    char estado[1];  // Exemplo: "SP", "RJ"
    char codigoCarta[3];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    float dencidadepopulacional;
} Carta;
typedef struct {
    char estado2[1];  // Exemplo: "SP", "RJ"
    char codigoCarte2[3];
    char nommeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    float dencidadepopulacional2;
} Carta2;


float calcularpib(float pib,float populacao) {
  float resultado;
    resultado = pib/populacao;
    return(resultado);
}
float calcularDP(float area,float popu) {
  float dp;
  dp = popu/area;
  return(dp);
}

int main() {
  
  float pib,pib2,dp,dp2; 
  
  Carta pais;
   
    // Entrada de dados carta 1
    printf("Digite os Dados da Carta 1\n \n");
    
    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%1s", pais.estado);
    
    printf("Digite o código da carta: ");
    scanf("%3s", pais.codigoCarta);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", pais.nomeCidade);
    
    printf("Digite a população: ");
    scanf("%d", &pais.populacao);
    
    printf("Digite a área em km²: ");
    scanf("%f", &pais.area);

    printf("Digite o PIB: ");
    scanf("%f", &pais.pib);

    pib=calcularpib(pais.pib,pais.populacao);

    dp=calcularDP(pais.area,pais.populacao);

   Carta2 pais2;
    
    // Entrada de dados carta 2
    printf("Digite os Dados da Carta 2\n \n");
    
    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%1s", pais2.estado2);
    
    printf("Digite o código da carta: ");
    scanf("%3s",pais2.codigoCarte2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", pais2.nommeCidade2);

    printf("Digite a população: ");
    scanf("%d", &pais2.populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &pais2.area2);

    printf("Digite o PIB: ");
    scanf("%f", &pais2.pib2);

    pib2=calcularpib(pais2.pib2,pais2.populacao2); 
    
    dp2=calcularDP(pais2.area2,pais2.populacao2);
    
    
// verificar se carta1 e maior ou menos que a carta2

    
    // Exibição dos dados
    printf("\n===== DADOS DA Carta 1 =====\n");
    printf("Estado: %s\n", pais.estado);
    printf("Código da Carta: %s\n", pais.codigoCarta);
    printf("Nome da Cidade: %s\n", pais.nomeCidade);
    printf("População: %d\n", pais.populacao);
    printf("Área: %.2f km²\n", pais.area);
    printf("PIB per Capta: %.2f\n", pib);
    printf("Dencidade Populacional: %f\n", dp);

    printf("\n===== DADOS DA Carta 2 =====\n");
    printf("Estado: %s\n", pais2.estado2);
    printf("Código da Carta: %s\n", pais2.codigoCarte2);
    printf("Nome da Cidade: %s\n", pais2.nommeCidade2);
    printf("População: %d\n", pais2.populacao2);
    printf("Área: %.2f km²\n", pais2.area2);
    printf("PIB: %.2f\n", pib2);
    printf("Dencidade Populacional: %f\n", dp2);
    

    
    return 0;
}
