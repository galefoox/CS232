#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i, count;
  char buf[MAX_BUF];
//  char letter;


  fgets(buf, MAX_BUF, stdin);
  len = strlen(buf);
  i = 0;

  //count = 0;

  do
  {

  //  letter_frequency[i] = letter - 'a' + 'A';
   if  ((buf[i] >= 'A') && (buf[i] <= 'Z')) //^ ((buf[i] >= 'a') && (buf[i] <= 'z')) )
    {
      //letter = buf[i];
      count = buf[i] - 'A';
      letter_frequency[count] += 1;
      i++;


    }

    if  ((buf[i] >= 'a') && (buf[i] <= 'z')) //^ ((buf[i] >= 'a') && (buf[i] <= 'z')) )
     {
       //letter = buf[i];
       count = buf[i] - 'a';
       letter_frequency[count] += 1;
       i++;

     }
    //letter_frequency[i] = count;

  /*  if(buf == NULL)
    {
      break;
    }
    */

    len--;
    //i++;
  } while (len > 1);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
}
