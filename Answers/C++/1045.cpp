#include <stdio.h>
int main()
{
    double ara[3];
    int a,b,c=1;
    double d,e,f,g,h,A,B,C,i,j,k,l,m,n,o,p;
    scanf("%lf%lf%lf", &ara[0], &ara[1], &ara[2]);
    for(a=0; a<3; a++)
    {
        for(b=c; b<3; b++)
        {
            if(ara[a]<ara[b])
            {
                e=ara[b];
                ara[b]=ara[a];
                ara[a]=e;
            }
        }
        c++;
    }
    A=ara[0]; B= ara[1]; C=ara[2];
    d=B+C;
    i=B*B+C*C;
    j=A*A;

    if(A>=d)
        printf("NAO FORMA TRIANGULO\n");
    else if(i==j)
        printf("TRIANGULO RETANGULO\n");
    else if(i<j)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(i>j)
        printf("TRIANGULO ACUTANGULO\n");
    if(A==B && B==C)
        printf("TRIANGULO EQUILATERO\n");
    else if(A==B || B==C || A==C)
        printf("TRIANGULO ISOSCELES\n");
    return 0;
}
//Vinicius Mangueira Correia
