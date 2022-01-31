#include <stdio.h>

int main()
{
    int existe_aluno, existe_nota = 1, numero_notas = 0;
    float soma_notas = 0, nota_atual, media_aluno; 
    char nome_aluno[30];

    printf("Você deseja adicionar as notas de algum aluno? 1 para 'sim' e 0 para 'nao'\n");
    scanf("%d", &existe_aluno);

    while (existe_aluno == 1) 
    {
        soma_notas = 0;
        numero_notas = 0;
        printf("Digite o nome do aluno: \n");
        scanf("%s", nome_aluno);

        printf("Digite as notas: \n");

        do
        {
            printf("Nota %d: ", numero_notas + 1);
            scanf("%f", &nota_atual);
            soma_notas = soma_notas + nota_atual;

            printf("\nGostaria de digitar mais alguma nota? 1 para 'sim' e 0 para 'nao'\n");
            scanf("%d", &existe_nota);

            numero_notas++;

        } while (existe_nota == 1);    

        media_aluno = soma_notas / numero_notas; 

        printf ("\tA media d@ alun@ %s é %.2lf\n\n", nome_aluno, media_aluno);

        printf ("Gostaria de adicionar as notas de mais algum aluno? 1 para 'sim' e 0 para 'não'\n"); 
        scanf ("%d", &existe_aluno); 
       
    }
}
