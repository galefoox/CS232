/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, c;
  while(a != 0){

  printf("Enter radius (in mm):\n");
  scanf("%f", &r);

  a = PI * r * r;
  c = 2 * r * PI;
  
  if (a != 0){
	printf("Circle's area is %3.2f (sq in).\n", a);
	printf("It's circumference is %3.2f(in).\n", c);
             }
  else {
	printf("Exit\n");
	} 
}
}
