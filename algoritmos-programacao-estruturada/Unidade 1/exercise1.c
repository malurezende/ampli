#include <stdio.h>

struct dadoscliente
{
    char nomecliente[50], nomefilme[50];
    int idadecliente, classifilme;
};

int main() {
    struct dadoscliente infocliente;
    printf("Ficha de cadastro dos Clientes");
     
    printf("\nNome do cliente: ");
    scanf("%s", infocliente.nomecliente);
    
    printf("\nIdade: ");
    scanf("%d", &infocliente.idadecliente);
    
    printf("\nNome do filme:");
    scanf("%s", infocliente.nomefilme); 
    
    printf("\nClassificação indicada para o filme: ");
    scanf("%d", &infocliente.classifilme); 

    printf("\nCliente: %s\n", infocliente.nomecliente);
    printf("Idade: %d anos\n", infocliente.idadecliente);
    printf("Classificação do filme: %d anos\n", infocliente.classifilme);

    
    if (infocliente.idadecliente <= infocliente.classifilme) {
    printf("\n%s, \nEste filme não é indicado para sua faixa etária. Escolha outro!\n", infocliente.nomecliente);
    } else {
        printf("\nFilme alugado com sucesso!\n");
    }; 
};




