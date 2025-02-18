#include <stdio.h>
int main()
 {
  int num,rev=0,rem,orgi_num;
  printf("Enter Number:");
  scanf("%d",&num);
  orgi_num=num;
  for( ;num!=0;num=num/10)
  {
  rem=num%10;
  rev=rev*10+rem;
  }
   if (orgi_num==rev)
   {
   printf("%d is a palindrome",orgi_num);
   }
   else
   {
    printf("%d is not a palindrome",orgi_num);
   }
 return 0;
}
 
  
