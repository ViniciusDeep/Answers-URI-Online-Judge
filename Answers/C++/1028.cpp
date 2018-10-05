//Vinicius Mangueira
#include <stdio.h>

int main () {
    int resto,x,y,n;

    scanf ("%d",&n);

    while (n > 0) {
        scanf ("%d %d",&x,&y);

        if (x < y) {
            int temp = x;
            x = y;
            y = temp;
        }

        if (x % y == 0) {
            printf("%d\n", y);
        } else {
            while (x % y != 0) {
                resto = x % y;
                x = y;
                y = resto;
            }

            printf ("%d\n",resto);
        }
        n--;
   }

   return 0;
}
