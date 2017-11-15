#include <stdio.h>
 
int main() {
 
     char nome;
 
  double salario,vendas,x;
 
  scanf("%s %lf %lf", &nome, &salario, &vendas);
 
  x = salario + (15*vendas)/100;
 
   printf("TOTAL = R$ %.2f\n",x);
 
    return 0;
}


//Vinicius Mangueira Correia
