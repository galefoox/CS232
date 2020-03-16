#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _snode_H_
#define _snode_H_

typedef struct snode snode_t;

//TODO: change prototypes of functions to remove
//length
snode_t *snode_create(char *s) ; 
void snode_destroy(snode_t * s) ;

 
 #endif