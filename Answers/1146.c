#include<stdio.h>

main()
{
	int i,n;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=1; i<=n-1; i++){
			printf("%d ",i);
		}
		printf("%d\n",n);
	}
}
