#include <stdio.h>

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


    // Variáveis da carta 1
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Leitura dos dados da carta 1
    printf("\nCadastro da Carta 1\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)(pib1 * 1e9) / populacao1; 

    // Cálculos para a carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)(pib2 * 1e9) / populacao2; 

    // Cálculo do Super Poder para cada carta
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparação atributo por atributo
    int pop_vencedor = (populacao1 > populacao2) ? 1 : 0;
    int area_vencedor = (area1 > area2) ? 1 : 0;
    int pib_vencedor = (pib1 > pib2) ? 1 : 0;
    int pontos_turisticos_vencedor = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    int densidade_vencedor = (densidade1 < densidade2) ? 1 : 0; // menor densidade vence
    int pibPerCapita_vencedor = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    int superPoder_vencedor = (superPoder1 > superPoder2) ? 1 : 0;

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade1);
    printf("PIB per Capita: %.3f reais\n", pibPerCapita1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Exibição dos resultados das comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", pop_vencedor ? 1 : 2, pop_vencedor);
    printf("Área: Carta %d venceu (%d)\n", area_vencedor ? 1 : 2, area_vencedor);
    printf("PIB: Carta %d venceu (%d)\n", pib_vencedor ? 1 : 2, pib_vencedor);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos_vencedor ? 1 : 2, pontos_turisticos_vencedor);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_vencedor ? 2 : 1, densidade_vencedor);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita_vencedor ? 1 : 2, pibPerCapita_vencedor);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder_vencedor ? 1 : 2, superPoder_vencedor);
    
    return 0;
}
