#include <stdio.h>
 
int main() {
 
   
  	int idade;
  	float media = 0;
   	int i = 0;
   	
   	scanf("%d",&idade);
    	while(idade > 0) {
    		i++;
    		media += idade;
			scanf("%d",&idade);
		}
   
		media = media/i;
		printf("%.2f\n",media);
   	
   
   
    return 0;
}
