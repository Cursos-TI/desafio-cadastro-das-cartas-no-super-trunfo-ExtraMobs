#include <stdio.h> 


typedef struct
{
    char estado; // A - H
    int cidade; // 01 - 04
    char codigo_carta[3]; // estado + cidade
} CartaId;

CartaId novoId(char estado, int cidade) {
    CartaId id;
    id.estado = estado;
    id.cidade = cidade;

    // snprintf formata uma 'string(charset)' com base em uma formatação.
    snprintf(id.codigo_carta, sizeof(id.codigo_carta), "%c%02d", estado, cidade);

    return id;
}

typedef struct
{
    CartaId id;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} CartaSuperTrunfo;


CartaSuperTrunfo novaCarta(char estado, int cidade, int populacao, float area, float pib, int pontos_turisticos){
    CartaSuperTrunfo carta;
    carta.id = novoId(estado, cidade);
    carta.populacao = populacao;
    carta.area = area;
    carta.pib = pib;
    carta.pontos_turisticos = pontos_turisticos;
    return carta;
}


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    CartaSuperTrunfo carta01 = {
        .id = {'A', 1},
        .populacao = 1000000,
        .area = 500.5,
        .pib = 20000.0,
        .pontos_turisticos = 10
    };

    return 0;
}
