#include<stdio.h>
#include<string.h>
int main()
{
 char str1[30],str2[30];
 printf("Enter the text:");
 scanf("%s",str1);
 printf("Enter the text:");
 scanf("%s",str2);
  if(strcmp(str1,str2)==0)
  {
   printf("Strings are the same");
  }
  else
  {
   printf("Strings are not same");
  }
  return 0;
  } 
 
