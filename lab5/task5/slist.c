#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "slist.h"


/**
 * Allocates new slist dynamically.
 * 
 * @return pointer to the list
 */
slist_t *slist_create()
{
    slist_t * newlist = (slist_t*) calloc (1,sizeof(slist_t));
  
    return newlist;

}
/** 
 * Inserts new node in slist after the last node.
 *
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a C string to store in new list node
 * returns a pointer to the newly added node
 */
snode_t* slist_add_back(slist_t *l, char *str)
{

    snode_t * newNode = (snode_t*) calloc (1,sizeof(snode_t));
    newNode -> data = (char *) malloc (strlen(str) * sizeof(char) + 1);
    strcpy(newNode -> data , str);

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
  snode_t * newNode = (snode_t *) malloc (sizeof(snode_t));
  newNode -> data = (char *) malloc (strlen(str) * sizeof(char) + 1);
  strcpy(newNode -> data, str);
  newNode -> next = l -> front;
  l -> front = newNode;

  return newNode;
}
/**
 * Returns the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a string
 * @return struct snode* or NULL if no match
 */
snode_t* slist_find(slist_t *l, char *str)
{
  snode_t * listfind = l->front;
  
  while (listfind != NULL)
  {
    if (strcmp(listfind->data, str) == 0)
    {
      return listfind;
    }
    else if (strcmp(listfind->data, str) != 0)
    {
      listfind = listfind -> next;
    }
  }
  listfind = NULL;

  return listfind;
}




/**
 * Deallocate a list and all snodes
 *
 * @param l pointer tot he list
 */
void slist_destroy(slist_t *l)
{
  snode_t * now = l->front;
  snode_t * listdestroy;
  while (now != NULL)
  {
    listdestroy = now -> next;
    free (now->data);
    free(now);
    now = listdestroy;
  }
  free(l);

}

/**
 * Traverse the list and print the content of each node.
 *
 * @param l pointer to the list (non-NULL)
 */
void slist_traverse(slist_t *l){
  snode_t * traverse = l->front;
  while (traverse != NULL )
    {

        printf("%s\n", (char *)traverse->data);
       
        traverse = traverse -> next;
    }


}


/**
 * Returns the number of elements in the list (nodes).
 *
 * @param l pointer to the list (non-NULL)
 */
uint32_t slist_length(slist_t *l)
{
  int count = 1;
  snode_t * pcount = l->front;
  while (pcount != l->back)
    {
      count++;
      pcount = pcount -> next;
    }
  return count;
}

/**
 * Deletes the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @parap str pointer to a string
 * @return struct snode* or NULL if no match
 */
void slist_delete(slist_t *l, char * str) //change return type
{
    snode_t * pred = l->front;
    snode_t* temp = NULL;

    while(pred->next != NULL)
    {
        if(strcmp(pred->next->data, str) == 0)
        {
            temp = pred->next;
            pred->next = pred->next->next;
            free(temp->data);
            free(temp);
      
            

        }
        else 
        {
            pred = pred->next;

        }

    }
}
