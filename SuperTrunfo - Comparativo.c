#include <stdio.h>
#include <locale.h>

// MOLDE DA CARTA
typedef struct {
    int populacao;
    float area;
    float pib;
    int pturistico;
    float densidade;
} Carta;

// PARTE LÓGICA
Carta calcular_dados(Carta c) {
    c.densidade = (float)c.populacao / c.area;
    return c;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    Carta c1, c2;

    // ENTRADA CARTA 1
    printf("--- Dados Carta 1 ---\n");
    printf("População: ");         scanf("%d", &c1.populacao);
    printf("Área: ");              scanf("%f", &c1.area);
    printf("PIB: ");               scanf("%f", &c1.pib);
    printf("Pontos Turísticos: ");  scanf("%d", &c1.pturistico);

    // ENTRADA CARTA 2
    printf("\n--- Dados Carta 2 ---\n");
    printf("População: ");         scanf("%d", &c2.populacao);
    printf("Área: ");              scanf("%f", &c2.area);
    printf("PIB: ");               scanf("%f", &c2.pib);
    printf("Pontos Turísticos: ");  scanf("%d", &c2.pturistico);

    // CÁLCULOS
    c1 = calcular_dados(c1);
    c2 = calcular_dados(c2);

    printf("\n=== RESULTADO (1 se Carta 1 vencer, 0 se Carta 2 vencer) ===\n");

    // Lógica: O resultado da comparação (c1 > c2) já é 0 ou 1
    printf("População: %d\n", c1.populacao > c2.populacao);
    printf("Área: %d\n", c1.area > c2.area);
    printf("PIB: %d\n", c1.pib > c2.pib);
    printf("Pontos Turísticos: %d\n", c1.pturistico > c2.pturistico);
    
    // Na densidade, o menor valor vence (inversão da lógica)
    printf("Densidade Populacional: %d\n", c1.densidade < c2.densidade);

    printf("----------------------------------------------------------\n");

    return 0;
}
