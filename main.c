#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

// Função que calcula a derivada de f(x) = ax
void derivada_x(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = %dx\n", a);
        printf("f'(x) = %d\n", a);
    } else {
        printf("A derivada de f(x) = %d\n", a);
        printf("f'(x) = %d\n", a - a);
    }
}

// Função que calcula a derivada de f(x) = ax^n
void derivada_com_expoente(int a, int n) {
    int aa = a * n;
    int nn = n - 1;
    printf("A derivada de f(x) = %dx^%d\n", a, n);
    printf("f'(x) = %dx^%d\n", aa, nn);
}

// Função que calcula a derivada de f(x) = √ax
void derivada_raiz(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = √%dx\n", a);
        printf("f'(x) = 1 / 2√%d * %d\n", a, a);
    } else {
        printf("f'(x) = 1 / 2√%d\n", a);
    }
}

// Função que calcula a derivada de f(x) = log a
void derivada_log(int a) { 
    printf("A derivada de f(x) = log %d\n", a);
    printf("f'(x) = 1/%d ln 10\n", a);
}

// Função que calcula a derivada de f(x) = ln a
void derivada_ln(int a) { 
    printf("A derivada de f(x) = ln %d\n", a);
    printf("f'(x) = 1/%d\n", a);
}

// Função que calcula a derivada de f(x) = a^x
void derivada_exponencial(int a) {
    printf("A derivada de f(x) = %d^x\n", a);
    printf("f'(x) = %d^x * ln %d\n", a, a);
}

// Função que calcula a derivada de f(x) = e^x
void derivada_exponencial_Euler(int n, char temCoeficiente) {
    if (temCoeficiente  == 'S') {
        printf("A derivada de f(x) = e^%dx\n", n);
        printf("f'(x) = %de^%dx\n", n, n);
    } else {
        printf("A derivada de f(x) = e^%d\n", n);
        printf("f'(x) = %d\n", n - n);
    }
}

// Função que calcula a derivada de f(x) = sen ax
void derivada_sin(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = sen %dx\n", a);
        printf("f'(x) = %dcos %dx\n", a, a);
    } else {
        printf("A derivada de f(x) = sen %d\n", a);
        printf("f'(x) = %d\n", a - a);
    }
}

// Função que calcula a derivada de f(x) = cos ax
void derivada_cos(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = cos %dx\n", a);
        printf("f'(x) = -%dsen %dx\n", a, a);
    } else {
        printf("A derivada de f(x) = cos %d\n", a);
        printf("f'(x) = %d\n", a - a);
    }
}

// Função que calcula a derivada de f(x) = tg ax
void derivada_tg(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = tg %dx\n", a);
        printf("f'(x) = %dsec^2 %dx\n", a, a);
    } else {
        printf("A derivada de f(x) = tg %d\n", a);
        printf("f'(x) = %d\n", a - a);
    }
}

// Função que calcula a derivada de f(x) = ctg ax
void derivada_ctg(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = ctg %dx\n", a);
        printf("f'(x) = %dcsc^2 %dx\n", a * -1, a);
    } else {
        printf("A derivada de f(x) = ctg %d\n", a);
        printf("f'(x) = %d\n", a - a);
    }
}

// Função que calcula a derivada de f(x) = sec ax
void derivada_sec(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = sec %dx\n", a);
        printf("f'(x) = %d (tg %dx * sec %dx)\n", a, a, a);
    } else {
        printf("A derivada de f(x) = sec %d\n", a);
        printf("f'(x) = %d\n", a - a);
        
    }
}

// Função que calcula a derivada de f(x) = csc ax
void derivada_csc(int a, char temCoeficiente) {
    if (temCoeficiente == 'S') {
        printf("A derivada de f(x) = csc %dx\n", a);
        printf("f'(x) = -%dctg %dx * csc %dx\n", a, a, a);
    } else {
        printf("A derivada de f(x) = csc %d\n", a);
        printf("f'(x) = %d\n", a - a);
    }
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
    printf("f'(x) = %dcos(%dx)\n", a, a);
}

// Função que exibe a derivada de f(x) = e^(ax + b)
void derivada_exp(int a, int b) {
    printf("A derivada de f(x) = e^(%dx + %d)\n", a, b);
    printf("f'(x) = e^(%dx + %d) . %d\n", a, b, a);
}

