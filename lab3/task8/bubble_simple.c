/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>


#define LEN 1200  /* max length of each string */

int main()
{
  int NUM;
  int i;
  char * temp;

  puts("Enter # of Strings");
  scanf("%d", &NUM);
  printf("%d\n", NUM);
  char ** Strings =(char **) malloc (LEN *sizeof(char **));
  temp = malloc (sizeof(char *)); 

  
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
  
  for (int i = 0; i < NUM; i++)
  {
    for (int j = 0; j < NUM - i - 1; j++)
    {
      if (strcmp(Strings[j], Strings[j+1]) > 0)
      {
      strcpy(temp, Strings[j]);
      strcpy(Strings[j], Strings[j+1]);
      strcpy(Strings[j+1], temp);
      }
    }
  }
  
  puts("\nIn alphabetical order, the strings are:");
    for(int i = 0; i < NUM; i++)
    {
    printf("%s\n" , Strings[i]);
    }

  return (0);
}