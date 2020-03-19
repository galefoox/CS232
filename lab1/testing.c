#include <stdlib.h>
#include <stdio.h>

unsigned int double_it(unsigned int x)
{
    x = x * 3;
    printf("This is in double it: x = %d\n" , x);
    printf("Address of local var x is %p\n\n" , &x); 
    return x;
}

unsigned int double_itPtr(unsigned int *x)
{
    *x = *x * 3;
    printf("This is in double itPtr: x = %d\n" , *x);
    printf("Address of pointer in double itPtr: is %p\n\n\n" , &x); 
    return *x;
}



int main()
{
   /* unsigned int y = 2;
    unsigned int z = 2;

    printf("This is in main using double it PTR: %d\n" , double_itPtr(&z));
    printf("Address of z ptr is %p\n" , &z); 
    printf("This is value of z after method: %d\n\n" , z);

    printf("This is in main using double it: %d\n" , double_it(y));
    printf("Address of local var y is %p\n" , &y); 
    printf("This is the value of y after method: %d\n\n" , y);


    return 0;*/


    char  string[]="BADGERS";
    char* ptr=string;

  *ptr=*ptr+2; 
  printf("*ptr = *ptr + 2 : %c\n",*ptr);


  ptr=ptr+2;
  printf("ptr = ptr + 2: %c\n",*ptr);
  ptr--;
  printf("ptr-- :%c\n",*ptr);
  ptr=string;
  printf("ptr = string: %c\n",*ptr);
  return 0;


}