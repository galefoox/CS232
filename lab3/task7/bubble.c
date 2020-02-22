/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>


#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

int main()
{
  char Strings[NUM][LEN];
  char temp[NUM][LEN];
      
  for(int i = 0; i < NUM ; i++)
	{
    
    fgets(Strings[i], LEN -2, stdin);

  }

  printf("Please enter %d strings, one per line:\n", NUM);

  //Write a for loop here to read NUM strings.



/*	Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */

  puts("\nHere are the strings in the order you entered:");

	for(int i = 0; i < NUM ; i++)
	{
		printf("%s" , Strings[i]);
	}

  /* Write a for loop here to print all the strings. */


  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order*/
  int i;
  int j;
  int l = 0;

  while(l < NUM)
  {
    for (i = 0; i < NUM; i++)
    {
      if (Strings[i][0] > Strings[i+1][0]) //Checks if First row first char is larger than 2nd row
      {
        for (j = 0; j < LEN; j++)
        {
           temp[0][j] = Strings[i][j]; 
           Strings[i][j] = Strings[i+1][j];
           Strings[i+1][j] = temp[0][j];
        
        
        }
      }
      if (Strings[i][0] == Strings[i+1][0])
      {
        for (j = 1; j < LEN; j++) // Checks if the remaining characters
        {
          if (Strings[i][j] == Strings[i+1][j]) //Skips if they're the same 
          {
            continue;
          }

          else if (Strings[i][j] > Strings[i+1][j]) // Swaps if they're different
          {
           temp[0][j] = Strings[i][j]; 
           Strings[i][j] = Strings[i+1][j];
           Strings[i+1][j] = temp[0][j];
          }
        }
      }
    }
    l++;
  }
  
  

 //printf("%s", temp[i]);
  

    //heheh

     /*Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) The swap of two strings must be done by copying them
            (using a temp variable of your choice) one character at a time,
            without using any C string library functions.
            That is, write your own while/for loop to do this.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */
 



  /* Output sorted list */
  
  puts("\nIn alphabetical order, the strings are:");
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

  for(int i = 0; i < NUM ; i++) //WE HAD LEN INSTEAD OF NUM = SEGMENTATION FAULT
	{
    printf("%s" , Strings[i]);
	}

}
//FIX SEGMENTATION FAULT -> IF WE ENTER A STRING LARGER THAN NUM VALUE, IT GIVES US THAT, FIX IT 