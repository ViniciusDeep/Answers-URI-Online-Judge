#include <stdio.h>
 
int main() {
 
    int funcionario,horas;
    float salario,x;
   
   scanf("%d %d %f", &funcionario,&horas,&salario);
   
   
   x = horas*salario;
   
   printf("NUMBER = %d\n",funcionario);
    printf("SALARY = U$ %.2f\n",x);
 
    return 0;
}

