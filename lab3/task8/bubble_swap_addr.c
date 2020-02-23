/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>


#define LEN 1200  /* max length of each string */

int main()
{
  int NUM;
  int i;

  printf("%s\n", "Enter # of Strings");
  scanf("%d", &NUM);
  printf("%d\n", NUM);
  char ** Strings =  malloc (NUM * sizeof(char *));
  for (i = 0; i < NUM; i++) // Fix this first, doesn't allow correct # of NUM
  {
  Strings[i] = (char * ) malloc (sizeof(char *));
  fgets(Strings[i], LEN -2, stdin);
  }
  
  puts("\nHere are the strings in the order you entered:");
  
    for(i = 0; i < NUM; i++)
    {
		printf("%s\n" , Strings[i]);
    }
    
 // for(i = 0; i < NUM; i++)
  //Bubble Sort
  char * temp = malloc (sizeof(char *)); 
  for (i = 0; i < NUM -1; i++)
  {

    for (int j = 0; j < LEN; j++)
    {
      
      if (Strings[i][j] < Strings[i+1][j]) // Fix this for not swapping
      {
          
          temp = Strings[i]; // The Swap
          Strings[i] = Strings[i+1];
          Strings[i+1] = temp;    
      }
      if (Strings[i][j] == Strings[i+1][j])
      {
          continue;
      }
    }
  }
  
  puts("\nIn alphabetical order, the strings are:");
    for(int i = 0; i < NUM; i++)
    {
    printf("%s\n" , Strings[i]);
    }
    free(temp);
    free(Strings);
}