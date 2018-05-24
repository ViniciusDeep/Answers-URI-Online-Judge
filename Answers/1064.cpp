 #include <stdio.h>
 
   int main() {
 
	double n1,n2,n3,n4,n5,n6,media,contm;
	int cont;
	scanf("%lf%lf%lf%lf%lf%lf",&n1,&n2,&n3,&n4,&n5,&n6);
	
	cont = 0;
	contm = 0;
	if (n1 >= 0) {
		cont ++;
		contm = contm + n1;
	}
	
	if (n2 >= 0) {
		cont ++;
		contm = contm + n2;
	}
	
	if (n3 >= 0) {
		cont ++;
		contm = contm + n3;
	}
	
	if (n4 >= 0) {
		cont ++;
		contm = contm + n4;
	}
	
	if (n5 >= 0) {
		cont ++;
		contm = contm + n5;
	}
	
	if (n6 >= 0) {
		cont ++;
		contm = contm + n6;
	}
	
	media = contm/cont;
	
	printf("%d valores positivos\n",cont);
	printf("%.1lf\n",media);
	return 0;
 }
