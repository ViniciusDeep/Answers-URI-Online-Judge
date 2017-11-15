#include <stdio.h>
int main()
{
    double A,B,C,D;
    scanf ("%lf%lf%lf", &A, &B, &C);
    if(A<B+C&&B<A+C&&C<A+B)
        printf("Perimetro = %.1lf\n", A+B+C);
    else
    {
        D=.5*(A+B)*C;
        printf("Area = %.1lf\n",D);
    }
    return 0;
}

//Vinicius Mangueira Correia
