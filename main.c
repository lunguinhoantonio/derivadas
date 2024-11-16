#include <stdio.h>
#include <math.h>

// Função que calcula a derivada de f(x) = a
void derivada_x(double a) {
    printf("\nA derivada de f(x) = %.0f\n", a);
    printf("\nf'(x) = %.0f\n", a - a);
}

// Função que calcula a derivada de f(x) = ax
void derivada_coeficiente_x(double a) {
    printf("\nA derivada de f(x) = %.0fx\n", a);
    printf("\nf'(x) = %.0f\n", a * 1);
}

// Função que calcula a derivada de f(x) = ax^n + bx + c
void derivada_polinomio(double a, double n, double b, double c) {
    double da = a * n;     // Derivada de ax^n é a * n
    double dn = n - 1;     // Potência diminui em 1
    double db = b;         // Derivada de bx é b

    printf("\nA derivada de f(x) = %.0fx^%.0f + %.0fx + %.0f\n", a, n, b, c);
    printf("f'(x) = %.0fx^%.0f + %.0f\n\n", da, dn, db);
}

// Função que calcula a derivada de f(x) = sin(ax + b)
void derivada_seno(double a, double b) {
    printf("\nA derivada de f(x) = sin(%.0fx + %.0f)\n", a, b);
    printf("f'(x) = %.0fcos(%.0fx + %.0f)\n\n", a, a, b);
}

// Função que exibe a derivada de f(x) = e^(ax + b)
void derivada_exp(double a, double b) {
    printf("\nA derivada de f(x) = e^(%.0fx + %.0f)\n", a, b);
    printf("f'(x) = %.0fe^(%.2fx + %.0f)\n\n", a, a, b);
}

int main() {
    int escolha;
    double a, b, c, n;

    printf("Escolha o tipo de função para calcular a derivada:\n");
    printf("1. Polinômio (ax^n + bx + c)\n");
    printf("2. Seno (sin(ax + b))\n");
    printf("3. Exponencial (e^(ax + b))\n");
    printf("4. Função simples (f(x) = a)\n");
    printf("5. Função simples com coeficiente (f(x) = ax)\n");
    printf("Sua escolha é: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nDigite o coeficiente a (para o termo ax^n): ");
            scanf("%lf", &a);
            printf("Digite o expoente n (para o termo ax^n): ");
            scanf("%lf", &n);
            printf("Digite o coeficiente b (para o termo bx): ");
            scanf("%lf", &b);
            printf("Digite o coeficiente c (termo constante): ");
            scanf("%lf", &c);
            derivada_polinomio(a, n, b, c);
            break;
        case 2:
            printf("\nDigite o coeficiente a (para o termo ax): ");
            scanf("%lf", &a);
            printf("Digite o coeficiente b (termo constante): ");
            scanf("%lf", &b);
            derivada_seno(a, b);
            break;
        case 3:
            printf("\nDigite o coeficiente a (para o termo ax): ");
            scanf("%lf", &a);
            printf("Digite o coeficiente b (termo constante): ");
            scanf("%lf", &b);
            derivada_exp(a, b);
            break;
        case 4:
            printf("\nDigite o valor de a: ");
            scanf(" %lf", &a);
            derivada_x(a);
            break;
        case 5:
            printf("\nDigite o coeficiente a (para o termo ax): ");
            scanf(" %lf", &a);
            derivada_coeficiente_x(a);
            break;
        default:
            printf("\nEscolha inválida.\n");
            break;
    }

    return 0;
}
