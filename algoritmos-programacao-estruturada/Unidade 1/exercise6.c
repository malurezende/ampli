#include <stdio.h>


int main () {

    char nomeCliente[30];
    float pesoCliente, alturaCliente, imcCliente; 


    printf("Nome do cliente: \n");
    scanf("%s", nomeCliente); 

    printf("Peso do cliente (em kg): \n");
    scanf("%f", &pesoCliente);

    printf("Altura do cliente (em m): \n");
    scanf("%f", &alturaCliente);

    imcCliente = (pesoCliente / (alturaCliente * alturaCliente));

    printf("O imc de %s é: %.1lf \n", nomeCliente, imcCliente); 

    if (imcCliente <= 18.5)
    {
        printf("Você está abaixo o peso ideal\n");
    } else if (imcCliente < 24.9)
    {
        printf("Você está no peso ideal\n");
    } else
    {
        printf("Você está acima do peso\n"); 
    }


}