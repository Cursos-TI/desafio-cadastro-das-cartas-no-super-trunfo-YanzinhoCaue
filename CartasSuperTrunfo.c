#include <stdio.h>

int main() {
    char cardCode[3];
    int zipcode, population, age, touristAttractions, cityOneWins;
    char cityName[50];
    float area, gdp, populationDensity, gdpPerCapita, calculateMedia;

    char cardCodeDois[3];
    int zipcodeDois, populationDois, ageDois, touristAttractionsDois, cityTwoWins;
    char cityNameDois[50];
    float areaDois, gdpDois, populationDensityDois, gdpPerCapitaDois, calculateMediaDois;

    //Introdução ao jogo
    printf("================================\n");
    printf("=======JOGO SUPER TRUNFO========\n");
    printf("================================\n");

    //Cadastro das informações das cidades

    //Cadastrando o cep da cidade
    printf("Digite o codigo da carta:\n");
    scanf("%d", &cardCode);

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

    //Cadastrando o cep da cidade
    printf("Digite o codigo da carta:\n");
    scanf("%d", &cardCodeDois);

    printf("Digite o cep da cidade:\n");
    scanf("%d", &zipcodeDois);


    //Cadastrando o nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cityNameDois);

    //Cadastrando a idade da cidade
    printf("Digite a idade da cidade:\n");
    scanf("%d", &ageDois);

    //Cadastrando a area geografica da cidade
    printf("Digite a area geografica da cidade:\n");
    scanf("%f", &areaDois);

    //Cadastrando o número de pontos turisticos
    printf("Digite o número de Pontos Turisticos:\n");
    scanf("%d", &touristAttractionsDois);

    //Cadastrando o PIB da cidade
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &gdpDois);

    //Confirmação de Cadastro
    printf("=======CARTA REGISTRADA COM SUCESSO========\n");

    printf("CEP: %d\n" "CIDADE: %s\n" "IDADE: %d\n" "AREA: %f\n" "PONTOS TURISTICOS: %d\n" "PIB: %f\n", zipcodeDois, cityNameDois, ageDois, areaDois, touristAttractionsDois, gdpDois);

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

    //Calculando a Densidade Populacional
    printf("\n\n================================\n");
    printf("CALCULANDO DENSIDADE POPULACIONAL CIDADE DOIS\n");
    populationDensity = populationDois / areaDois;
    printf("DENSIDADE POPULACIONAL: %f\n", populationDensityDois);
    
    //Calculando PIB per Capita
    printf("\n\n================================\n");
    printf("CALCULANDO PIB PER CAPITA CIDADE DOIS\n");
    gdpPerCapita = gdpDois / populationDois;
    printf("PIB PER CAPITA: %f\n", gdpPerCapitaDois);

    //Comparação Nivel Mestre
    printf("\n\n================================\n");
    printf("COMPARANDO CARTAS\n");

    calculateMedia = zipcode + population + age + touristAttractions + area + gdp / 6;
    calculateMediaDois = zipcodeDois + populationDois + ageDois + touristAttractionsDois + areaDois + gdpDois / 6;

    printf("A media das metricas da cidade 1 é de: %.1f\n", calculateMedia);
    printf("A media das metricas da cidade 2 é de: %.1f\n", calculateMediaDois);

    cityOneWins = calculateMedia > calculateMediaDois;
    cityTwoWins = calculateMedia < calculateMediaDois;


    printf("A cidade 1 venceu! %f", cityOneWins);
    printf("A cidade 2 venceu! %f", cityTwoWins);
    //Desafio para Novato completado com sucesso.
    //Desafio para Aventureiro completado com sucesso.
    //Desafio para Mestre completado com sucesso.

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