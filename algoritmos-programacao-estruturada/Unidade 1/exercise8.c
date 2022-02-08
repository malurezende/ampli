#include <stdio.h> 

int primo(int n) {
    return primoAux(n, 2);
}

int primoAux(int n, int x) {
    if (x == n) {
        return 1;
    } else if (n % x == 0) {
        return 0;
    } else {
        return primoAux(n, x + 1);
    }
}    


int main() {
    int resultado = 0, n; 
    printf("\n Digite um numero inteiro positivo para verificar se é primo: ");
    scanf("%d", &n);

    resultado = primo(n);
    if (resultado == 1) {
        printf("\n O número %d é primo!\t", n);
    } else {
        printf("\n O número %d não é primo!\t", n);
    }

    return 0;

}