#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    
    char codigocidade[32] [4] = {"A01","A02","A03","A04","B01","B02","B03","B04",
        "C01","C02","C03","C04","D01","D02","D03","D04",
        "E01","E02","E03","E04","F01","F02","F03","F04",
        "G01","G02","G03","G04","H01","H02","H03","H04"};
    char nomecidade[32] [20];
    int populacao [32], numeropontoturistico [32];
    float area[32], densidade[32], pibpercapita[32];
    double pib[32];
    char mostracodigos[350] = "1 = A01, 2 = A02, 3 = A03, 4 = A04,\n 5 = B05, 6 = B06, 7 = B07, 8 = B08,\n 9 = C09, 10 = C10, 11 = C11, 12 = C12,\n 13 = D13, 14 = D14, 15 = D15, 16 = D16,\n 17 = E17, 18 = E18, 19 = E19, 20 = E20,\n 21 = F21, 22 = F22, 23 = F23, 24 = F24,\n 25 = G25, 26 = G26, 27 = G27, 28 = G28,\n 29 = H29, 30 = H30, 31 = H31, 32 = H32\n";
    double soma1 = 0, soma2 = 0;
    int continua = 1;

    
    //Cadastro das infomações das cartas

    printf("\n");

    printf("BENVINDO AO\n");
    printf("JOGO SUPER TRUNFO\n\n");
    printf("É preciso cadastrar as 32 cartas para iniciar o jogo.\n\n");

    //Inicio do cadastro das cartas

    printf("Entre com o nome da Cidade %s\n", codigocidade[0]);
    scanf("%s", nomecidade[0]);
    printf("Qual é a população da cidade %s?\n", nomecidade[0]);
    scanf(" %d", &populacao[0]);
    printf("Qual a área da cidade %s?\n", nomecidade[0]);
    scanf(" %f", &area[0]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[0]);
    scanf(" %lf", &pib[0]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[0]);
    scanf("%d", &numeropontoturistico[0]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[0] =  populacao[0] / area[0];
    pibpercapita[0] = pib[0] / populacao[0];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[1]);
    scanf("%s", nomecidade[1]);
    printf("Qual é a população da cidade %s?\n", nomecidade[1]);
    scanf(" %d", &populacao[1]);
    printf("Qual a área da cidade %s?\n", nomecidade[1]);
    scanf(" %f", &area[1]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[1]);
    scanf(" %lf", &pib[1]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[1]);
    scanf("%d", &numeropontoturistico[1]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[1] =  populacao[1] / area[1];
    pibpercapita[1] = pib[1] / populacao[1];
    printf("\n");
    


    printf("Entre com o nome da Cidade %s\n", codigocidade[2]);
    scanf("%s", nomecidade[2]);
    printf("Qual é a população da cidade %s?\n", nomecidade[2]);
    scanf(" %d", &populacao[2]);
    printf("Qual a área da cidade %s?\n", nomecidade[2]);
    scanf(" %f", &area[2]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[2]);
    scanf(" %lf", &pib[2]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[2]);
    scanf("%d", &numeropontoturistico[2]);
   
    //cálculo de densidade populacional e pibpercapta
    densidade[2] =  populacao[2] / area[2];
    pibpercapita[2] = pib[2] / populacao[2];
    printf("\n");
    

    printf("Entre com o nome da Cidade %s\n", codigocidade[3]);
    scanf("%s", nomecidade[3]);
    printf("Qual é a população da cidade %s?\n", nomecidade[3]);
    scanf(" %d", &populacao[3]);
    printf("Qual a área da cidade %s?\n", nomecidade[3]);
    scanf(" %f", &area[3]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[3]);
    scanf(" %lf", &pib[3]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[3]);
    scanf("%d", &numeropontoturistico[3]);
   
   //cálculo de densidade populacional e pibpercapta
    densidade[3] =  populacao[3] / area[3];
    pibpercapita[3] = pib[3] / populacao[3];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[4]);
    scanf("%s", nomecidade[4]);
    printf("Qual é a população da cidade %s?\n", nomecidade[4]);
    scanf(" %d", &populacao[4]);
    printf("Qual a área da cidade %s?\n", nomecidade[4]);
    scanf(" %f", &area[4]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[4]);
    scanf(" %lf", &pib[4]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[4]);
    scanf("%d", &numeropontoturistico[4]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[4] =  populacao[4] / area[4];
    pibpercapita[4] = pib[4] / populacao[4];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[5]);
    scanf("%s", nomecidade[5]);
    printf("Qual é a população da cidade %s?\n", nomecidade[5]);
    scanf(" %d", &populacao[5]);
    printf("Qual a área da cidade %s?\n", nomecidade[5]);
    scanf(" %f", &area[5]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[5]);
    scanf(" %lf", &pib[5]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[5]);
    scanf("%d", &numeropontoturistico[5]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[5] =  populacao[5] / area[5];
    pibpercapita[5] = pib[5] / populacao[5];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[6]);
    scanf("%s", nomecidade[6]);
    printf("Qual é a população da cidade %s?\n", nomecidade[6]);
    scanf(" %d", &populacao[6]);
    printf("Qual a área da cidade %s?\n", nomecidade[6]);
    scanf(" %f", &area[6]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[6]);
    scanf(" %lf", &pib[6]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[6]);
    scanf("%d", &numeropontoturistico[6]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[6] =  populacao[6] / area[6];
    pibpercapita[6] = pib[6] / populacao[6];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[7]);
    scanf("%s", nomecidade[7]);
    printf("Qual é a população da cidade %s?\n", nomecidade[7]);
    scanf(" %d", &populacao[7]);
    printf("Qual a área da cidade %s?\n", nomecidade[7]);
    scanf(" %f", &area[7]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[7]);
    scanf(" %lf", &pib[7]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[7]);
    scanf("%d", &numeropontoturistico[7]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[7] =  populacao[7] / area[7];
    pibpercapita[7] = pib[7] / populacao[7];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[8]);
    scanf("%s", nomecidade[8]);
    printf("Qual é a população da cidade %s?\n", nomecidade[8]);
    scanf(" %d", &populacao[8]);
    printf("Qual a área da cidade %s?\n", nomecidade[8]);
    scanf(" %f", &area[8]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[8]);
    scanf(" %lf", &pib[8]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[8]);
    scanf("%d", &numeropontoturistico[8]);
   
   //cálculo de densidade populacional e pibpercapta
    densidade[8] =  populacao[8] / area[8];
    pibpercapita[8] = pib[8] / populacao[8];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[9]);
    scanf("%s", nomecidade[9]);
    printf("Qual é a população da cidade %s?\n", nomecidade[9]);
    scanf(" %d", &populacao[9]);
    printf("Qual a área da cidade %s?\n", nomecidade[9]);
    scanf(" %f", &area[9]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[9]);
    scanf(" %lf", &pib[9]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[9]);
    scanf("%d", &numeropontoturistico[9]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[9] =  populacao[9] / area[9];
    pibpercapita[9] = pib[9] / populacao[9];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[10]);
    scanf("%s", nomecidade[10]);
    printf("Qual é a população da cidade %s?\n", nomecidade[10]);
    scanf(" %d", &populacao[10]);
    printf("Qual a área da cidade %s?\n", nomecidade[10]);
    scanf(" %f", &area[10]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[10]);
    scanf(" %lf", &pib[10]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[10]);
    scanf("%d", &numeropontoturistico[10]);
   
   //cálculo de densidade populacional e pibpercapta
    densidade[10] =  populacao[10] / area[10];
    pibpercapita[10] = pib[10] / populacao[10];
    printf("\n");



    printf("Entre com o nome da Cidade %s\n", codigocidade[11]);
    scanf("%s", nomecidade[11]);
    printf("Qual é a população da cidade %s?\n", nomecidade[11]);
    scanf(" %d", &populacao[11]);
    printf("Qual a área da cidade %s?\n", nomecidade[11]);
    scanf(" %f", &area[11]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[11]);
    scanf(" %lf", &pib[11]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[11]);
    scanf("%d", &numeropontoturistico[11]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[11] =  populacao[11] / area[11];
    pibpercapita[11] = pib[11] / populacao[11];
    printf("\n");
    

    printf("Entre com o nome da Cidade %s\n", codigocidade[12]);
    scanf("%s", nomecidade[12]);
    printf("Qual é a população da cidade %s?\n", nomecidade[12]);
    scanf(" %d", &populacao[12]);
    printf("Qual a área da cidade %s?\n", nomecidade[12]);
    scanf(" %f", &area[12]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[12]);
    scanf(" %lf", &pib[12]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[12]);
    scanf("%d", &numeropontoturistico[12]);
   
   //cálculo de densidade populacional e pibpercapta
    densidade[12] =  populacao[12] / area[12];
    pibpercapita[12] = pib[12] / populacao[12];
    printf("\n");



    printf("Entre com o nome da Cidade %s\n", codigocidade[13]);
    scanf("%s", nomecidade[13]);
    printf("Qual é a população da cidade %s?\n", nomecidade[13]);
    scanf(" %d", &populacao[13]);
    printf("Qual a área da cidade %s?\n", nomecidade[13]);
    scanf(" %f", &area[13]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[13]);
    scanf(" %lf", &pib[13]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[13]);
    scanf("%d", &numeropontoturistico[13]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[13] =  populacao[13] / area[13];
    pibpercapita[13] = pib[13] / populacao[13];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[14]);
    scanf("%s", nomecidade[14]);
    printf("Qual é a população da cidade %s?\n", nomecidade[14]);
    scanf(" %d", &populacao[14]);
    printf("Qual a área da cidade %s?\n", nomecidade[14]);
    scanf(" %f", &area[14]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[14]);
    scanf(" %lf", &pib[14]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[14]);
    scanf("%d", &numeropontoturistico[14]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[14] =  populacao[14] / area[14];
    pibpercapita[14] = pib[14] / populacao[14];
    printf("\n");



    printf("Entre com o nome da Cidade %s\n", codigocidade[15]);
    scanf("%s", nomecidade[15]);
    printf("Qual é a população da cidade %s?\n", nomecidade[15]);
    scanf(" %d", &populacao[15]);
    printf("Qual a área da cidade %s?\n", nomecidade[15]);
    scanf(" %f", &area[15]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[15]);
    scanf(" %lf", &pib[15]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[15]);
    scanf("%d", &numeropontoturistico[15]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[15] =  populacao[15] / area[15];
    pibpercapita[15] = pib[15] / populacao[15];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[16]);
    scanf("%s", nomecidade[16]);
    printf("Qual é a população da cidade %s?\n", nomecidade[16]);
    scanf(" %d", &populacao[16]);
    printf("Qual a área da cidade %s?\n", nomecidade[16]);
    scanf(" %f", &area[16]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[16]);
    scanf(" %lf", &pib[16]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[16]);
    scanf("%d", &numeropontoturistico[16]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[16] =  populacao[16] / area[16];
    pibpercapita[16] = pib[16] / populacao[16];
    printf("\n");



    printf("Entre com o nome da Cidade %s\n", codigocidade[17]);
    scanf("%s", nomecidade[17]);
    printf("Qual é a população da cidade %s?\n", nomecidade[17]);
    scanf(" %d", &populacao[17]);
    printf("Qual a área da cidade %s?\n", nomecidade[17]);
    scanf(" %f", &area[17]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[17]);
    scanf(" %lf", &pib[17]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[17]);
    scanf("%d", &numeropontoturistico[17]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[17] =  populacao[17] / area[17];
    pibpercapita[17] = pib[17] / populacao[17];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[18]);
    scanf("%s", nomecidade[18]);
    printf("Qual é a população da cidade %s?\n", nomecidade[18]);
    scanf(" %d", &populacao[18]);
    printf("Qual a área da cidade %s?\n", nomecidade[18]);
    scanf(" %f", &area[18]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[18]);
    scanf(" %lf", &pib[18]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[18]);
    scanf("%d", &numeropontoturistico[18]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[18] =  populacao[18] / area[18];
    pibpercapita[18] = pib[18] / populacao[18];
    printf("\n");



    printf("Entre com o nome da Cidade %s\n", codigocidade[19]);
    scanf("%s", nomecidade[19]);
    printf("Qual é a população da cidade %s?\n", nomecidade[19]);
    scanf(" %d", &populacao[19]);
    printf("Qual a área da cidade %s?\n", nomecidade[19]);
    scanf(" %f", &area[19]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[19]);
    scanf(" %lf", &pib[19]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[19]);
    scanf("%d", &numeropontoturistico[19]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[19] =  populacao[19] / area[19];
    pibpercapita[19] = pib[19] / populacao[19];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[20]);
    scanf("%s", nomecidade[20]);
    printf("Qual é a população da cidade %s?\n", nomecidade[20]);
    scanf(" %d", &populacao[20]);
    printf("Qual a área da cidade %s?\n", nomecidade[20]);
    scanf(" %f", &area[20]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[20]);
    scanf(" %lf", &pib[20]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[20]);
    scanf("%d", &numeropontoturistico[20]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[20] =  populacao[20] / area[20];
    pibpercapita[20] = pib[20] / populacao[20];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[21]);
    scanf("%s", nomecidade[21]);
    printf("Qual é a população da cidade %s?\n", nomecidade[21]);
    scanf(" %d", &populacao[21]);
    printf("Qual a área da cidade %s?\n", nomecidade[21]);
    scanf(" %f", &area[21]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[21]);
    scanf(" %lf", &pib[21]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[21]);
    scanf("%d", &numeropontoturistico[21]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[21] =  populacao[21] / area[21];
    pibpercapita[21] = pib[21] / populacao[21];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[22]);
    scanf("%s", nomecidade[22]);
    printf("Qual é a população da cidade %s?\n", nomecidade[22]);
    scanf(" %d", &populacao[22]);
    printf("Qual a área da cidade %s?\n", nomecidade[22]);
    scanf(" %f", &area[22]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[22]);
    scanf(" %lf", &pib[22]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[22]);
    scanf("%d", &numeropontoturistico[22]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[22] =  populacao[22] / area[22];
    pibpercapita[22] = pib[22] / populacao[22];
    printf("\n");



    printf("Entre com o nome da Cidade %s\n", codigocidade[23]);
    scanf("%s", nomecidade[23]);
    printf("Qual é a população da cidade %s?\n", nomecidade[23]);
    scanf(" %d", &populacao[23]);
    printf("Qual a área da cidade %s?\n", nomecidade[23]);
    scanf(" %f", &area[23]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[23]);
    scanf(" %lf", &pib[23]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[23]);
    scanf("%d", &numeropontoturistico[23]);
   
    //cálculo de densidade populacional e pibpercapta
    densidade[23] =  populacao[23] / area[23];
    pibpercapita[23] = pib[23] / populacao[23];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[24]);
    scanf("%s", nomecidade[24]);
    printf("Qual é a população da cidade %s?\n", nomecidade[24]);
    scanf(" %d", &populacao[24]);
    printf("Qual a área da cidade %s?\n", nomecidade[24]);
    scanf(" %f", &area[24]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[24]);
    scanf(" %lf", &pib[24]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[24]);
    scanf("%d", &numeropontoturistico[24]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[24] =  populacao[24] / area[24];
    pibpercapita[24] = pib[24] / populacao[24];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[25]);
    scanf("%s", nomecidade[25]);
    printf("Qual é a população da cidade %s?\n", nomecidade[25]);
    scanf(" %d", &populacao[25]);
    printf("Qual a área da cidade %s?\n", nomecidade[25]);
    scanf(" %f", &area[25]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[25]);
    scanf(" %lf", &pib[25]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[25]);
    scanf("%d", &numeropontoturistico[25]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[25] =  populacao[25] / area[25];
    pibpercapita[25] = pib[25] / populacao[25];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[26]);
    scanf("%s", nomecidade[26]);
    printf("Qual é a população da cidade %s?\n", nomecidade[26]);
    scanf(" %d", &populacao[26]);
    printf("Qual a área da cidade %s?\n", nomecidade[26]);
    scanf(" %f", &area[26]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[26]);
    scanf(" %lf", &pib[26]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[26]);
    scanf("%d", &numeropontoturistico[26]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[26] =  populacao[26] / area[26];
    pibpercapita[26] = pib[26] / populacao[26];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[27]);
    scanf("%s", nomecidade[27]);
    printf("Qual é a população da cidade %s?\n", nomecidade[27]);
    scanf(" %d", &populacao[27]);
    printf("Qual a área da cidade %s?\n", nomecidade[27]);
    scanf(" %f", &area[27]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[27]);
    scanf(" %lf", &pib[27]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[27]);
    scanf("%d", &numeropontoturistico[27]);
   
    //cálculo de densidade populacional e pibpercapta
    densidade[27] =  populacao[27] / area[27];
    pibpercapita[27] = pib[27] / populacao[27];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[28]);
    scanf("%s", nomecidade[28]);
    printf("Qual é a população da cidade %s?\n", nomecidade[28]);
    scanf(" %d", &populacao[28]);
    printf("Qual a área da cidade %s?\n", nomecidade[28]);
    scanf(" %f", &area[28]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[28]);
    scanf(" %lf", &pib[28]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[28]);
    scanf("%d", &numeropontoturistico[28]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[28] =  populacao[28] / area[28];
    pibpercapita[28] = pib[28] / populacao[28];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[29]);
    scanf("%s", nomecidade[29]);
    printf("Qual é a população da cidade %s?\n", nomecidade[29]);
    scanf(" %d", &populacao[29]);
    printf("Qual a área da cidade %s?\n", nomecidade[29]);
    scanf(" %f", &area[29]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[29]);
    scanf(" %lf", &pib[29]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[29]);
    scanf("%d", &numeropontoturistico[29]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[29] =  populacao[29] / area[29];
    pibpercapita[29] = pib[29] / populacao[29];
    printf("\n");


    printf("Entre com o nome da Cidade %s\n", codigocidade[30]);
    scanf("%s", nomecidade[30]);
    printf("Qual é a população da cidade %s?\n", nomecidade[30]);
    scanf(" %d", &populacao[30]);
    printf("Qual a área da cidade %s?\n", nomecidade[30]);
    scanf(" %f", &area[30]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[30]);
    scanf(" %lf", &pib[30]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[30]);
    scanf("%d", &numeropontoturistico[30]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[30] =  populacao[30] / area[30];
    pibpercapita[30] = pib[30] / populacao[30];
    printf("\n");

    
    printf("Entre com o nome da Cidade %s\n", codigocidade[31]);
    scanf("%s", nomecidade[31]);
    printf("Qual é a população da cidade %s?\n", nomecidade[31]);
    scanf(" %d", &populacao[31]);
    printf("Qual a área da cidade %s?\n", nomecidade[31]);
    scanf(" %f", &area[31]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[31]);
    scanf(" %lf", &pib[31]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[31]);
    scanf("%d", &numeropontoturistico[31]);
    
    //cálculo de densidade populacional e pibpercapta
    densidade[31] =  populacao[31] / area[31];
    pibpercapita[31] = pib[31] / populacao[31];
    printf("\n");

    //Inicio da Imprenssão das Cartas

    printf("Códigos das Cartas (%s)\n", mostracodigos);//Mostra código das cartas
    printf("\n");


    printf("Carta %s\n", codigocidade[0]);
    printf("Cidade: %s\n", nomecidade[0]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[0]);
    printf("Área Total: %.2f km²\n", area[0]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[0], pib[0]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[0]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[0], densidade[0]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[0], pibpercapita[0]);
    
    printf("Carta %s\n", codigocidade[1]);
    printf("Cidade: %s\n", nomecidade[1]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[1]);
    printf("Área Total: %.2f km²\n", area[1]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[1], pib[1]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[1]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[1], densidade[1]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[1], pibpercapita[1]);
    
    printf("Carta %s\n", codigocidade[2]);
    printf("Cidade: %s\n", nomecidade[2]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[2]);
    printf("Área Total: %.2f km²\n", area[2]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[2], pib[2]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[2]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[2], densidade[2]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[2], pibpercapita[2]);

    printf("Carta %s\n", codigocidade[3]);
    printf("Cidade: %s\n", nomecidade[3]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[3]);
    printf("Área Total: %.2f km²\n", area[3]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[3], pib[3]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[3]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[3], densidade[3]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[3], pibpercapita[3]);

    printf("Carta %s\n", codigocidade[4]);
    printf("Cidade: %s\n", nomecidade[4]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[4]);
    printf("Área Total: %.2f km²\n", area[4]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[4], pib[4]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[4]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[4], densidade[4]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[4], pibpercapita[4]);

    printf("Carta %s\n", codigocidade[5]);
    printf("Cidade: %s\n", nomecidade[5]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[5]);
    printf("Área Total: %.2f km²\n", area[5]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[5], pib[5]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[5]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[5], densidade[5]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[5], pibpercapita[5]);

    printf("Carta %s\n", codigocidade[6]);
    printf("Cidade: %s\n", nomecidade[6]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[6]);
    printf("Área Total: %.2f km²\n", area[6]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[6], pib[6]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[6]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[6], densidade[6]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[6], pibpercapita[6]);

    printf("Carta %s\n", codigocidade[7]);
    printf("Cidade: %s\n", nomecidade[7]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[7]);
    printf("Área Total: %.2f km²\n", area[7]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[7], pib[7]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[7]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[7], densidade[7]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[7], pibpercapita[7]);

    printf("Carta %s\n", codigocidade[8]);
    printf("Cidade: %s\n", nomecidade[8]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[8]);
    printf("Área Total: %.2f km²\n", area[8]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[8], pib[8]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[8]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[8], densidade[8]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[8], pibpercapita[8]);

    printf("Carta %s\n", codigocidade[9]);
    printf("Cidade: %s\n", nomecidade[9]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[9]);
    printf("Área Total: %.2f km²\n", area[9]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[9], pib[9]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[9]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[9], densidade[9]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[9], pibpercapita[9]);

    printf("Carta %s\n", codigocidade[10]);
    printf("Cidade: %s\n", nomecidade[10]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[10]);
    printf("Área Total: %.2f km²\n", area[10]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[10], pib[10]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[10]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[10], densidade[10]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[10], pibpercapita[10]);

    printf("Carta %s\n", codigocidade[11]);
    printf("Cidade: %s\n", nomecidade[11]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[11]);
    printf("Área Total: %.2f km²\n", area[11]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[11], pib[11]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[11]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[11], densidade[11]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[11], pibpercapita[11]);

    printf("Carta %s\n", codigocidade[12]);
    printf("Cidade: %s\n", nomecidade[12]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[12]);
    printf("Área Total: %.2f km²\n", area[12]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[12], pib[12]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[12]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[12], densidade[12]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[12], pibpercapita[12]);

    printf("Carta %s\n", codigocidade[13]);
    printf("Cidade: %s\n", nomecidade[13]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[13]);
    printf("Área Total: %.2f km²\n", area[13]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[13], pib[13]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[13]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[13], densidade[13]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[13], pibpercapita[13]);

    printf("Carta %s\n", codigocidade[14]);
    printf("Cidade: %s\n", nomecidade[14]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[14]);
    printf("Área Total: %.2f km²\n", area[14]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[14], pib[14]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[14]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[14], densidade[14]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[14], pibpercapita[14]);

    printf("Carta %s\n", codigocidade[15]);
    printf("Cidade: %s\n", nomecidade[15]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[15]);
    printf("Área Total: %.2f km²\n", area[15]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[15], pib[15]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[15]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[15], densidade[15]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[15], pibpercapita[15]);

    printf("Carta %s\n", codigocidade[16]);
    printf("Cidade: %s\n", nomecidade[16]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[16]);
    printf("Área Total: %.2f km²\n", area[16]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[16], pib[16]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[16]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[16], densidade[16]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[16], pibpercapita[16]);

    printf("Carta %s\n", codigocidade[17]);
    printf("Cidade: %s\n", nomecidade[17]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[17]);
    printf("Área Total: %.2f km²\n", area[17]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[17], pib[17]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[17]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[17], densidade[17]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[17], pibpercapita[17]);

    printf("Carta %s\n", codigocidade[18]);
    printf("Cidade: %s\n", nomecidade[18]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[18]);
    printf("Área Total: %.2f km²\n", area[18]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[18], pib[18]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[18]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[18], densidade[18]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[18], pibpercapita[18]);

    printf("Carta %s\n", codigocidade[19]);
    printf("Cidade: %s\n", nomecidade[19]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[19]);
    printf("Área Total: %.2f km²\n", area[19]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[19], pib[19]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[19]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[19], densidade[19]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[19], pibpercapita[19]);

    printf("Carta %s\n", codigocidade[20]);
    printf("Cidade: %s\n", nomecidade[20]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[20]);
    printf("Área Total: %.2f km²\n", area[20]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[20], pib[20]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[20]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[20], densidade[20]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[20], pibpercapita[20]);

    printf("Carta %s\n", codigocidade[21]);
    printf("Cidade: %s\n", nomecidade[21]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[21]);
    printf("Área Total: %.2f km²\n", area[21]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[21], pib[21]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[21]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[21], densidade[21]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[21], pibpercapita[21]);

    printf("Carta %s\n", codigocidade[22]);
    printf("Cidade: %s\n", nomecidade[22]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[22]);
    printf("Área Total: %.2f km²\n", area[22]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[22], pib[22]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[22]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[22], densidade[22]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[22], pibpercapita[22]);

    printf("Carta %s\n", codigocidade[23]);
    printf("Cidade: %s\n", nomecidade[23]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[23]);
    printf("Área Total: %.2f km²\n", area[23]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[23], pib[23]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[23]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[23], densidade[23]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[23], pibpercapita[23]);

    printf("Carta %s\n", codigocidade[24]);
    printf("Cidade: %s\n", nomecidade[24]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[24]);
    printf("Área Total: %.2f km²\n", area[24]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[24], pib[24]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[24]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[24], densidade[24]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[24], pibpercapita[24]);

    printf("Carta %s\n", codigocidade[25]);
    printf("Cidade: %s\n", nomecidade[25]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[25]);
    printf("Área Total: %.2f km²\n", area[25]);
    printf("PIB total da cidade de %s é: %.2lf milhoes de dolares\n", nomecidade[25], pib[25]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[25]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[25], densidade[25]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[25], pibpercapita[25]);

    printf("Carta %s\n", codigocidade[26]);
    printf("Cidade: %s\n", nomecidade[26]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[26]);
    printf("Área Total: %.2f km²\n", area[26]);
    printf("PIB total da cidade de %s é: %.2lf milhoes de dolares\n", nomecidade[26], pib[26]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[26]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[26], densidade[26]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[26], pibpercapita[26]);

    printf("Carta %s\n", codigocidade[27]);
    printf("Cidade: %s\n", nomecidade[27]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[27]);
    printf("Área Total: %.2f km²\n", area[27]);
    printf("PIB total da cidade de %s é: %.2lf milhoes de dolares\n", nomecidade[27], pib[27]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[27]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[27], densidade[27]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[27], pibpercapita[27]);

    printf("Carta %s\n", codigocidade[28]);
    printf("Cidade: %s\n", nomecidade[28]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[28]);
    printf("Área Total: %.2f km²\n", area[28]);
    printf("PIB total da cidade de %s é: %.2lf milhoes de dolares\n", nomecidade[28], pib[28]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[28]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[28], densidade[28]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[28], pibpercapita[28]);

    printf("Carta %s\n", codigocidade[29]);
    printf("Cidade: %s\n", nomecidade[29]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[29]);
    printf("Área Total: %.2f km²\n", area[29]);
    printf("PIB total da cidade de %s é: %.2lf milhoes de dolares\n", nomecidade[29], pib[29]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[29]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[29], densidade[29]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[29], pibpercapita[29]);

    printf("Carta %s\n", codigocidade[30]);
    printf("Cidade: %s\n", nomecidade[30]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[30]);
    printf("Área Total: %.2f km²\n", area[30]);
    printf("PIB total da cidade de %s é: %.2lf milhoes de dolares\n", nomecidade[30], pib[30]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[30]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[30], densidade[30]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[30], pibpercapita[30]);

    printf("Carta %s\n", codigocidade[31]);
    printf("Cidade: %s\n", nomecidade[31]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[31]);
    printf("Área Total: %.2f km²\n", area[31]);
    printf("PIB total da cidade de %s é: R$%.2lf bilhões de reais\n", nomecidade[31], pib[31]);
    printf("Número de pontos turísticos: %d\n\n", numeropontoturistico[31]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[31], densidade[31]);
    printf("Pib per capita de %s é: R$%.2f mil reais \n\n", nomecidade[31], pibpercapita[31]);


    do 
    {
        printf("*** Menu Cartas ***\n\n");
        printf("Códigos das Cartas (%s)\n", mostracodigos);//Mostra código das cartas
        printf("\n");



        int cartaJogador = 0;
        int cartaComputador = 0;
        int propriedade = 0;

        //Esolha do jogador
        do
        {
            printf("Escolha uma carta de 1 a 3: ");
            scanf(" %d", &cartaJogador);
            printf("\n");

            if (cartaJogador < 1 || cartaJogador > 3) {
            printf("Carta Inválida! Escolha um número entre 1 e 3.\n");
            
            }
        } while (cartaJogador < 1 || cartaJogador > 3);
        
    
        //Escolha da carta pelo computador
        srand (time (0));
        cartaComputador = rand () % 3 + 1;

        //cálculo de pontos
        soma1 = populacao[cartaJogador - 1] +
                area[cartaJogador -1] + pib[cartaJogador - 1] + numeropontoturistico[cartaJogador -1];
        soma2 = populacao[cartaComputador - 1] + 
                area[cartaComputador -1] + pib[cartaComputador - 1] + numeropontoturistico[cartaComputador -1];

            //Escolha das propriedades
            printf("\n");
            printf("***Menu Propriedades***\n\n");
            
            printf("1 - População \n");
            printf("2 - Área \n");
            printf("3 - PIB \n");
            printf("4 - Numero de pontos turísticos \n");
            printf("5 - Densidade Populacional \n");
            printf("6 -PIB per Capita \n\n");
           
           
            do
            {
                printf("Escolha uma propriedade da carta escolhida:\n");
                scanf(" %d", &propriedade);

                if (propriedade < 1 || propriedade > 6) {
                printf("Carta Inválida! Escolha um número entre 1 e 3.\n");
                }
            } while (propriedade < 1 || propriedade > 6);
            


         //Mostra carta do jogador
            
            printf("\n");
            printf("Sua Carta é %d = %s \n\n", cartaJogador, codigocidade[cartaJogador -1]);
            printf("Cidade: %s\n", nomecidade[cartaJogador -1]);
            printf("População total da cidade: %d milhões de pessoas\n", populacao[cartaJogador -1]);
            printf("Área Total: %.2f Km\n", area[cartaJogador -1]);
            printf("PIB total da cidade de %s é: %.2lf milhões de dolares\n", nomecidade[cartaJogador -1], pib[cartaJogador -1]);
            printf("Número de pontos turísticos: %d\n", numeropontoturistico[cartaJogador -1]);
            printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[cartaJogador -1], densidade[cartaJogador -1]);
            printf("Pib per capita de %s é: %.2f USD \n", nomecidade[cartaJogador -1], pibpercapita[cartaJogador -1]);
            printf("SUPER TRUNFO: Total de pontos %.2lf\n\n", soma1);  
                      
            

            //Mostra carta do Computador
            
            printf("\n");
            printf("A Carta do Computador é: %s \n\n", codigocidade[cartaComputador -1]);
            printf("Cidade: %s\n", nomecidade[cartaComputador -1]);
            printf("População total da cidade: %d milhões de pessoas\n", populacao[cartaComputador -1]);
            printf("Área Total: %.2f Km\n", area[cartaComputador -1]);
            printf("PIB total da cidade de %s é: %.2lf milhões de dolares\n", nomecidade[cartaComputador -1], pib[cartaComputador -1]);
            printf("Número de pontos turísticos: %d\n", numeropontoturistico[cartaComputador -1]);
            printf("Densidade Populacional de %s: %.2f hab./km²\n", nomecidade[cartaComputador -1], densidade[cartaComputador -1]);
            printf("Pib per capita de %s é: %.2f USD \n", nomecidade[cartaComputador -1], pibpercapita[cartaComputador -1]);
            printf("SUPER TRUNFO: Total de pontos %.2lf\n\n", soma2);
            
            //Comparação das escolhas
        
            switch (propriedade)
            {
                case 1:
                    if (populacao[cartaJogador - 1] > populacao[cartaComputador - 1]){//compara pela população
                        printf("O Jogador VENCEU com a carta %s %s \n\n", codigocidade[cartaJogador - 1], nomecidade[cartaJogador - 1]);         
                    } else if (populacao[cartaJogador - 1] < populacao[cartaComputador - 1]){
                        printf("O Computador VENCEU com a carta %s %s \n\n", codigocidade[cartaComputador -1], nomecidade[cartaComputador - 1]);
                    }else {
                        printf("Empate!\n\n");
                    }
                    break;

                case 2:
                    if (area[cartaJogador - 1] > area[cartaComputador -  1]){ //compara pela área
                        printf("O Jogador VENCEU com a carta %s %s \n\n", codigocidade[cartaJogador - 1], nomecidade[cartaJogador - 1]);
                    }else if (area[cartaJogador - 1] < area[cartaComputador -  1]){ 
                        printf("O Computador VENCEU com a carta %s %s \n\n", codigocidade[cartaComputador -1], nomecidade[cartaComputador - 1]);
                    }else {
                        printf("Empate!\n\n");
                    }
                    break;           
                case 3:
                    if (pib[cartaJogador - 1] > pib[cartaComputador -1]){ //compara pelo pib
                        printf("O Jogador VENCEU com a carta %s %s \n\n", codigocidade[cartaJogador - 1], nomecidade[cartaJogador - 1]);
                    }else if (pib[cartaJogador - 1] < pib[cartaComputador -1]){
                        printf("O Computador VENCEU com a carta %s %s \n\n", codigocidade[cartaComputador -1], nomecidade[cartaComputador - 1]);
                    }else {
                        printf("Empate!\n\n");
                    }
                    break;
                case 4:
                    if (numeropontoturistico[cartaJogador - 1] > numeropontoturistico[cartaComputador - 1]){ //compara ponto turístico
                        printf("O Jogador VENCEU com a carta %s %s \n\n", codigocidade[cartaJogador - 1], nomecidade[cartaJogador - 1]);
                    }else if (numeropontoturistico[cartaJogador - 1] < numeropontoturistico[cartaComputador - 1]){
                        printf("O Computador VENCEU com a carta %s %s \n\n", codigocidade[cartaComputador -1], nomecidade[cartaComputador - 1]);
                    }else   {
                        printf("Empate!\n\n");
                    }
                    break;   
                case 5:
                    if (densidade[cartaJogador -1] < densidade[cartaComputador - 1]){ //compara densidade "menor vence"
                        printf("O Jogador VENCEU com a carta %s %s \n\n", codigocidade[cartaJogador - 1], nomecidade[cartaJogador - 1]);
                    }else if ((densidade[cartaJogador -1] > densidade[cartaComputador - 1])){
                        printf("O Computador VENCEU com a carta %s %s \n\n", codigocidade[cartaComputador -1], nomecidade[cartaComputador - 1]);
                    }else {
                        printf("Empate!\n\n");
                    }
                    break;
                case 6:
                    if (pibpercapita[cartaJogador - 1] > pibpercapita[cartaComputador - 1]){ //compara PIB percapita
                        printf("O Jogador VENCEU com a carta %s %s \n\n", codigocidade[cartaJogador - 1], nomecidade[cartaJogador - 1]);
                    }else if (pibpercapita[cartaJogador - 1] > pibpercapita[cartaComputador - 1]){
                        printf("O Computador VENCEU com a carta %s %s \n\n", codigocidade[cartaComputador -1], nomecidade[cartaComputador - 1]);
                    }else {
                        printf("Empate!\n\n");
                    break;
                default:
                    printf("Opção inválida! Escolha um número entre 1 e 6.\n");
                    break;
                    }
            }
    //Comparação das outras propriedades
    printf("***Comparação das Propriedades***\n");

    // População
        if (populacao[cartaJogador - 1] > populacao[cartaComputador - 1]) {
            printf("Se a escolha fosse (1 - População), Jogador Venceria\n");
        } else if (populacao[cartaJogador - 1] < populacao[cartaComputador - 1]) {
            printf("Se a escolha fosse (1 - População), Computador Venceria\n");
        } else {
            printf("Se a escolha fosse (1 - População), Empate!\n");
        }

        // Área
        if (area[cartaJogador - 1] > area[cartaComputador - 1]) {
            printf("Se a escolha fosse (2 - Área), Jogador Venceria\n");
        } else if (area[cartaJogador - 1] < area[cartaComputador - 1]) {
            printf("Se a escolha fosse (2 - Área), Computador Venceria\n");
        } else {
            printf("Se a escolha fosse (2 - Área), Empate!\n");
        }

        // PIB
        if (pib[cartaJogador - 1] > pib[cartaComputador - 1]) {
            printf("Se a escolha fosse (3 - PIB), Jogador Venceria\n");
        } else if (pib[cartaJogador - 1] < pib[cartaComputador - 1]) {
            printf("Se a escolha fosse (3 - PIB), Computador Venceria\n");
        } else {
            printf("Se a escolha fosse (3 - PIB), Empate!\n");
        }

        // Pontos Turísticos
        if (numeropontoturistico[cartaJogador - 1] > numeropontoturistico[cartaComputador - 1]) {
            printf("Se a escolha fosse (4 - Pontos Turísticos), Jogador Venceria\n");
        } else if (numeropontoturistico[cartaJogador - 1] < numeropontoturistico[cartaComputador - 1]) {
            printf("Se a escolha fosse (4 - Pontos Turísticos), Computador Venceria\n");
        } else {
            printf("Se a escolha fosse (4 - Pontos Turísticos), Empate!\n");
        }

        // Densidade Populacional
        if (densidade[cartaJogador - 1] < densidade[cartaComputador - 1]) {
            printf("Se a escolha fosse (5 - Densidade Populacional), Jogador Venceria\n");
        } else if (densidade[cartaJogador - 1] > densidade[cartaComputador - 1]) {
            printf("Se a escolha fosse (5 - Densidade Populacional), Computador Venceria\n");
        } else {
            printf("Se a escolha fosse (5 - Densidade Populacional), Empate!\n");
        }

        // PIB per Capita
        if (pibpercapita[cartaJogador - 1] > pibpercapita[cartaComputador - 1]) {
            printf("Se a escolha fosse (6 - PIB per Capita), Jogador Venceria\n");
        } else if (pibpercapita[cartaJogador - 1] < pibpercapita[cartaComputador - 1]) {
            printf("Se a escolha fosse (6 - PIB per Capita), Computador Venceria\n");
        } else {
            printf("Se a escolha fosse (6 - PIB per Capita), Empate!\n");
        }

        // Comparação do SUPER TRUNFO (soma total de pontos)
        if (soma1 > soma2) {
            printf("Jogador Venceu a rodada com o ***SUPERTRUNFO*** total de pontos %.2lf\n\n", soma1);
        } else if (soma1 < soma2) {
            printf("Computador Venceu a rodada com o ***SUPERTRUNFO*** total de pontos %.2lf\n\n", soma2);
        } else {
            printf("Empate no ***SUPERTRUNFO***!\n\n");
        }

        do
        {
            printf("Deseja continuar a jogar? (1 = Sim ou 2 = Não): ");
            scanf(" %d", &continua);

            if (continua != 1 && continua !=2){
                printf("Valor inválido! Digite 1 para continuar ou 2 para sair.\n");
            }

        } while (continua != 1 && continua !=2);
   
           
    } while (continua == 1 );
    
    printf("\n");
    printf("Fim de Jogo\n\n");


    return 0;
}