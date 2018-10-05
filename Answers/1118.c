#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h=1,x=1,y=1,z=1;
    for(h=1;;h=1,x=1,y=1,z=1)
    {
        scanf("%lf",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
            continue;
        }
        while(x==1)
        {
            scanf("%lf",&b);
            if(b<0 || b>10)
            {
                printf("nota invalida\n");
                continue;
            }
            x+=2;
        }
        c=(a+b)/2.0;
        printf("media = %.2lf\n",c);
        printf("novo calculo (1-sim 2-nao)\n");
        while(y==1)
        {
            scanf("%lf", &g);
            if(g<1 || g>2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            y+=2;
        }
        if(g==2)
            break;
    }
    return 0;
}
