#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída

// Definição da estrutura 'CartaSuperTrunfo' para armazenar os dados de cada carta
struct CartaSuperTrunfo {
    char estado;        // Armazena uma letra que representa o estado (ex: A, B, C...)
    char codigo[10];    // Armazena o código da carta (string de até 9 caracteres + '\0')
    char cidade[50];    // Armazena o nome da cidade (string)
    int populacao;      // Número inteiro para a população da cidade
    float area;         // Número decimal para a área da cidade em km²
    float pib;          // Número decimal para o PIB da cidade em bilhões
    int pontos;         // Número inteiro para o número de pontos turísticos
};

int main() {
    // Declaração de duas variáveis do tipo 'CartaSuperTrunfo'
    struct CartaSuperTrunfo carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("Insira os dados da primeira carta:\n");

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &carta1.estado);       // Lê um caractere, o espaço antes do %c ignora espaços anteriores

    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigo);         // Lê uma string até espaço ou enter

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);    // Lê uma linha inteira até o usuário apertar enter

    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);     // Lê um número inteiro

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta1.area);          // Lê um número decimal (float)

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta1.pib);           // Lê outro número decimal (float)

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos);        // Lê um número inteiro

    // Entrada de dados para a segunda carta
    printf("\nInsira os dados da segunda carta:\n");

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &carta2.estado);       // Lê um caractere, o espaço antes do %c ignora espaços anteriores

    printf("Digite o código da carta: ");
    scanf("%s", carta2.codigo);         // Lê uma string até espaço ou enter

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);    // Lê uma linha inteira até o usuário apertar enter

    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);     // Lê um número inteiro

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta2.area);          // Lê um número decimal (float)

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta2.pib);           // Lê outro número decimal (float)

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos);        // Lê um número inteiro

    // Exibição dos dados da primeira carta
   printf("\n--- Carta 1 ---\n");  // Imprime um título para separar visualmente os dados da primeira carta

    printf("Estado: %c\n", carta1.estado);          // Mostra a letra do estado da primeira carta
    printf("Código: %s\n", carta1.codigo);          // Exibe o código da carta (string)
    printf("Cidade: %s\n", carta1.cidade);          // Mostra o nome da cidade
    printf("População: %d\n", carta1.populacao);    // Exibe a população da cidade (número inteiro)
    printf("Área: %.2f km²\n", carta1.area);        // Mostra a área da cidade com 2 casas decimais, em km²
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);   // Exibe o PIB da cidade com 2 casas decimais, indicando que está em bilhões
    printf("Pontos turísticos: %d\n", carta1.pontos);// Mostra o número de pontos turísticos da cidade

    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");  // Imprime um título para separar visualmente os dados da segunda carta

    printf("Estado: %c\n", carta2.estado);          // Mostra a letra do estado da segunda carta
    printf("Código: %s\n", carta2.codigo);          // Exibe o código da carta (string)
    printf("Cidade: %s\n", carta2.cidade);          // Mostra o nome da cidade
    printf("População: %d\n", carta2.populacao);    // Exibe a população da cidade (número inteiro)
    printf("Área: %.2f km²\n", carta2.area);        // Mostra a área da cidade com 2 casas decimais, em km²
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);   // Exibe o PIB da cidade com 2 casas decimais, indicando que está em bilhões
    printf("Pontos turísticos: %d\n", carta2.pontos);// Mostra o número de pontos turísticos da cidade


    return 0;   // Indica que o programa terminou corretamente
}
