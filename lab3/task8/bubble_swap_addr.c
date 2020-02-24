/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>


#define LEN 1200  /* max length of each string */

int main()
{
  int NUM;
  int i;
  int whileLoop = 0;
  char * temp;

  puts("Enter # of Strings");
  scanf("%d", &NUM);
  printf("%d\n", NUM);
  char ** Strings =(char **) malloc (LEN *sizeof(char **));
  
  for (i = 0; i < NUM; i++)
  {
    Strings [i] = (char *) malloc (LEN *sizeof(char *));
    scanf("%s", Strings[i]);
  }
  
  puts("\nHere are the strings in the order you entered:");

    for(i = 0; i < NUM; i++)
    {
    printf("%d\n", i);
		printf("%s\n" , Strings[i]);
    }
  
  //Bubble Sort
  while (whileLoop < NUM)
  {
  temp = malloc (sizeof(char *)); 
  for (i = 0; i < NUM -1; i++)
  {
    if (Strings[i][0] > Strings[i+1][0])
      {
        temp = Strings[i]; 
        Strings[i] = Strings[i+1];
        Strings[i+1] = temp;    
      }
    if (Strings[i][0] == Strings[i+1][0])
    {
    for (int j = 0; j < LEN; j++)
      {
        if (Strings[i][j] > Strings [i+1][j])
        {
          temp = Strings[i]; 
          Strings[i] = Strings[i+1];
          Strings[i+1] = temp;    
        }
        else if (Strings[i][j] == Strings[i+1][j])
        {
          continue;
        }
      }
    }
  }
  whileLoop++;
  
  }
  
  puts("\nIn alphabetical order, the strings are:");
    for(int i = 0; i < NUM; i++)
    {
    printf("%s\n" , Strings[i]);
    }

    free(Strings);
    free(temp);
  return (0);
}