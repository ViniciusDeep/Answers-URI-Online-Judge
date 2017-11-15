#include<stdio.h>
#include<cstdio>
#include<cmath>
int main(){
  double a,b,c,r1,r2,d;
scanf("%lf %lf %lf",&a,&b,&c);
d=(pow(b,2)-(4*a*c));
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
if(a!=0 && d>0)
{
    printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
}
else{
    printf("Impossivel calcular\n");
}
    return 0;
}
//Vinicius Mangueira Correia


