#include<stdio.h>
int main()
{
 char word[50];
 int i=0,vcount=0,ccount=0;
 printf("Enter the string:");
 scanf("%s",word);
 for(i=0;word[i]!='\0';i++)
 { 
  if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
  {
   vcount++;
  }
  else
  {
   ccount++;
  }
 }
  printf("%d\n",vcount);
  printf("%d\n",ccount);
 
 return 0;
}
