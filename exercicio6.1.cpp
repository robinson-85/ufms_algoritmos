/* 6.1 Escreva um programa que receba a temperatura ambiente em graus Célsius e 
mostre uma mensagem para o usuário informando se a temperatura está muito quente. 
Considere como temperatura limite o valor de 30 graus Célsius.*/

#include <stdio.h>
int main(){
    float temperatura;
    printf("Informe a temperatura em graus °C: ");
    scanf("%f", &temperatura);

    if(temperatura > 30){
        printf("\nHoje o dia está muito quente! \n");
    }
    else{
        printf("\nHoje a temperatura está agradável! \n");
    }

    getchar();
    return 0;
}
