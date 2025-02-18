#include<stdio.h>
int main()
{
 int A[10][10],B[10][10],result[10][10],row1,col1,row2,col2,i,j,k;
 printf("Enter the number of rows and columns of matrix 1:");
 scanf("%d%d",&row1,&col1);

 printf("Enter elements of matrix1:\n");
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
     {
      scanf("%d",&A[i][j]);
     }
 }
 
 printf("Enter the number of rows and columns of matrix 2:");
 scanf("%d%d",&row2,&col2);
 printf("Enter elements of matrix2:\n");
  if(col1!=row2)
    {
     printf("Multiplication is not possible");
    }
    
 for(i=0;i<row2;i++)
 {
  for(j=0;j<col2;j++)
     {
      scanf("%d",&B[i][j]);
     }
 }
 
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col2;j++)
     {
      result[i][j]=0;
      for(k=0;k<col1;k++)
         {
          result[i][j] += A[i][k] *B[k][j];
         }
     } 
 }    
  
 printf("Matrix 1:\n");
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
     {
      printf("%d\t",A[i][j]);
     }
      printf("\n");
 }  
 
 printf("Matrix 2:\n");
 for(i=0;i<row2;i++)
 {
  for(j=0;j<col2;j++)
     {
      printf("%d\t",B[i][j]);
     }
      printf("\n");
 }     
 
 printf("Product of matrices:\n");
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col2;j++)
     {
      printf("%d\t",result[i][j]);
     }
      printf("\n");
 }  
 
 return 0;
}   
