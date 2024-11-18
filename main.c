#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

// Função que calcula a derivada de f(x) = a
void derivada_x(int a) {
    printf("A derivada de f(x) = %d\n", a);
    printf("f'(x) = %d\n", a - a);
}

// Função que calcula a derivada de f(x) = ax
void derivada_coeficiente_x(int a) {
    printf("A derivada de f(x) = %dx\n", a);
    printf("f'(x) = %d\n", a * 1);
}

// Função que calcula a derivada de f(x) = ax^n
void derivada_com_expoente(int a, int n) {
    int aa = a * n;
    int nn = n - 1;
    printf("A derivada de f(x) = %dx^%d\n", a, n);
    printf("f'(x) = %dx^%d\n", aa, nn);
}

void derivada_raiz(int a) {
    printf("A derivada de f(x) = √%d\n", a);
    printf("f'(x) = 1 / 2√%d\n", a);
}

// Derivada de f(x) = log a
void derivada_log(int a) { 
    printf("A derivada de f(x) = log %d\n", a);
    printf("f'(x) = 1/%d ln 10\n", a);
}

// Derivada de f(x) = ln a
void derivada_ln(int a) { 
    printf("A derivada de f(x) = ln %d\n", a);
    printf("f'(x) = 1/%d\n", a);
}

//derivada de f(x) = a^x
void derivada_exponencial(int a) {
    printf("A derivada de f(x) = %d^x\n", a);
    printf("f'(x) = %d^x ln %d\n", a, a);
}
//derivada de f(x) = e^x
void derivada_exponencial_Euler(int n) {
    printf("A derivada de f(x) = e^%d\n", n);
    printf("f'(x) = e^%d\n", n);
}
// Derivada de f(x) = sen x
void derivada_sin(int a) {
    printf("A derivada de f(x) = sin %d\n", a);
    printf("f'(x) = cos %d\n", a);
}
// Derivada de f(x) = cos x
void derivada_cos(int a) {
    printf("A derivada de f(x) = cos %d\n", a);
    printf("f'(x) = -sin %d\n", a);
}
// Derivada de f(x) = tg x
void derivada_tg(int a) {
    printf("A derivada de f(x) = tg %d\n", a);
    printf("f'(x) = sec^2 %d\n", a);
}
// Derivada de f(x) = ctg x
void derivada_ctg(int a) {
    printf("A derivada de f(x) = ctg %d\n", a);
    printf("f'(x) = -csc^2 %d\n", a);
}
// Derivada de f(x) = sec x
void derivada_sec(int a) {
    printf("A derivada de f(x) = ctg %d\n", a);
    printf("f'(x) = tg %d * sec %d\n", a, a);
}
// Derivada de f(x) = csc x
void derivada_csc(int a) {
    printf("A derivada de f(x) = csc %d\n", a);
    printf("f'(x) = -ctg %d * csc %d\n", a, a);
}

// Função que calcula a derivada de f(x) = ax^n + bx + c
void derivada_polinomio(int a, int n, int b, int c) {
    int da = a * n;     // Derivada de ax^n é a * n
    int dn = n - 1;     // Potência diminui em 1
    int db = b;         // Derivada de bx é b

    printf("A derivada de f(x) = %dx^%d + %dx + %d\n", a, n, b, c);
    printf("f'(x) = %dx^%d + %d\n", da, dn, db);
}

// Função que calcula a derivada de f(x) = sin(ax + b)
void derivada_seno(int a, int b) {
    printf("A derivada de f(x) = sin(%dx + %d)\n", a, b);
    printf("f'(x) = cos(%dx + %d) . %d\n", a, a, b);
}

// Função que exibe a derivada de f(x) = e^(ax + b)
void derivada_exp(int a, int b) {
    printf("A derivada de f(x) = e^(%dx + %df)\n", a, b);
    printf("f'(x) = e^(%dx + %d) . %d\n", a, a, b);
}

