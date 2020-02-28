#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BUF 1024


int main () {

  int len, i;
  char buf[MAX_BUF];


int chars = 0;
int lines = 0;
int whiteSpaces = 0;
int words = 0;
int upperCase = 0; 
int lowerCase = 0; 
int digits = 0;



do
{

  char* input = fgets(buf, MAX_BUF, stdin);
  len = strlen(buf);
  i = 0;

  if( input == NULL)
  {
    break;
  }


  do
  {

  
   if  ((buf[i] >= 'A') && (buf[i] <= 'Z')) 
    {
      
      upperCase++;
      chars++;
      
      
    }

    else if  ((buf[i] >= 'a') && (buf[i] <= 'z')) 
     {
      
       lowerCase++;
       chars++;
       
       
     }

    else if((buf[i] == ' ') || (buf[i] == '\t'))
     {
       
       whiteSpaces++;
       chars++;
     }


     else if(buf[i] >= 48 && buf[i] <= 57 )
     {
        digits++;
        chars++;
        
     }

    else if(buf == NULL)
    {
      break;
    }

    else
    {
      chars++;
    }

    


    len--;
    i++;
  } while (len > 1);

  if(buf[i] == '\n')
  {
    lines++;
  }





} while (1);

chars+=lines;
words = whiteSpaces + lines;

 



  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    //printf("%c: %d\n", 65+i, letter_frequenc[i]);

    

  }
  
  printf("%s %d" ,"chars: ",  chars);
    printf("%s %d" ," words: ",  words);
    printf("%s %d" ," lines: ",  lines);
    printf("%s %d" ," whitespace: ",  whiteSpaces);
    printf("%s %d" ," uppercase: ",  upperCase);
    printf("%s %d" ," lowercase: ",  lowerCase);
    printf("%s %d" ," digits: ",  digits);
}