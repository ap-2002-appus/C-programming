#include <stdio.h>
int main()
{
 float height;
 int roll_no,age;
 char grade;
  printf("Enter the roll number:");
  scanf("%d",&roll_no);
  printf("Enter the age:");
  scanf("%d",&age);
  printf("Enter the height:");
  scanf("%f",&height);
  printf("Enter the grade:");
  scanf(" %c",&grade);
  printf("The roll_number is:%d\n",roll_no);
  printf("The age is:%d\n",age);
  printf("The height is:%f\n",height);
  printf("The grade is:%c\n",grade);
  return 0;
 } 
  
