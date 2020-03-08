#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
<<<<<<< HEAD


typedef struct slist {
  struct snode *front; // front node
  struct snode *back;  // back node
}slist_t;

=======
#include "slist.h"


>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
/**
 * Allocates new slist dynamically.
 * 
 * @return pointer to the list
 */
slist_t *slist_create()
{
<<<<<<< HEAD
    slist_t * newlist = (slist_t*) malloc (sizeof(slist_t));
=======
    slist_t * newlist = (slist_t*) calloc (1,sizeof(slist_t));
  
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
    return newlist;

}
/** 
 * Inserts new node in slist after the last node.
 *
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a C string to store in new list node
 * returns a pointer to the newly added node
 */
<<<<<<< HEAD

snode_t* slist_add_back(slist_t *l, char *str) //type snode_t*
{
    snode_t * newNode = (snode_t*) malloc (sizeof(snode_t));
=======
snode_t* slist_add_back(slist_t *l, char *str)
{

    snode_t * newNode = (snode_t*) calloc (1,sizeof(snode_t));
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
    newNode -> str = (char *) malloc (strlen(str) * sizeof(char) + 1);
    strcpy(newNode -> str , str);

   if(l->back == NULL)
   {
      l->front = newNode;
      l->back = newNode;
<<<<<<< HEAD
       
=======

>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
   }

   if(l->front != NULL)
   {
       l->back->next = newNode;
       l->back = newNode;
   }

   return newNode;

<<<<<<< HEAD
    
=======

>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
}


/** 
 * Inserts new node in slist before the first node.
 *
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a C string to store in new list node
 * returns a pointer to the newly added node
 */
snode_t* slist_add_front(slist_t *l, char *str)
{
<<<<<<< HEAD
    snode_t * newNode = (snode_t*) malloc (sizeof(snode_t));
    newNode -> str = (char *) malloc (strlen(str) * sizeof(char) + 1);
    strcpy(newNode -> str , str);

   if(l->front != NULL)
   {
       newNode->next = l->front;
       l->front = newNode;
       
   }

   return newNode;

}

=======
  snode_t * newNode = (snode_t *) malloc (sizeof(snode_t));
  newNode -> str = (char *) malloc (strlen(str) * sizeof(char) + 1);
  strcpy(newNode -> str, str);
  newNode -> next = l -> front;
  l -> front = newNode;

  return newNode;
}
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
/**
 * Returns the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a string
 * @return struct snode* or NULL if no match
 */
<<<<<<< HEAD
snode_t* slist_find(slist_t *l, char *str);
   // snode_t * slistfind = (node_t *) malloc (sizeof(node_t));
   // slist_t * l = (node_t *) malloc (sizeof(node_t));
   // if (strcmp (l->front, str))
    //{

    //}
=======
snode_t* slist_find(slist_t *l, char *str)
{
  snode_t * listfind = l->front;
  
  while (listfind != NULL)
  {
    if (strcmp(listfind->str, str) == 0)
    {
      return listfind;
    }
    else if (strcmp(listfind->str, str) != 0)
    {
      listfind = listfind -> next;
    }
  }
  listfind = NULL;

  return listfind;
}
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e




/**
 * Deallocate a list and all snodes
 *
 * @param l pointer tot he list
 */
void slist_destroy(slist_t *l)
{
<<<<<<< HEAD
    snode_t* current = l->front; 
    snode_t* next; 
    while (current != NULL)  
    { 
        next = current->next; 
        free(current); 
        current = next; 
    } 
 
    l->front = NULL; 
}









=======
  snode_t * now = l->front;
  snode_t * listdestroy;
  while (now != NULL)
  {
    listdestroy = now -> next;
    free (now->str);
    free(now);
    now = listdestroy;
  }
  free(l);

}
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e

/**
 * Traverse the list and print the content of each node.
 *
 * @param l pointer to the list (non-NULL)
 */
void slist_traverse(slist_t *l){
<<<<<<< HEAD

  while (l->front != NULL)
    {
        printf("%s\n", l->front->str);
        l -> front = l -> front -> next;
=======
  snode_t * traverse = l->front;
  while (traverse != NULL )
    {

        printf("%s\n", traverse->str);
       
        traverse = traverse -> next;
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
    }


}


/**
 * Returns the number of elements in the list (nodes).
 *
 * @param l pointer to the list (non-NULL)
 */
uint32_t slist_length(slist_t *l)
{
<<<<<<< HEAD
    snode_t* temp = l->front;
    
    int count = 0;
    int* ptrCount = &count;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return *ptrCount;
}

















=======
  int count = 1;
  snode_t * pcount = l->front;
  while (pcount != l->back)
    {
      count++;
      pcount = pcount -> next;
    }
  return count;
}

>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
/**
 * Deletes the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @parap str pointer to a string
 * @return struct snode* or NULL if no match
 */
<<<<<<< HEAD
void slist_delete(slist_t *l, char *str) //change return type
{
    snode_t* pred = l->front;
=======
void slist_delete(slist_t *l, char * str) //change return type
{
    snode_t * pred = l->front;
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
    snode_t* temp = NULL;

    while(pred->next != NULL)
    {
        if(strcmp(pred->next->str, str) == 0)
        {
            temp = pred->next;
            pred->next = pred->next->next;
<<<<<<< HEAD
            free(temp);
=======
            free(temp->str);
            free(temp);
      
            
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e

        }
        else 
        {
            pred = pred->next;
<<<<<<< HEAD
    
        }

    }

    
  

}
=======

        }

    }
}
>>>>>>> 3d562886ea51dc99546bf17b02a2b7f2d106a55e
