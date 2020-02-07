/*  Example: C program to find area of a circle */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
  int condition = 1;
  float r, a, c;
  //int condition;

  //printf("Enter radius (in mm):\n");
  //scanf("%f", &r);





    printf("Enter radius (in mm):\n");
    scanf("%f", &r);

    while (r != 0)
    {

      a = (PI * (r / 25.4) * (r / 25.4));
      c = (2 * PI * (r / 25.4));

      printf("Circle's area is %3.2f (sq in).\n", a);
      printf("Circle's circumference is %3.2f (in). \n" , c);

      printf("Enter radius (in mm):\n");
      scanf("%f", &r);
    }

      printf("Exit\n");


/*  while(condition)
  {
    if(r = 0)
    {

      condition = 0;
      exit(0);
    }

    else
    {

      //printf("Enter radius (in mm):\n");
      scanf("%f", &r);

      a = (PI * (r / 25.4) * (r / 25.4));
      c = (2 * PI * (r / 25.4));

      printf("Circle's area is %3.2f (sq in).\n", a);
      printf("Circle's circumference is %3.2f (in). \n" , c);
    }

  }*/


}
