#include <stdio.h>
#include <string.h>
typedef struct {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} cartasupertrunfo;

void ler_carta(cartasupertrunfo*carta, int numero_carta) {
    printf("--- inserir dados da carta %d ---\n", numero_carta);
    printf("estado (a-h): ");   //bahia ou ceara
    scanf(" %c", &carta->estado);

    printf("codigo da carta (ex:a01): ");   //b01 e c02
    scanf("%s", carta->codigo);

    printf("nome da cidade: ");   //salvador e fortaleza
    scanf(" %[^\n]", carta->nome_cidade);

    printf("populacao: ");   //ceara=8794957 e bahia=14850513
    scanf("%d", &carta->populacao);

    printf("area (em km^2): ");  //ceara=148894442 e bahia=564760429
    scanf("%f", &carta->area);

    printf("pib (em bilhoes de reais): ");   //ceara=24296 e bahia=2847244
    scanf("%f", &carta->pib);

    printf("numero de pontos turisticos: ");   //ceara=5 e bahia=8
    scanf("%d", &carta->pontos_turisticos);
}

void exibir_carta(const cartasupertrunfo *carta, int numero_carta){
    printf("\n--- dados da carta %d---\n", numero_carta);
    printf("estado: %c\n", carta->estado);
    printf("codigo: %s\n", carta->codigo);
    printf("nome da cidade: %s\n", carta->nome_cidade);
    printf("populacao: %d\n", carta->populacao);
    printf("area: %.2f km^2\n", carta->area);
    printf("pib: %.2f bilhoes de reais\n", carta->pib);
    printf("numero de pontos turisticos: %d\n", carta->pontos_turisticos);
}

int main() {
    cartasupertrunfo carta1, carta2;

    ler_carta(&carta1, 1);

    ler_carta(&carta2, 2);
    
    exibir_carta(&carta1, 1);
    exibir_carta(&carta2, 2);

    return 0;
}
