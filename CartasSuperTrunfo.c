#include <stdio.h>  
#include <string.h>

int main() { 
    int populacao1, populacao2, num_pontos_turisticos1, num_pontos_turisticos2, ddd1 , ddd2;
    float pib1, pib2, area1, area2;
    char Estado1[50], Estado2[50], Cidade1[50], Cidade2[50];
    
    // Entrada de Dados
    printf("--- Dados da Cidade 1 ---\n");
    printf("Digite o 1 nome do Estado:\n");
    fgets(Estado1, sizeof(Estado1), stdin);
    Estado1[strcspn(Estado1, "\n")] = '\0';
    printf("Digite o 1 nome da Cidade :\n");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    Cidade1[strcspn(Cidade1, "\n")] = '\0';
    printf("Digite o DDD:\n");
    scanf("%d", &ddd1);
    printf("Digite os pontos turisticos:\n");
    scanf("%d", &num_pontos_turisticos1);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);
    printf("Digite a area:\n");
    scanf("%f", &area1);
    printf("Digite o PIB em reais:\n");
    scanf("%f", &pib1);

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Digite o 2 nome do Estado:\n");
    getchar();
    fgets(Estado2, sizeof(Estado2), stdin);
    Estado2[strcspn(Estado2, "\n")] = '\0';
    printf("Digite o 2 nome da Cidade :\n");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0';
    printf("Digite o DDD:\n");
    scanf("%d", &ddd2);
    printf("Digite os pontos turisticos:\n");
    scanf("%d", &num_pontos_turisticos2);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);
    printf("Digite a area:\n");
    scanf("%f", &area2);
    printf("Digite o PIB em reais:\n");
    scanf("%f", &pib2);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("DDD: %d\n", ddd1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", num_pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("DDD: %d\n", ddd2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", num_pontos_turisticos2);
    return 0;
}
