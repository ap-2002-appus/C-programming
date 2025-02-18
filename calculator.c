#include <stdio.h>
int main()
{ 
 int a,b,sum,sub,product,divide,mode;
 printf("Enter Two Numbers:");
 scanf("%d%d",&a,&b);
 char op;
 printf("Enter the operator:");
 scanf(" %c",&op);
 switch(op)
 
  {
   case'+':
          sum=a+b;
          printf("The Result is %d",sum);
          break;
   case'-':
          sum=a-b;
          printf("The Result is %d",sub);
          break;
   case'*':
          sum=a*b;
          printf("The Result is %d",product);
          break;  
   case'/':
          sum=a/b;
          printf("The Result is %d",divide);
          break; 
   case'%':
          sum=a%b;
          printf("The Result is %d",mode);
          break; 
   default:
          printf("Invlid Entry");
  }
 return 0;
}          
          
          
                                         
