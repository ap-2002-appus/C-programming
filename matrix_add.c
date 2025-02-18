#include<stdio.h>
int main()
{
 int mat1[10][10],mat2[10][10],result[10][10],row,col,i,j;
 printf("Enter the number of rows:");
 scanf("%d",&row);
  printf("Enter the number of columns:");
 scanf("%d",&col);
 
 printf("Enter elements of matrix1:\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
     {
      scanf("%d",&mat1[i][j]);
     }
 }
 
 printf("Enter elements of matrix2:\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
     {
      scanf("%d",&mat2[i][j]);
     }
 }
 
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
     {
      result[i][j] = mat1[i][j] + mat2[i][j];
     } 
 }
 
 printf("Matrix 1:\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
     {
      printf("%d\t",mat1[i][j]);
     }
      printf("\n");
 }  
 
 printf("Matrix 2:\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
     {
      printf("%d\t",mat2[i][j]);
     }
      printf("\n");
 }     
 
 printf("Resultant Matrix:\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
     {
      printf("%d\t",result[i][j]);
     }
      printf("\n");
 }  
 
 return 0;
}   
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
     
