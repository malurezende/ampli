#include <stdio.h>

float calcularImc (){
    float pesoCliente, alturaCliente, imcCliente; 

    printf("Peso do cliente (em kg): \n");
    scanf("%f", &pesoCliente);

    printf("Altura do cliente (em m): \n");
    scanf("%f", &alturaCliente);

    imcCliente = (pesoCliente / (alturaCliente * alturaCliente));

    return imcCliente;
}

int main () {

    char nomeCliente[30];

    printf("Nome do cliente: \n");
    scanf("%s", nomeCliente); 

    float imc = calcularImc(); 
    printf("O imc de %s é: %.1lf \n", nomeCliente, imc); 

    if (imc <= 18.5)
    {
        printf("%s está abaixo do peso ideal\n", nomeCliente);
    } else if (imc < 24.9)
    {
        printf("%s está no peso ideal\n", nomeCliente);
    } else
    {
        printf("%s está acima do peso\n", nomeCliente); 
    }


}

