#include<stdio.h>
#include<stdlib.h>
#include "snode.h"
typedef struct snode node_t;

node_t* setup() {
    node_t* head ;//head declared for you



    //Allocate three more pointers
    node_t* node1;
    node_t* node2;
    node_t* node3;

    //head for the first Node, and temporary pointers node1, node2 and node3
    //Allocate three node pointees and store references to them in the three pointers
    node1 = (node_t*) malloc (sizeof(node_t));
    node2 = (node_t*) malloc (sizeof(node_t));
    node3 = (node_t*) malloc (sizeof(node_t));

    //Dereference each pointer to store the appropriate number into the value field in its pointee.
    //Dereference each pointer to access the .next field in its pointee, 
    //and use pointer assignment to set the .next field to point to the appropriate Node. 
    
    head = node1;
   
    strcpy(node1->str, "hello"); //dereferencing -> this is the same as doing (*node1).str
    node1->length = 5;
    node1->next = node2;

    strcpy(node2->str, "there");
    node2->length = 5;
    node2->next = node3;

    strcpy(node3->str, "prof");
    node3->length = 4;
    node3->next = NULL;

   

   return head;
}

<<<<<<< HEAD
void teardown(node_t* head) {

    node_t* node1 = head->next;
    node_t* node2 = node1->next;
    node_t* node3 = node2->next;

    free(node3);
    free(node2);
    free(node1);
   
   
=======
void teardown(/*what parameter?*/) {
    //TODO: free all dynamic memory you requested.
    //Please complete the prototype of teardown.
    //You are not allowed to use globals
>>>>>>> 0eae2f9af14cc2f11d67a7d0feba0acca365fdc8
}

//You can ignore the following code for testing
void dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * head = setup();
    dump_all(head);
<<<<<<< HEAD
    teardown(head);
=======
    teardown(/*what argument?*/);
>>>>>>> 0eae2f9af14cc2f11d67a7d0feba0acca365fdc8
    return 0;
}

void dump_all(node_t * head) {
    printf("head -> ");
    node_t * cur = head;
    while(cur != NULL) {
        printf("%s ", cur->str);
	cur = cur->next;
    }
    printf("\ndone\n ");
}
