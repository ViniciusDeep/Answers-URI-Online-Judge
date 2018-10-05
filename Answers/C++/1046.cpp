#include <stdio.h>
int main(){
   int in,fi; 
   scanf("%d%d", &in, &fi);
	if(fi <= in) fi += 24;
	printf("O JOGO DUROU %d HORA(S)\n", fi - in);
    return 0;
}
//Vinicius Mangueira Correia
