#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Super Trunfo - Países\n");

    char Estado;
    char Codigo[10];   
    char CidadeA01[50], CidadeB01[50];
    int PopulacaoA01, PopulacaoB01;
    float AreaA01, AreaB01;
    float PIBA01,PIBB01;
    int PontosTuristicosA01, PontosturisticosB01;
    float PIBPercapitaA01, PIBPercapitaB01;
    float DensidadePopulacionalA01, DensidadePopulacionalB01;
    int pontosA = 0, pontosB = 0; // Contadores de pontos 

    printf("Cadastro de cartas\n");

    printf("Estado A \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", CidadeA01); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &PopulacaoA01);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &AreaA01);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIBA01);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicosA01);

    PIBPercapitaA01 = PIBA01 *1000 / PopulacaoA01;

    DensidadePopulacionalA01 = PopulacaoA01 / AreaA01;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", CidadeA01);
    printf("População: %d habitantes\n", PopulacaoA01);
    printf("Área: %.2f km²\n", AreaA01);
    printf("PIB: %.2f bilhões de Reais\n", PIBA01);
    printf("Pontos Turísticos: %d\n", PontosTuristicosA01);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapitaA01);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacionalA01);

    printf("Estado B \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", Codigo);

    getchar(); // Limpa o buffer antes de ler a string com espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", CidadeB01); // Corrigido para ler nomes com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &PopulacaoB01);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &AreaB01);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIBB01);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosturisticosB01);

    PIBPercapitaB01 = PIBB01 *1000 / PopulacaoB01;

    DensidadePopulacionalB01 = PopulacaoB01 / AreaB01;

    printf("\n----- Dados da Carta -----\n");
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", CidadeB01);
    printf("População: %d habitantes\n", PopulacaoB01);
    printf("Área: %.2f km²\n", AreaB01);
    printf("PIB: %.2f bilhões de Reais\n", PIBB01);
    printf("Pontos Turísticos: %d\n", PontosturisticosB01);
    printf("PIB per capita: R$ %.2f por habitante\n", PIBPercapitaB01);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacionalB01);

    // Comparação das cartas
    printf("\n----- Comparação -----\n");

    //População
    if (PopulacaoA01 > PopulacaoB01){
        printf("Maior População: %s\n", CidadeA01);
        pontosA++;
    }
    else if (PopulacaoA01 < PopulacaoB01){
        printf("Maior População: %s\n", CidadeB01);
        pontosB++;
    }
    else {
        printf("Ambas cidades tem a mesma População\n");
    }

    //Area
    if (AreaA01 > AreaB01){
        printf("Maior Área: %s\n", CidadeA01);
        pontosA++;
    }
    else if (AreaA01 < AreaB01){
        printf("Maior Área: %s\n", CidadeB01);
        pontosB++;
    }
    else {
        printf("Ambas cidades tem a mesma Área\n");
    }

    //PIB
    if (PIBA01 > PIBB01){
        printf("Maior PIB: %s\n", CidadeA01);
        pontosA++;
    }
    else if (PIBA01 < PIBB01){
        printf("Maior PIB: %s\n", CidadeB01);
        pontosB++;
    }
    else {
        printf("Ambas cidades tem o mesmo PIB\n");
    }

    //Pontos Turísticos
    if (PontosTuristicosA01 > PontosturisticosB01){
        printf("Mais Pontos Túristicos: %s\n", CidadeA01);
        pontosA++;
    }
    else if (PontosTuristicosA01 < PontosturisticosB01){
        printf("Mais Pontos Túristicos: %s\n", CidadeB01);
        pontosB++;
    }
    else {
        printf("Ambas cidades tem o mesmo numero de Pontos Turísticos\n");
    }

    //PIB per capita
    if (PIBPercapitaA01 > PIBPercapitaB01){
        printf("Mais PIB per capita: %s\n", CidadeA01);
        pontosA++;
    }
    else if (PIBPercapitaA01 < PIBPercapitaB01){
        printf("Mais PIB per capita: %s\n", CidadeB01);
        pontosB++;
    }
    else {
        printf("Ambas cidades tem o mesmo PIB per capita\n");
    }

    //Densidade Populacional
    if (DensidadePopulacionalA01 > DensidadePopulacionalB01){
        printf("Menor Densidade Populacional: %s\n", CidadeB01);
        pontosA++;
    }
    else if (DensidadePopulacionalA01 < DensidadePopulacionalB01){
        printf("Menor Densidade Populacional: %s\n", CidadeA01);
        pontosB++;
    }
    else {
        printf("Ambas cidades tem a mesma Densidade Populacional\n");
    }

    // Exibir a cidade vencedora
        printf("\n----- Resultado Final -----\n");
    if (pontosA > pontosB) {
        printf("A cidade vencedora é: %s com %d pontos!\n", CidadeA01, pontosA);
    } else if (pontosA < pontosB) {
        printf("A cidade vencedora é: %s com %d pontos!\n", CidadeB01, pontosB);
    } else {
        printf("Empate! Ambas as cidades tiveram %d pontos.\n", pontosA);
    }

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
