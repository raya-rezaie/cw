#include<stdio.h>
int main() 
{ 
   int sum = 0; 
   int n = 50; 
   while(n--) 
   { 
      int x; 
      scanf("%d", &x); 
      sum = sum + x; 
   } 
   printf("%d", sum); 
} 
