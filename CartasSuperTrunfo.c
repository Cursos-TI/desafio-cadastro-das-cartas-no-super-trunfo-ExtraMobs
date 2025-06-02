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


int main() {
    CartaSuperTrunfo carta01 = novaCarta(
        'A', 1, // Estado A, Cidade 01
        1000000, // População
        500.5, // Área
        20000.0, // PIB
        10 // Pontos turísticos
    );
    
    CartaSuperTrunfo carta02 = novaCarta(
        'B', 2, // Estado B, Cidade 02
        2000000, // População
        750.0, // Área
        30000.0, // PIB
        15 // Pontos turísticos
    );
    return 0;
}
