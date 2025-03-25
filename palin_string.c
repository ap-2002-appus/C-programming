#include <stdio.h>
#include<string.h>
int is_palindrome(char str[])
{
 int len=strlen(str);
 int i;
 for(i=0;i<len/2;i++)
 {
  if(str[i]!=str[len-i-1])
  return 0;
 }
 return 1;
}
 int main()
 {
  char str[100];
  printf("Enter the string:");
  scanf("%s",str);
  if(is_palindrome(str))
  printf("string is palindrome");
  else
  printf("string is not palindrome");
  return 0;
 }
