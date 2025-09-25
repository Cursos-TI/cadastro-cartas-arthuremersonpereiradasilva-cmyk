#include <stdio.h>

// Estrutura para guardar os dados de cada carta
struct Carta {
    char estado;               // Letra do estado (A até H)
    char codigo[5];            // Código da carta (ex: A01)
    char nomeCidade[50];      // Nome da cidade
    int populacao;            // Número de habitantes
    float area;               // Área em km²
    float pib;                // PIB em bilhões de reais
    int pontosTuristicos;     // Quantidade de pontos turísticos
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1, carta2;

    // Coletando os dados da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê string com espaços

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Coletando os dados da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo os dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    // Exibindo os dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}