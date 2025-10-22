#include <stdio.h>

int main(){

    int idade;
    float altura;
    double contaBancaria;
    char letra;
    char nome [20];

    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    
    
    printf("Digite sua altura:");
    scanf("%f", &altura);
    printf("Sua altura é: %f\n", altura);


    printf("Sua conta Bancária é : %.2f\n", contaBancaria);
    printf("Letra do seu nome é : %c\n", letra);
    printf("Seu nome é : %s\n", nome);
 }
