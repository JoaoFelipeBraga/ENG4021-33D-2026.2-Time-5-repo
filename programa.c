#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Para o comando system()

void centralizarTexto(const char* texto) {
    // Esta função centraliza o texto no console (ajustar se necessário)
    int larguraTela = 80; // Largura padrão do console
    int tamanhoTexto = strlen(texto);
    int espacos = (larguraTela - tamanhoTexto) / 2;
    for (int i = 0; i < espacos; i++) printf(" ");
    printf("%s\n", texto);
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        system("cls"); // Limpa a tela (funciona no Windows)
        centralizarTexto("CALCULADORA CIENTIFICA");
        centralizarTexto("========================");
        centralizarTexto("Escolha uma operacao:");
        centralizarTexto("1 - Soma");
        centralizarTexto("2 - Subtracao");
        centralizarTexto("3 - Multiplicacao");
        centralizarTexto("4 - Divisao (e resto)");
        centralizarTexto("5 - Seno");
        centralizarTexto("6 - Cosseno");
        centralizarTexto("7 - Tangente");
        centralizarTexto("8 - Quadrado de um numero");
        centralizarTexto("0 - Sair");
        centralizarTexto("========================");

        printf("\nDigite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite dois numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 2:
                printf("\nDigite dois numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 3:
                printf("\nDigite dois numeros: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 4:
                printf("\nDigite dois numeros: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("\nDivisao: %.2f\n", resultado);
                    printf("Resto: %.2f\n", fmod(num1, num2));
                } else {
                    printf("\nErro: Divisao por zero!\n");
                }
                break;
            case 5:
                printf("\nDigite o angulo em graus: ");
                scanf("%f", &num1);
                resultado = sin(num1 * M_PI / 180); // Converte para radianos
                printf("\nSeno: %.2f\n", resultado);
                break;
            case 6:
                printf("\nDigite o angulo em graus: ");
                scanf("%f", &num1);
                resultado = cos(num1 * M_PI / 180); // Converte para radianos
                printf("\nCosseno: %.2f\n", resultado);
                break;
            case 7:
                printf("\nDigite o angulo em graus: ");
                scanf("%f", &num1);
                resultado = tan(num1 * M_PI / 180); // Converte para radianos
                printf("\nTangente: %.2f\n", resultado);
                break;
            case 8:
                printf("\nDigite um numero: ");
                scanf("%f", &num1);
                resultado = pow(num1, 2);
                printf("\nQuadrado: %.2f\n", resultado);
                break;
            case 0:
                centralizarTexto("Saindo... Ate logo!");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }

        printf("\nPressione Enter para continuar...");
        getchar(); // Para consumir o '\n' pendente
        getchar(); // Aguarda o Enter
    } while (opcao != 0);

    return 0;
}