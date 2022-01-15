#include <stdio.h>

int main()
{
    float salario_bruto, desconto_ir, desconto_inss, salario_liquido, desconto_impostos;

    printf("Calculando salário líquido\n");
    printf("Digite seu salário bruto: \n");
    scanf("%f", &salario_bruto);

    //cálculo imposto de renda//
    if (salario_bruto <= 1903.98f){
        desconto_ir = 0.0f;
    }
    else if (salario_bruto <= 2826.65f)
    {
        desconto_ir = salario_bruto * 0.075f;
    }
    else if (salario_bruto <= 3751.05f){
        desconto_ir = salario_bruto * 0.15f; 
    }
    else if (salario_bruto <= 4664.68f){
        desconto_ir = salario_bruto * 0.225f;
    }   
    else if (salario_bruto >= 4664.68f){
        desconto_ir = salario_bruto * 0.275f;
    }

    printf("Seu desconto de Imposto de renda é de: %.2lf reais\n", desconto_ir);
    
    //calculo INSS//
    if (salario_bruto <= 1045.00){
        desconto_inss = salario_bruto * 0.075f;
    }
    else if (salario_bruto <= 2089.60f){
        desconto_inss = salario_bruto * 0.09f;
    }
    else if (salario_bruto <= 3134.40){
        desconto_inss = salario_bruto * 0.12f;
    }
    else if (salario_bruto >= 3134.00){
        desconto_inss = salario_bruto * 0.14f;
    }
    
    printf("Seu desconto do INSS é de: %.2lf reais.\n", desconto_inss);

    desconto_impostos = desconto_inss + desconto_ir; 
    
    salario_liquido = salario_bruto - desconto_impostos; 

    printf("Seu salário liquido é de: %.2lf reais\n", salario_liquido);

}
