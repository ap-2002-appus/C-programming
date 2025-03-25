#include <stdio.h>
int is_palindrome(int n)
{
 int rev=0,temp=n;
 while(temp!=0)
 {
   rev=rev*10 + temp%10;
   temp=temp/10;
 }
  return (rev==n);
}
 int main()
 {
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  if(is_palindrome(num))
  printf("number is palidrome");
  
  else
   printf("number is not palindrome");
   return 0;
   }
