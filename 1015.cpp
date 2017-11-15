#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c,d,v;
	scanf("%f %f",&a,&b);
	scanf("%f %f",&c,&d);	
	v = sqrt((a - c) *  (a - c) + (b - d) * (b - d));
	printf("%.4f\n",v);
}

//Vinicius Mangueira Correia
