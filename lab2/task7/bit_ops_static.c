#include <stdio.h> //I worked with CJ on this task
#include <stdlib.h>

// Note, the bits are counted from right to left.
// Return the bit states of x within range of [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
void get_bits(unsigned x,
                 unsigned start,
                 unsigned end,
		 unsigned * a) {

   //return NULL;
    // YOUR CODE HERE
    // Returning NULL is a placeholder
    // get_bits receives an array a from caller and set a[i] = 1 when (i+start)-th bit
    // of x is 1, otherwise set a[i] = 0;

    int bit;

    for(int i = 0; i < (end - start) + 1; i++) //We both came up with each line here
    {
                                              //We constantly would try knew things and bounce off eachothers thoughts
                                              //until we came up with this final product

      bit = (x >> (start+i)) & 1;

      a[i] = bit;
//
      /*if(x<<start+i == 1)
      {
        a[i] = 1;
      }

      else
      {
        a[i] = 0;
        x<<start+i;
      }*/

    }

}
// Set the bits of x within range of [start, end], in which both are inclusive
// Assume 0 <= start & end <= 31
void set_bits(unsigned * x,
             unsigned start,
             unsigned end,
             unsigned *v) {

               int i;
               for(i = start; i <= end; i++)
               {
                 int y = 0b1 << i;

                 if(v[i - start] == 0)
                 {
                   *x = *x & ~y;
                 }

                 else
                 {
                   *x = *x | y;
                 }
               }
               //will shift here
    // YOUR CODE HERE
    // No return value
    // v points to an array of at least (end-start+1) unsigned integers.
    // if v[i] == 0, then set (i+start)-th bit of x zero, otherwise, set (i+start)-th bit of x one.
}

// Flip the bits of x within range [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
void flip_bits(unsigned * x,
              unsigned start,
              unsigned end) {
    // YOUR CODE HERE

    for(int i = start; i <= end; i++)
    {

    int y = 0b1 << i;
    *x = *x ^ y;

    }


}


/*
 * YOU CAN IGNORE THE REST OF THIS FILE
 */

/*
 * Tests that two arrays of size <size> are equal. Equal meaning that all the
 * elements in the arrays are equal.
 */
int array_equals(unsigned *arr1,
		unsigned *arr2,
		unsigned size) {

   int i;
   for (i = 0; i < size; i++) {
       if (arr1[i] != arr2[i]) {
           return 0;
       }
   }

   return 1;
}

/*
 * Prints an unsigned array as a bit string. This assumes that each integer
 * is only 0 or 1.
 */
void print_unsigned_array(unsigned *arr1,
		        unsigned size) {

    printf("0b");
    unsigned i;
    for (i = 0; i < size; i++) {
        printf("%u", arr1[i]);
    }
}

void test_get_bits(unsigned x,
                  unsigned s,
		  unsigned e,
                  unsigned * expected) {
    unsigned a[32];
    get_bits(x, s, e, a);
    if(!array_equals(a, expected, e - s + 1)) {
        printf("get_bits(0x%08x,%u,%u): ",x,s,e);
	print_unsigned_array(a, e - s + 1);
	printf(", expected ");
	print_unsigned_array(expected, e - s + 1);
	printf("\n");
    } else {
        printf("get_bits(0x%08x,%u,%u): ",x,s,e);
	print_unsigned_array(a, e - s + 1);
	printf(", correct\n");
    }
}

void test_set_bits(unsigned x,
                  unsigned s,
		  unsigned e,
                  unsigned * v,
                  unsigned expected) {
    unsigned o = x;
    set_bits(&x, s, e, v);
    if(x!=expected) {
        printf("set_bits(0x%08x,%u,%u,",o,s,e);
	print_unsigned_array(v, e - s + 1);
	printf("): 0x%08x, expected 0x%08x\n",x,expected);
    } else {
        printf("set_bits(0x%08x,%u,%u,%u): 0x%08x, correct\n",o,s,e,*v,x);
    }
}

void test_flip_bits(unsigned x,
                   unsigned s,
		   unsigned e,
                   unsigned expected) {
    unsigned o = x;
    flip_bits(&x, s, e);
    if(x!=expected) {
        printf("flip_bits(0x%08x,%u,%u): 0x%08x, expected 0x%08x\n",o,s,e,x,expected);
    } else {
        printf("flip_bits(0x%08x,%u,%u): 0x%08x, correct\n",o,s,e,x);
    }
}

int main(int argc,
         const char * argv[]) {
    printf("\nTesting get_bits()\n\n");
    unsigned expected;
    expected = 0;
    test_get_bits(0b1001110,0,0,&expected);
    expected = 1;
    test_get_bits(0b1001110,1,1,&expected);
    expected = 0;
    test_get_bits(0b1001110,5,5,&expected);
    expected = 1;
    test_get_bits(0b11011,3,3,&expected);
    expected = 0;
    test_get_bits(0b11011,2,2,&expected);
    expected = 0;
    test_get_bits(0b11011,9,9,&expected);

    unsigned expectedArr[] = {1,0,1,0};
    test_get_bits(0b111010101110, 3, 6, expectedArr);
    test_get_bits(0b01011111, 4, 7, expectedArr);
    test_get_bits(0b11110101, 0, 3, expectedArr);

    printf("\nTesting set_bits()\n\n");
    test_set_bits(0b1001110,2,2,&expectedArr[1],0b1001010);
    test_set_bits(0b1101101,0,0,&expectedArr[1],0b1101100);
    test_set_bits(0b1001110,2,2,expectedArr,0b1001110);
    test_set_bits(0b1101101,0,0,expectedArr,0b1101101);
    test_set_bits(0b1001110,9,9,&expectedArr[1],0b1001110);
    test_set_bits(0b1101101,4,4,&expectedArr[1],0b1101101);
    test_set_bits(0b1001110,9,9,expectedArr,0b1001001110);
    test_set_bits(0b1101101,7,7,expectedArr,0b11101101);

    test_set_bits(0b111111,0,3,expectedArr,0b110101);
    test_set_bits(0b111111,2,5,expectedArr,0b010111);
    test_set_bits(0b111111,1,4,expectedArr,0b101011);

    test_set_bits(0,0,3,expectedArr,0b0101);
    test_set_bits(0,2,5,expectedArr,0b010100);
    test_set_bits(0,1,4,expectedArr,0b01010);

    printf("\nTesting flip_bits()\n\n");
    test_flip_bits(0b1001110,0,0,0b1001111);
    test_flip_bits(0b1001110,1,1,0b1001100);
    test_flip_bits(0b1001110,2,2,0b1001010);
    test_flip_bits(0b1001110,5,5,0b1101110);
    test_flip_bits(0b1001110,9,9,0b1001001110);

    test_flip_bits(0b1010,0,3,0b0101);
    test_flip_bits(0b0101,0,3,0b1010);
    test_flip_bits(0b0,0,0,0b1);
    test_flip_bits(0b0,4,4,0b10000);
    test_flip_bits(0b0,0,5,0b111111);
    test_flip_bits(0b1111,0,4,0b10000);

    printf("\n");
    return 0;
}
