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

// Função que calcula a derivada de f(x) = ax^n
void derivada_com_expoente(double a, double n) {
    double aa = a * n;
    double nn = n - 1;
    printf("\nA derivada de f(x) = %.0fx^%.0f", a, n);
    printf("\nf'(x) = %.0fx^%.0f", aa, nn);
}

void derivada_raiz(double a) {
    printf("\nA derivada de f(x) = √%.0f\n", a);
    printf("\n f'(x) = 1 / 2√%.0f\n", a);
    
    
}
// Derivada de f(x) = log a
void derivada_log(double a) { 
    
    printf("\nA derivada de f(x) = log %.0f", a);
    printf("\nf'(x) = 1/%.0f ln 10", a);
}
// Derivada de f(x) = ln a
void derivada_ln(double a) { 
    printf("\nA derivada de f(x) = ln %.0f", a);
    printf("\nf'(x) = 1/%.0f", a);
}

//derivada de f(x) = a^x
void derivada_exponencial(double a) {
    printf("\nA derivada de f(x) = %.0f^x", a);
    printf("\nf'(x) = %.0f^x ln %.0f", a, a);
}
//derivada de f(x) = e^x
void derivada_exponencial_Euler(double n) {
    printf("\nA derivada de f(x) = e^%.0f", n);
    printf("\nf'(x) = e^%.0f", n);
}
// Derivada de f(x) = sen x
void derivada_sin(double a) {
    printf("\nA derivada de f(x) = sin %.0f", a);
    printf("\nf'(x) = cos %.0f", a);
}
// Derivada de f(x) = cos x
void derivada_cos(double a) {
    printf("\nA derivada de f(x) = cos %.0f", a);
    printf("\nf'(x) = -sin %.0f", a);
}
// Derivada de f(x) = tg x
void derivada_tg(double a) {
    printf("\nA derivada de f(x) = tg %.0f", a);
    printf("\nf'(x) = sec^2 %.0f", a);
}
// Derivada de f(x) = ctg x
void derivada_ctg(double a) {
    printf("\nA derivada de f(x) = ctg %.0f", a);
    printf("\nf'(x) = -csc^2 %.0f", a);
}
// Derivada de f(x) = sec x
void derivada_sec(double a) {
    printf("\nA derivada de f(x) = ctg %.0f", a);
    printf("\nf'(x) = tg %.0f * sec %.0f", a, a);
}
// Derivada de f(x) = csc x
void derivada_csc(double a) {
    printf("\nA derivada de f(x) = csc %.0f", a);
    printf("\nf'(x) = -ctg %.0f * csc %.0f", a, a);
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
    printf("f'(x) = cos(%.0fx + %.0f). %.0f\n\n", a, a, b);
}

// Função que exibe a derivada de f(x) = e^(ax + b)
void derivada_exp(double a, double b) {
    printf("\nA derivada de f(x) = e^(%.0fx + %.0f)\n", a, b);
    printf("f'(x) = e^(%.2fx + %.0f). %.0f\n\n", a, a, b);
}

int main() {
    int escolha;
    double a, b, c, n;

    printf("Escolha o tipo de função para calcular a derivada:\n");
    printf("1. Função simples (f(x) = a)\n");
    printf("2. Função simples com coeficiente (f(x) = ax)\n");
    printf("3. Função com expoente no coeficiente (f(x) = ax^n)\n");
    printf("4. Função de raiz quadrada (f(x) = √x\n");
    printf("5. Função de logaritmo (f(x) = log a)\n");
    printf("6. Função de ln (f(x) = ln a)\n");
    printf("7. Função exponencial f(x) = a^x\n");
    printf("8. Função exponencial com Euler f(x) = e^x\n");
    printf("9. Função seno f(x) = sin x\n");
    printf("10. Função cosseno f(x) = cos x\n");
    printf("11. Função tangente f(x) = tg x\n");
    printf("12. Função cotangente f(x) = ctg x\n");
    printf("13. Função secante f(x) = sec x\n");
    printf("14. Função cossecante f(x) = csc x\n");
    printf("15. Polinômio (ax^n + bx + c)\n");
    printf("16. Seno (sin(ax + b))\n");
    printf("17. Euler (e^(ax + b))\n");
    printf("Sua escolha é: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nDigite o valor de a: ");
            scanf(" %lf", &a);
            derivada_x(a);
            break;
        case 2:
            printf("\nDigite o coeficiente a (para o termo ax): ");
            scanf(" %lf", &a);
            derivada_coeficiente_x(a);
            break;
        case 3:
            printf("\nDigite o coeficiente a (para o termo ax): ");
            scanf(" %lf", &a);
            printf("\nDigite o exponte n (para o termo ax^n): ");
            scanf(" %lf", &n);
            derivada_com_expoente(a, n);
            break;
        case 4:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &a);
            derivada_raiz(a);
            break;
        case 5:
            printf("\nDigite o coeficiente a: ");
            scanf("%lf", &a);
            derivada_log(a);
            break;
        case 6:
            printf("\nDigite o coeficiente a: ");
            scanf("%lf", &a);
            derivada_ln(a);
            break;
        case 7:
            printf("\nDigite o coeficiente a: ");
            scanf("%lf", &a);
            derivada_exponencial(a);
            break;
        case 8:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &n);
            derivada_exponencial_Euler(n);
            break;
        case 9:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &a);
            derivada_sin(a);
            break;
        case 10:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &a);
            derivada_cos(a);
            break;
        case 11:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &a);
            derivada_tg(a);
            break;
        case 12:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &a);
            derivada_ctg(a);
            break;
        case 13:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &a);
            derivada_sec(a);
            break;
        case 14:
            printf("\nDigite o coeficiente x: ");
            scanf("%lf", &a);
            derivada_csc(a);
            break;
        case 15:
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
        case 16:
            printf("\nDigite o coeficiente a (para o termo ax): ");
            scanf("%lf", &a);
            printf("Digite o coeficiente b (termo constante): ");
            scanf("%lf", &b);
            derivada_seno(a, b);
            break;
        case 17:
            printf("\nDigite o coeficiente a (para o termo ax): ");
            scanf("%lf", &a);
            printf("Digite o coeficiente b (termo constante): ");
            scanf("%lf", &b);
            derivada_exp(a, b);
            break;
        default:
            printf("\nEscolha inválida.\n");
            break;
    }

    return 0;
}
