#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
/*#ifndef _snode_H_
#define _snode_H_*/

=======
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
snode_t *snode_create(char *s) 
{   
    
    snode_t * space = (snode_t *) malloc (sizeof(snode_t));
   
    space -> str = (char *) malloc (strlen(s) * sizeof(char) + 1);
    strcpy(space -> str, s);
    space -> next = NULL;//TODO: implement snode_create, change the prototype to
<<<<<<< HEAD
 //match with header file
 //return node;
  return space;
}
void snode_destroy(snode_t * s) 
{
snode_t* snode = s;

 free(snode->str);
 free(s);
 //TODO: implement snode_destroy
 
}

//#endif /* _snode_H_ */



























/*#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>

typedef struct snode node_t;

struct snode* snode_create(char *s) 
{
 //TODO: implement snode_create, change the prototype to
 //match with header file
 //return node;


    node_t* snode = (node_t*) malloc (sizeof(node_t)); //allocates memory for a new snode
    
    //this creates a buffer of some length and takes input from user and finds the length of the string inputted
    int MAX = 101;
    char buf[MAX];
    fgets(buf, MAX, stdin);
    int lenOfStr = strlen(buf); 
    

    //allocated just enough space for the string in the struct (based on the length of the word) 
    //also sets string inputted into str pointer of snode
    snode->str = (char*) malloc (sizeof(char) * lenOfStr + 1);
    strcpy(snode->str , buf);

    snode->next = NULL;

    return snode;

}
void snode_destroy(struct snode * n) 
=======
 //match with header file
 //return node;
  return space;
}
void snode_destroy(snode_t * s) 
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
{
snode_t* snode = s;

<<<<<<< HEAD
    node_t* snode = n;

    free(snode->str);
    free(snode); 

 //TODO: implement snode_destroy
 
}*/
 
=======
 free(snode->str);
 free(s);
 //TODO: implement snode_destroy
 
}
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
