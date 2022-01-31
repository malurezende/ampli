#include <stdio.h>
#include <string.h>
#include <ctype.h>  


int main() {

    char nomeAluno[50]; 
    char nomeMaiusculo[50];

    printf("Digite o nome do aluno: \n");
    scanf("%s", nomeAluno); 

    int i = 0;
    while (nomeAluno[i] != '\0')
    {
        nomeMaiusculo[i] = toupper(nomeAluno[i]);
        i++;
    }

    nomeMaiusculo[i] = '\0';

    printf("%s\n", nomeAluno);
    printf("%s\n", nomeMaiusculo);

}