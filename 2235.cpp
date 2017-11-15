#include <stdio.h> 

int main() {

   int a, b, c;
   
   scanf("%d%d%d",& a ,& b,& c);
   

   
   if(a + b == c) {
      printf("S\n");
   }
   
   else if(a + c == b ) {
      printf("S\n");
   }
   
   else if(b + c == a) {
      printf("S\n");
   
   }
   
   else if(a == b) {
      printf("S\n");
   
   }
  
   else if(b == c) {
      printf("S\n");
   
   }  
  
  else if(a == c) {
      printf("S\n");
   
   }  
   
  else {
     printf("N\n");
  } 
  
//Vinicius Mangueira Correia
}
