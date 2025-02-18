#include <stdio.h>
int main()
 {
  int num, i=0,fact=1;
  printf("Enter the Number:");
  scanf("%d",&num);
  i=num;
  while(i>0)
  {
   fact=fact*i;
   i--;
  }
  printf("The factorial of a given number is:%d",fact);
 return 0;
 }
  
  
 
