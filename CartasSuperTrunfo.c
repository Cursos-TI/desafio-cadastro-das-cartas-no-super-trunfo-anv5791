#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char codigocidade[4] [24] = {'A01','A02','A03','A04','B01','B02','B03','B04','C01','C02','C03','C04','D01','D02','D03','D04','E01','E02','E03','E04','F01','F02','F03','F04','G01','G02','G03','G04','H01','H02','H03','H04'};
    char nomecidade[20] [24];
    int populacao [24];
    float area [24];
    double pib [24];
    int numeropontoturistico [24];


    printf("Entre com o nome da Cidade %s\n", codigocidade[0]);
    scanf("%s", nomecidade[0]);
    
    printf("Qual é a população da cidade %s?\n", nomecidade[0]);
    scanf(" %d", &populacao[0]);

    printf("Qual a área da cidade %s?\n", nomecidade[0]);
    scanf(" %f", &area[0]);
    
    printf("Qual é o PIB da cidade?\n", nomecidade[0]);
    scanf(" %lf", &pib[0]);

    printf("Quantos pontos turísticos tem na cidade %s?", nomecidade[0]);
    scanf("%d", &numeropontoturistico[0]);

    
    
    printf("Carta %s", codigocidade[0]);
    printf("População total da cidade %s", populacao[0]);
    printf("Área Total: %.2f Km\n", area[0]);
    printf("PIB total da cidade %lf", pib[0]);
    printf("Número de pontos turísticos: %d", numeropontoturistico[0]);
    


    return 0;
}
