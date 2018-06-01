#include <stdio.h>
int main() {
	int a,b;
	while(scanf("%d:%d", &a, &b)!=EOF){
		printf("Atraso maximo: ");
		if(a < 7 || (a == 7 && b == 0)) printf("0\n");	
		else printf("%d\n", ((a+1)-8)*60 + b);
	}
	return 0;
}
