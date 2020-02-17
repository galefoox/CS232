#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i;
  char buf[MAX_BUF];


  fgets(buf, MAX_BUF, stdin);
  len = strlen(buf);
  i = 0;
  do
  {
    if ((buf[i] >= 'A' || buf[i] >= 'a') && (buf[i] <= 'Z' || buf[i] <= 'z'))
    letter_frequency[i] += 1;

    len--;
    i++;
  } while (len > 1);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
}