// Função que lê o valor de a em uma equação
int digiteValorA() {
    int a;
    printf("Digite o valor de a: ");
    scanf(" %d", &a);
    printf("\n");
    return a;
}

// Função que diz por si só o que faz
char temCoeficiente;
void verificaCoeficiente() {
    do {
        printf("Essa função vai ter coeficiente? [S/N]: ");
        scanf(" %c", &temCoeficiente);
        temCoeficiente = toupper(temCoeficiente);
        if (temCoeficiente != 'S' && temCoeficiente != 'N') {
            printf("Resposta inválida!\n");
        }
    } while (temCoeficiente != 'S' && temCoeficiente != 'N');
}


int main() {
    int escolha, a, b, c, n;
    char continuar;
    do {
        printf("Escolha o tipo de função para calcular a derivada:\n");
        printf("0. Fechar programa\n");
        printf("1. Função simples f(x) = ax\n");
        printf("2. Função com expoente no coeficiente f(x) = ax^n\n");
        printf("3. Função de raiz quadrada f(x) = √ax\n");
        printf("4. Função de logaritmo f(x) = log a\n");
        printf("5. Função de ln f(x) = ln a\n");
        printf("6. Função exponencial f(x) = a^x\n");
        printf("7. Função exponencial com Euler f(x) = e^ax\n");
        printf("8. Função seno f(x) = sin ax\n");
        printf("9. Função cosseno f(x) = cos ax\n");
        printf("10. Função tangente f(x) = tg ax\n");
        printf("11. Função cotangente f(x) = ctg ax\n");
        printf("12. Função secante f(x) = sec ax\n");
        printf("13. Função cossecante f(x) = csc ax\n");
        printf("14. Polinômio (ax^n + bx + c)\n");
        printf("15. Seno sin(ax + b)\n");
        printf("16. Euler e^(ax + b)\n");
        printf("Sua escolha é: ");
        scanf(" %d", &escolha);
        printf("\n");
    
        switch (escolha) {
            case 0:
                printf("Fechando programa...");
                return 0;
            case 1:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_x(a, temCoeficiente);
                break;
            case 2:
                printf("Digite o valor de a (para o termo ax): ");
                scanf(" %d", &a);
                printf("Digite o exponte n (para o termo ax^n): ");
                scanf(" %d", &n);
                printf("\n");
                derivada_com_expoente(a, n);
                break;
            case 3:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_raiz(a, temCoeficiente);
                break;
            case 4:
                a = digiteValorA();
                derivada_log(a);
                break;
            case 5:
                a = digiteValorA();
                derivada_ln(a);
                break;
            case 6:
                a = digiteValorA();
                derivada_exponencial(a);
                break;
            case 7:
                verificaCoeficiente();
                n = digiteValorA();
                derivada_exponencial_Euler(n, temCoeficiente);
                break;
            case 8:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_sin(a, temCoeficiente);
                break;
            case 9:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_cos(a, temCoeficiente);
                break;
            case 10:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_tg(a, temCoeficiente);
                break;
            case 11:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_ctg(a, temCoeficiente);
                break;
            case 12:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_sec(a, temCoeficiente);
                break;
            case 13:
                verificaCoeficiente();
                a = digiteValorA();
                derivada_csc(a, temCoeficiente);
                break;
            case 14:
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
            case 15:
                printf("Digite o coeficiente a (para o termo ax): ");
                scanf(" %d", &a);
                printf("Digite o coeficiente b (termo constante): ");
                scanf(" %d", &b);
                printf("\n");
                derivada_seno(a, b);
                break;
            case 16:
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
        
        do {
            printf("Continuar? [S/N]: ");
            scanf(" %c", &continuar);
            continuar = toupper(continuar);
            if (continuar != 'S' && continuar != 'N') {
                printf("Escolha uma opção válida!\n");
                continue;
            }
        } while (continuar != 'S' && continuar != 'N');
            
        if (continuar == 'S') {
            system("clear");
        } else if (continuar == 'N') {
            printf("Até mais tarde!\n");
        }
    } while (continuar == 'S');
    return 0;
}
