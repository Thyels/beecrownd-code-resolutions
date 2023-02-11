/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados.
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem
adequada:
se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
*/

#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, passa;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a<b){
        passa = a;
        a = b;
        b = passa;
    }
    if(a<c){
        passa = a;
        a = c;
        c = passa;
    }
    if(b<c){
        passa = b;
        b = c;
        c = passa;
    }

    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
    if(pow(a,2)==(pow(b,2)+pow(c,2))){
        printf("TRIANGULO RETANGULO\n");
    }
    if(pow(a,2)>(pow(b,2)+pow(c,2))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(pow(a,2)<(pow(b,2)+pow(c,2))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b && b!=c) || (b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }
    }

    return 0;
}
