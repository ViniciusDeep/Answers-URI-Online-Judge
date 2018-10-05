#include<stdio.h>

int main(){
    long int n, h, m, t;
    scanf("%ld",&n);
    h=n/3600;
    t=n%3600;
    m=t/60;
    t=t%60;
    printf("%ld:%ld:%ld\n",h,m,t);
    return 0;
}

//Vinicius Mangueira Correia
