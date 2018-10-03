#include <stdio.h>
#include <math.h>

int prime(int x)
{
    int i, root;
    if(x<2)
        return 0;
    if(x==2)
        return 1;
    if(x%2==0)
        return 0;
    root=sqrt(x);
    for(i=3; i<=root; i=i+2)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int X,a,N;
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        scanf("%d", &X);
        if(1==prime(X))
            printf("%d eh primo\n", X);
        else if(0==prime(X))
            printf("%d nao eh primo\n", X);
    }
    return 0;
}
