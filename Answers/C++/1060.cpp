 #include <stdio.h>
 
   int main() {
 
	double n1,n2,n3,n4,n5,n6;
	int cont;
	scanf("%lf%lf%lf%lf%lf%lf",&n1,&n2,&n3,&n4,&n5,&n6);
	
	cont = 0;
	
	if (n1 >= 0) {
		cont ++;
	}
	
	if (n2 >= 0) {
		cont ++;
	}
	
	if (n3 >= 0) {
		cont ++;
	}
	
	if (n4 >= 0) {
		cont ++;
	}
	
	if (n5 >= 0) {
		cont ++;
	}
	
	if (n6 >= 0) {
		cont ++;
	}
	
	printf("%d valores positivos\n",cont);
	return 0;
 }
