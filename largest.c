#include <stdio.h>
int main()
{
 int a[20],i,max,min,pos1,pos2,n;
  printf("Enter Array Size:");
  scanf("%d",&n);
  printf("Enter Elements:");
   for(i=0;i<n;i++)
      {
       scanf("%d",&a[i]);
      }
   for(i=0;i<n;i++)
      {
       printf("%d\t",a[i]);
      }
  max=a[0];
  min=a[0];
   for(i=1;i<n;i++)
      {
       if(a[i]>max)
         {
          max=a[i];
          pos1=i;
         }
       if(a[i]<min)
         {
          min=a[i];
          pos2=i;   
         }
      }
  printf("\nMax is %d at the position %d\n",max,pos1);      
  printf("Min is %d at the position %d\n",min,pos2);
 return 0;
}         
