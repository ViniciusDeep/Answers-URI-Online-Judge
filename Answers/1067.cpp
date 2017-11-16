#include <stdio.h>
int main(){
   int X; 
   int i;
	scanf("%d", &X);
	i = 1;
    while(i <= X)  {
		if(i%2!=0) {
    		printf("%d\n",i);		
    		i = i + 2;
	}
	}
    return 0;
}
//Vinicius Mangueira Correia
