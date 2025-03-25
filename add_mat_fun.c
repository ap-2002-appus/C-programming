# include<stdio.h>
# define max 10
void inputmatrix(int mat[max][max],int r,int c)
 {
  printf("Enter the elements of the matrix:\n");
  for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
  scanf("%d",&mat[i][j]);
  }}}
  
  void addmatrix (int A[max][max],int B[max][max],int result[max][max],int r,int c)
  {
   for(int i=0;i<r;i++){
   for(int j=0;j<c;j++){
   result[i][j]=A[i][j]+B[i][j];
   }}}
   
  void displaymatrix (int mat[max][max],int r,int c)
  {
   printf("Resultant matrix:");
   for(int i=0;i<r;i++){
   for(int j=0;j<c;j++){
   printf("%d",mat[i][j]);
   }
   printf("\n");
   }}
   int main()
   {
   int r,c;
   int A[max][max],B[max][max],result[max][max];
   printf("Enter the number of rows and columns:");
   scanf("%d%d",&r,&c);
   printf("Enter first matrix:\n");
   inputmatrix(A,r,c);
   printf("Enter second matrix:\n");
   inputmatrix(B,r,c);
   addmatrix(A,B,result,r,c);
   return 0;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
