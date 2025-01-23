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
    
    char codigocidade[4] = "A01";
    char nomecidade[20];
    int populacao;
    double area;
    double pib;
    int numeropontoturistico;

    printf("Entre com o nome da Cidade 1\n");
    scanf(" %s", &nomecidade);
    printf("Nome da Cidade: %s - Codigo: %s\n", nomecidade, codigocidade);
    
    printf("Qual é a população?\n");
    scanf(" %d", &populacao);
    printf("População: %d Habitantes\n", populacao);
    
    printf("Qual a área da cidade?\n");
    scanf(" %.2f", &area);
    printf("Área Total: %.2f Km\n", area);
    
    printf("Qual é o PIB da cidade?\n");
    scanf(" %.2f", &pib);
    printf("PIB Total: %.2f\n", pib);


    return 0;
}