int main() {
    int escolha, a, b, c, n;
    char continuar;
    do {
        printf("Escolha o tipo de função para calcular a derivada:\n");
        printf("0. Fechar programa\n");
        printf("1. Função simples f(x) = a\n");
        printf("2. Função simples com coeficiente f(x) = ax\n");
        printf("3. Função com expoente no coeficiente f(x) = ax^n\n");
        printf("4. Função de raiz quadrada f(x) = √x\n");
        printf("5. Função de logaritmo f(x) = log a\n");
        printf("6. Função de ln f(x) = ln a\n");
        printf("7. Função exponencial f(x) = a^x\n");
        printf("8. Função exponencial com Euler f(x) = e^x\n");
        printf("9. Função seno f(x) = sin x\n");
        printf("10. Função cosseno f(x) = cos x\n");
        printf("11. Função tangente f(x) = tg x\n");
        printf("12. Função cotangente f(x) = ctg x\n");
        printf("13. Função secante f(x) = sec x\n");
        printf("14. Função cossecante f(x) = csc x\n");
        printf("15. Polinômio (ax^n + bx + c)\n");
        printf("16. Seno sin(ax + b)\n");
        printf("17. Euler e^(ax + b)\n");
        printf("Sua escolha é: ");
        scanf(" %d", &escolha);
        printf("\n");
    
        switch (escolha) {
            case 0:
                printf("Fechando programa...");
                return 0;
            case 1:
                printf("Digite o valor de a: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_x(a);
                break;
            case 2:
                printf("Digite o coeficiente a (para o termo ax): ");
                scanf(" %d", &a);
                printf("\n");
                derivada_coeficiente_x(a);
                break;
            case 3:
                printf("\nDigite o coeficiente a (para o termo ax): ");
                scanf(" %d", &a);
                printf("\nDigite o exponte n (para o termo ax^n): ");
                scanf(" %d", &n);
                printf("\n");
                derivada_com_expoente(a, n);
                break;
            case 4:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_raiz(a);
                break;
            case 5:
                printf("Digite o coeficiente a: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_log(a);
                break;
            case 6:
                printf("Digite o coeficiente a: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_ln(a);
                break;
            case 7:
                printf("Digite o coeficiente a: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_exponencial(a);
                break;
            case 8:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &n);
                printf("\n");
                derivada_exponencial_Euler(n);
                break;
            case 9:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_sin(a);
                break;
            case 10:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_cos(a);
                break;
            case 11:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_tg(a);
                break;
            case 12:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_ctg(a);
                break;
            case 13:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_sec(a);
                break;
            case 14:
                printf("Digite o coeficiente x: ");
                scanf(" %d", &a);
                printf("\n");
                derivada_csc(a);
                break;
            case 15:
                printf("Digite o coeficiente a (para o termo ax^n): ");
                scanf(" %d", &a);
                printf("Digite o expoente n (para o termo ax^n): ");
                scanf(" %d", &n);
                printf("Digite o coeficiente b (para o termo bx): ");
                scanf(" %d", &b);
                printf("Digite o coeficiente c (termo constante): ");
                scanf(" %d", &c);
                printf("\n");
                derivada_polinomio(a, n, b, c);
                break;
            case 16:
                printf("Digite o coeficiente a (para o termo ax): ");
                scanf(" %d", &a);
                printf("Digite o coeficiente b (termo constante): ");
                scanf(" %d", &b);
                printf("\n");
                derivada_seno(a, b);
                break;
            case 17:
                printf("Digite o coeficiente a (para o termo ax): ");
                scanf(" %d", &a);
                printf("Digite o coeficiente b (termo constante): ");
                scanf(" %d", &b);
                printf("\n");
                derivada_exp(a, b);
                break;
            default:
                printf("Escolha inválida.\n");
                break;
        }
        
        printf("Continuar? [S/N]: ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
        if (continuar != 'S' || continuar != 'N') {
            printf("Escolha uma opção válida!\n");
        }
            
        if (continuar == 'S') {
            system("clear");
        }
    } while (continuar == 'S');
    return 0;
}
