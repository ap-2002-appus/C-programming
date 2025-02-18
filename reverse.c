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
  printf("Reverse of %d is %d",orgi_num,rev);
  return 0;
  }
