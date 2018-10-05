#include <stdio.h>


int main(){
	double sal,rea,per;
	scanf("%lf",&sal);
	if (sal >= 0 && sal <= 400.00) {
		rea = sal  * 0.15 ;
		sal = rea + sal;
		printf("Novo salario: %.2lf\n",sal);
		printf("Reajuste ganho: %.2lf\n",rea);
		printf("Em percentual: 15 %%\n");	
	}
	else if (sal >= 400.01 && sal <= 800.00) {
		rea	= sal * 0.12;
		sal = sal + rea;	
		printf("Novo salario: %.2lf\n",sal);
		printf("Reajuste ganho: %.2lf\n",rea);
		printf("Em percentual: 12 %%\n");
	}
	else if (sal >= 800.01 && sal <= 1200.00) {
		rea = sal * 0.10;
		sal = sal + rea;
		printf("Novo salario: %.2lf\n",sal);
		printf("Reajuste ganho: %.2lf\n",rea);
		printf("Em percentual: 10 %%\n");
	} 
	else if (sal >= 1200.01 && sal <= 2000.00) {
		rea = sal * 0.07;
		sal = sal + rea;
		printf("Novo salario: %.2lf\n",sal);
		printf("Reajuste ganho: %.2lf\n",rea);
		printf("Em percentual: 7 %%\n");	
	}
	else if (sal > 2000) {
		rea = sal * 0.04;
		sal = rea + sal;	
		printf("Novo salario: %.2lf\n",sal);
		printf("Reajuste ganho: %.2lf\n",rea);
		printf("Em percentual: 4 %%\n");
	}
    return 0;
}
//Vinicius Mangueira Correia
