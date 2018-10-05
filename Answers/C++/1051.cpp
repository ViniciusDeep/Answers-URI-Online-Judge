//Vinicius Mangueira
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario,x;
    scanf("%f", &salario);
    if(salario <= 2000.0) {
        printf("Isento\n");
    }
    else if(salario <= 3000.0 ){
        x = (salario - 2000.0)*0.08;
        printf("R$ %.2f\n", x);
    }
    else if( salario <= 4500.0){
        x = (salario - 3000.0)*0.18 + (1000*0.08);
        printf("R$ %.2f\n", x);
    }
    else {
        x = (salario - 4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2f\n", x);
    }
    return 0;
}
