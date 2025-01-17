#include <stdio.h>

int main() {
    int zipcode, population, age, touristAttractions;
    char cityName[50];
    float area, gdp, populationDensity, gdpPerCapita;

    //Introdução ao jogo
    printf("================================\n");
    printf("=======JOGO SUPER TRUNFO========\n");
    printf("================================\n");

    //Cadastro das informações das cidades

    //Cadastrando o cep da cidade
    printf("Digite o cep da cidade:\n");
    scanf("%d", &zipcode);


    //Cadastrando o nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cityName);

    //Cadastrando a idade da cidade
    printf("Digite a idade da cidade:\n");
    scanf("%d", &age);

    //Cadastrando a area geografica da cidade
    printf("Digite a area geografica da cidade:\n");
    scanf("%f", &area);

    //Cadastrando o número de pontos turisticos
    printf("Digite o número de Pontos Turisticos:\n");
    scanf("%d", &touristAttractions);

    //Cadastrando o PIB da cidade
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &gdp);

    //Confirmação de Cadastro
    printf("=======CARTA REGISTRADA COM SUCESSO========\n");
    printf("CEP: %d\n" "CIDADE: %s\n" "IDADE: %d\n" "AREA: %f\n" "PONTOS TURISTICOS: %d\n" "PIB: %f\n", zipcode, cityName, age, area, touristAttractions, gdp);

    //Calculo Nivel Aventureiro
    //Calculando a Densidade Populacional
    printf("\n\n================================\n");
    printf("CALCULANDO DENSIDADE POPULACIONAL\n");
    populationDensity = population / area;
    printf("DENSIDADE POPULACIONAL: %f\n", populationDensity);
    
    //Calculando PIB per Capita
    printf("\n\n================================\n");
    printf("CALCULANDO PIB PER CAPITA\n");
    gdpPerCapita = gdp / population;
    printf("PIB PER CAPITA: %f\n", gdpPerCapita);

    //Desafio para Novato completado com sucesso.
    //Desafio para Aventureiro completado com sucesso.

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.