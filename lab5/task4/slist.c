#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct slist {
  struct snode *front; // front node
  struct snode *back;  // back node
}slist_t;

/**
 * Allocates new slist dynamically.
 * 
 * @return pointer to the list
 */
slist_t *slist_create()
{
    slist_t * newlist = (slist_t*) malloc (sizeof(slist_t));
    return newlist;

}
/** 
 * Inserts new node in slist after the last node.
 *
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a C string to store in new list node
 * returns a pointer to the newly added node
 */

snode_t* slist_add_back(slist_t *l, char *str) //type snode_t*
{
    snode_t * newNode = (snode_t*) malloc (sizeof(snode_t));
    newNode -> str = (char *) malloc (strlen(str) * sizeof(char) + 1);
    strcpy(newNode -> str , str);

   if(l->back == NULL)
   {
      l->front = newNode;
      l->back = newNode;
       
   }

   if(l->front != NULL)
   {
       l->back->next = newNode;
       l->back = newNode;
   }

   return newNode;

    
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

/**
 * Returns the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a string
 * @return struct snode* or NULL if no match
 */
snode_t* slist_find(slist_t *l, char *str);
   // snode_t * slistfind = (node_t *) malloc (sizeof(node_t));
   // slist_t * l = (node_t *) malloc (sizeof(node_t));
   // if (strcmp (l->front, str))
    //{

    //}




/**
 * Deallocate a list and all snodes
 *
 * @param l pointer tot he list
 */
void slist_destroy(slist_t *l)
{
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










/**
 * Traverse the list and print the content of each node.
 *
 * @param l pointer to the list (non-NULL)
 */
void slist_traverse(slist_t *l){

  while (l->front != NULL)
    {
        printf("%s\n", l->front->str);
        l -> front = l -> front -> next;
    }


}


/**
 * Returns the number of elements in the list (nodes).
 *
 * @param l pointer to the list (non-NULL)
 */
uint32_t slist_length(slist_t *l)
{
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

















/**
 * Deletes the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @parap str pointer to a string
 * @return struct snode* or NULL if no match
 */
void slist_delete(slist_t *l, char *str) //change return type
{
    snode_t* pred = l->front;
    snode_t* temp = NULL;

    while(pred->next != NULL)
    {
        if(strcmp(pred->next->str, str) == 0)
        {
            temp = pred->next;
            pred->next = pred->next->next;
            free(temp);

        }
        else 
        {
            pred = pred->next;
    
        }

    }

    
  

}