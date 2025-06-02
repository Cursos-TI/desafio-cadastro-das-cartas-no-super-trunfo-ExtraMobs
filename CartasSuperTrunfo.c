#include <stdio.h> 

// Eu tentei pensar em um jeito de não usar typedef,
// porém esse foi o melhor jeito de representar a
// estrutura exigida pelo enunciado, afinal a 
// linguagem C não possui conceito de herança.

typedef struct
{
    char estado; // A - H
    int cidade; // 01 - 04
    char codigo_carta[3]; // estado + cidade
} CartaId;

// Pelo o que pesquisei, esse é o jeito
// mais utilizado pela comunidade para representar
// um typedef, com o nome ao final da declaração.

// o typedef é o comando que ajuda muito a reduzir
// código escrito, podendo "construir" a estrutura,
// parecido com as linguagens de mais alto nível.

typedef struct
{
    CartaId id;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} CartasSuperTrunfo;


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    return 0;
}
