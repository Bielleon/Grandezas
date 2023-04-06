#include <stdio.h>

int main() {
    float valor1, valor2, resultado;
    int opcao;

    printf("Digite o valor num�rico da primeira grandeza: ");
    scanf("%f", &valor1);

    printf("Digite o valor num�rico da segunda grandeza: ");
    scanf("%f", &valor2);

    printf("\nEscolha a opera��o que deseja realizar:\n");
    printf("1 - Converter Tens�o\n");
    printf("2 - Converter Corrente\n");
    printf("3 - Converter Pot�ncia\n");
    printf("4 - Converter Resist�ncia\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            resultado = valor1 / valor2;
            printf("\nResultado: %.2f V", resultado);
            break;
        case 2:
            resultado = valor1 / valor2;
            printf("\nResultado: %.2f A", resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("\nResultado: %.2f W", resultado);
            break;
        case 4:
            resultado = valor1 / valor2;
            printf("\nResultado: %.2f Ohms", resultado);
            break;
        default:
            printf("\nOp��o inv�lida.");
    }

    return 0;
}

