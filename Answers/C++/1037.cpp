#include <stdio.h>
int main()
{
    double a;
    scanf ("%lf",&a);
    if(a<0||a>100)
        printf ("Fora de intervalo\n");
    else if(a>=0&&a<=25)
        printf ("Intervalo [0,25]\n");
    else if(a>25&&a<=50)
        printf ("Intervalo (25,50]\n");
    else if (a>50&&a<=75)
        printf ("Intervalo (50,75]\n");
    else if (a>75&&a<=100)
        printf ("Intervalo (75,100]\n");
    return 0;
}
//Vinicius Mangueira Correia
