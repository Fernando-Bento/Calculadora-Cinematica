#include <stdio.h>
#include <locale.h>

int main(){

    int formula;
    float s0, v, t, vi, a, s, vf = 0.0;
    setlocale(LC_ALL, "Portuguese");
                                         
    puts("=======================================================");
    puts("               CALCULADORA DE CINEM�TICA               ");
    puts("=======================================================");
    puts(" Autor  : Fernando Augusto Bento");
    puts(" Data   : 14/12/2024");
    puts(" Vers�o : 1.0");
    puts("-------------------------------------------------------");
    puts(" Este programa resolve opera��es de cinem�tica como:");
    puts(" - MRU (Movimento Retil�neo Uniforme)");
    puts(" - MRUV (Movimento Retil�neo Uniformemente Variado)");
    puts("=======================================================");

    do{
        puts("Escolha uma Formula: ");
        puts("1) M.R.U");
        puts("2) M.R.U.V");
        puts("3) Velocidade M�dia");
        puts("4) Velocidade Final");
        puts("5) Torricelli");
        puts("6) Exit.");

        scanf("%d", &formula);

        if(formula < 1 || formula > 6){
            puts("Opera��o inv�lida! Tente outra.");
        }
        
    } while (formula < 1 || formula > 6);
    
    switch (formula){
        
        case 1: //M.R.U
            printf("Especifique a posi��o inicial do objeto: \n");
            scanf("%f", &s0);
            fflush(stdin);

            printf("Especifique a velocidade constante: \n");
            scanf("%f", &v);
            fflush(stdin);

            printf("Especifique o tempo: \n");
            scanf("%f", &t);
            fflush(stdin);

            printf("\n resultado: \n");
            printf("A posi��o final do objeto ser� de %.2f\n", s0 + v * t);
            break;

        case 2: //M.R.U.V
            printf("Especifique a posi��o inicial do objeto: \n");
            scanf("%f", &s0);
            fflush(stdin);

            printf("Especifique a velocidade inicial: \n");
            scanf("%f", &vi);
            fflush(stdin);

            printf("Especifique a acelera��o: \n");
            scanf("%f", &a);
            fflush(stdin);

            printf("Especifique o tempo: \n");
            scanf("%f", &t);
            fflush(stdin);

            printf("resultado: \n");
            printf("A posi��o final do objeto ser� de %.2f\n", s0 + vi * t + ((a * (t * t)) / 2));
            break;
        
        case 3: //VELOCIDADE M�DIA
            printf("Especifique a varia��o do espa�o: \n");
            scanf("%f", &s);
            fflush(stdin);

            printf("Especifique o intervalo de tempo: \n");
            scanf("%f", &t);
            fflush(stdin);

            printf("resultado: \n");
            printf("A velocidade m�dia do objeto � de %.2f\n", s / t);
            break;

        case 4: //VELOCIDADE FINAL
            printf("Especifique a velocidade inicial: \n");
            scanf("%f", &vi);
            fflush(stdin);

            printf("Especifique a acelera��o: \n");
            scanf("%f", &a);
            fflush(stdin);

            printf("Especifique o tempo: \n");
            scanf("%f", &t);
            fflush(stdin);

            printf("resultado: \n");
            printf("A velocidade final do objeto ser� de %.2f\n", vi + a * t);
            break;

        case 5: //TORRICELLI
            printf("Especifique a velocidade final: \n");
            scanf("%f", &vf);
            fflush(stdin);

            printf("Especifique a velocidade inicial: \n");
            scanf("%f", &vi);
            fflush(stdin);

            printf("Especifique a acelera��o: \n");
            scanf("%f", &a);
            fflush(stdin);

            printf("Especifique a varia��o do espa�o: \n");
            scanf("%f", &s);
            fflush(stdin);

            printf("resultado: \n");
            printf("A velociade final do objeto ser� de %.2f\n", vf * vf + 2 * a * s);
            break;
        
         case 6: //EXIT
            puts("Saindo...");
            break;

        default: 
            puts("Erro inesperado!");
            break;
    }
        
    return 0;
}