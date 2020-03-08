#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _snode_H_
#define _snode_H_

<<<<<<< HEAD

=======
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
typedef struct snode {
  //TODO: change str to dynamic allcoation
  char * str;

  struct snode *next;
}snode_t;

//TODO: change prototypes of functions to remove
//length
snode_t *snode_create(char *s) ; 
void snode_destroy(snode_t * s) ;

<<<<<<< HEAD
#endif /* _snode_H_ */
=======
 
 #endif
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
