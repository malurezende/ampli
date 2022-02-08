#include <stdio.h>
#include <string.h>

float calcularImc (){
    float pesoCliente, alturaCliente, imcCliente; 

    printf("Peso do cliente (em kg): \n");
    scanf("%f", &pesoCliente);

    printf("Altura do cliente (em m): \n");
    scanf("%f", &alturaCliente);

    imcCliente = (pesoCliente / (alturaCliente * alturaCliente));

    return imcCliente;
}

float calcularMedia (float listaImc[], int contador){
    float soma = 0;

    for (int i = 0; i < contador; i++){
        soma += listaImc[i]; 
    }

    return soma/contador;
}

float calcularMediana (float listaImc[], int contador){
    float mediana = 0;

    if(contador % 2 != 0) { //se for impar
        mediana = listaImc[contador/2]; 
    } else { //se for par
        mediana = (listaImc[contador/2] + listaImc[contador/2 - 1])/2; 
    };

    return mediana; 
}


int main () {

    char nomeCliente[30];
    int adicionarCliente, contador = 0;
    float listaImc[50] = {};


    do {
        printf("Nome do cliente: \n");
        scanf("%s", nomeCliente);

        float imc = calcularImc();
        listaImc[contador] = imc;
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

        printf("Deseja adicionar mais um cliente? Digite 1 para 'sim' e 2 para 'não'\n");
        scanf("%d", &adicionarCliente);
        contador++;

    } while (adicionarCliente == 1);

    float media = calcularMedia(listaImc, contador);
    printf("A média dos imcs é: %.2lf\n", media); 
    
    float mediana = calcularMediana(listaImc, contador);
    printf("A mediana dos imcs é: %.2lf\n", mediana); 

}
