#include <stdio.h>
# define PI 3.142
# define Area_of_circle(r) (PI*r*r)
# define Surface_Area_of_cylinder(r,h) (2*PI*r*(r+h))
int main()
{ 
 float r,h,area,surface_area;
 printf("Enter radius of circle and cylinder:");
 scanf("%f",&r);
 printf("Enter height of  cylinder:");
 scanf("%f",&h);
 area=Area_of_circle(r);
 surface_area=Surface_Area_of_cylinder(r,h);
 printf("The area of circle is :%.2f\n",area);
 printf("The area of cylinder is :%.2f\n",surface_area);
 return 0;
}
 
