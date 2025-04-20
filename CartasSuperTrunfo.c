#include <stdio.h> 

// Eu tentei pensar em um jeito de não usar typedef,
// porém esse foi o melhor jeito de representar a
// estrutura exigida pelo enunciado, afinal a 
// linguagem C não possui conceito de herança.

// typedef struct
// {
//     char estado; // A - H
//     int cidade; // 01 - 04
//     char codigo_carta[3]; // estado + cidade
// } CartaId;

// Pelo o que pesquisei, esse é o jeito
// mais utilizado pela comunidade para representar
// um typedef, com o nome ao final da declaração.

// o typedef é o comando que ajuda muito a reduzir
// código escrito, podendo "construir" a estrutura,
// parecido com as linguagens de mais alto nível.

// typedef struct
// {
//     CartaId id;
//     int populacao;
//     float area;
//     float pib;
//     int pontos_turisticos;
// } CartasSuperTrunfo;


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turisticos.
    int populacao1;
    float area1;
    float pib1;
    int pts_turisticos1;

    int populacao2;
    float area2;
    float pib2;
    int pts_turisticos2;


    printf("Carta 1 - (int) Populacao: ");
    scanf("%d", &populacao1);
    printf("Carta 1 - (float) Area (km^2): ");
    scanf("%f", &area1);
    printf("Carta 1 - (float) PIB: ");
    scanf("%f", &pib1);
    printf("Carta 1 - (int) Pontos Turisticos: ");
    scanf("%d", &pts_turisticos1);

    printf("\nCarta 2 - (int) Populacao: ");
    scanf("%d", &populacao2);
    printf("Carta 2 - (float) Area (km^2): ");
    scanf("%f", &area2);
    printf("Carta 2 - (float) PIB: ");
    scanf("%f", &pib2);
    printf("Carta 2 - (int) Pontos Turisticos: ");
    scanf("%d", &pts_turisticos2);

    printf(
        "Cidade 1:\n\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\n Pontos Turisticos: %d",
        populacao1, area1, pib1, pts_turisticos1
    );
    printf(
        "\n\nCidade 2:\n\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\n Pontos Turisticos: %d",
        populacao2, area2, pib2, pts_turisticos2
    );

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
