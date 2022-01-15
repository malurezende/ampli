#include <stdio.h>

struct dadoscliente
{
    char nomecliente[50]; 
    int idadecliente, tempolocacao; 
};

struct dadosfilme
{
    char nomefilme[50];
    int classifilme;
};


int main() {
    struct dadoscliente cliente; 
    struct dadosfilme filme; 
    

    printf("Ficha de cadastro dos Clientes");
     
    printf("\nNome do cliente: ");
    scanf("%s", cliente.nomecliente);
    
    printf("\nIdade: ");
    scanf("%d", &cliente.idadecliente);
    
    printf("\nNome do filme:");
    scanf("%s", filme.nomefilme); 
    
    printf("\nClassificação indicada para o filme: ");
    scanf("%d", &filme.classifilme); 

    printf("\nCliente: %s\n", cliente.nomecliente);
    printf("Idade: %d anos\n", cliente.idadecliente);
    printf("Classificação do filme: %d anos\n", filme.classifilme);

    
    if (cliente.idadecliente <= filme.classifilme) {
    printf("\n%s, \nEste filme não é indicado para sua faixa etária. Escolha outro!\n", cliente.nomecliente);
    } else {
        printf("\nFilme alugado com sucesso!\n");
    }; 

    cliente.tempolocacao = filme.classifilme - cliente.idadecliente;

    printf("\nFaltam %d anos para que você possa alugar este filme.\n", cliente.tempolocacao);
    
    
};




