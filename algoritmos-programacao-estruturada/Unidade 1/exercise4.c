#include <stdio.h>

int main()
{
    int mult;
    int result; 
    int num; 

    printf("TABELA DE TABUADA\n");
    printf("Digite o numero que deseja saber a tabuada\n");
    scanf("%d", &num); 

    for(int mult = 1; mult <= 10; mult++){        
        result = num * mult;
        printf("\n%d x %d = %d\n", num, mult, result);
    }

       

}