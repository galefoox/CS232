#include<stdio.h>
#include<stdlib.h>
#include "snode.h"
typedef struct snode node_t;

node_t * setup() {
    //TODO:copy setup func from task1
    node_t* head;
    
    node_t* node1;
    node_t* node2;
    node_t* node3;

   
    node1 = (node_t*) malloc (sizeof(node_t));
    node2 = (node_t*) malloc (sizeof(node_t));
    node3 = (node_t*) malloc (sizeof(node_t));

    
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

void teardown(node_t* head) {
    
    node_t* node_b1 = head->next;
    node_t* node1 = node_b1->next;
    node_t* node2 = node1->next;
   // node_t* node3 = node2->next;

    free(node2);
    free(node1);
    free(node_b1);
    free(head);

}

void add(node_t ** head, char * str, int length){
    
    node_t* node_b1 = (node_t*) malloc (sizeof(node_t)); //allocated memory for new node
   
    strcpy(node_b1->str , str); //copies parameter into str of node_b1
    node_b1->length = length;   //sets length based on length entered as parameter
    (node_b1->next) = (*head);

    *head = node_b1;




    
       
    
  //node_t* node1 = node_b1->next;
   //node_t* node2 = node1->next;
   //node_t* node3 = node2->next;

    
}

//You can ignore the following code for testing
void dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * head = setup();
    add(&head, "hi", 2);
    dump_all(head);
    teardown(head);


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