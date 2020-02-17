#include <stdio.h>


int main(int argc, char *argv[]) {
 //example:
   char str[100];
   int a, n = 0;
 

   while ((a = getchar()) != EOF && n < a) {

     if(a <= 'z' && a >= 'a') //checks ascii value
     {
       a = a - 'a' + 'A'; //changes a --> A if satisfies condition
     }

      str[n] = a; //fills array of characters with lowercase to uppercase + the rest of the characters unchanged
      ++n;
    


   }

   for (int i = 0; i < n; ++i){ //prints the array of characters
      putchar(str[i]);

	
   }
   puts("");
   return 0;



  //  return 0;
}
