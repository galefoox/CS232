#include <stdio.h>


int main(int argc, char *argv[]) {
 //example:
   char str[10090];
   int ch, n = 0;
 

   while ((ch = getchar()) != EOF && n < ch) {

     if(ch <= 'z' && ch >= 'a') //checks ascii value
     {
       ch = ch - 'a' + 'A'; //changes a --> A if satisfies condition
     }

      str[n] = ch; //fills array of characters with lowercase to uppercase + the rest of the characters unchanged
      ++n;
    


   }

   for (int i = 0; i < n; ++i){ //prints the array of characters
      putchar(str[i]);
  
   }
   puts("");
   return 0;


  //  return 0;
}
