#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Super Trunfo - Países\n");

    char Estado;
    char Codigo[10];   
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    float PIBPercapita, DensidadePopulacional;

    printf("Cadastro de cartas\n");

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Cidade); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos);

    PIBPercapita = PIB *1000 / Populacao;

    DensidadePopulacional = Populacao / Area;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapita);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);

    


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
