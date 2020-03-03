
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node {
    char * value; //must use dynamic allocation 
    struct node* next;
} node_t;

node_t * construct_3_strs() {

    node_t *x,*y,*z;
    x = (node_t *) malloc (sizeof(node_t));
    y = (node_t *) malloc (sizeof(node_t));
    z = (node_t *) malloc (sizeof(node_t));
//-------------------------------------------------------------
    char* x_value = (char *) malloc (6*sizeof(char*));
    char* y_value = (char *) malloc (3*sizeof(char*));  //allocating memory for each individual string
    char* z_value = (char *) malloc (8*sizeof(char*)); 
//-------------------------------------------------------------
//-------------------------------------------------------------
    strcpy(x_value , "CS232");
    strcpy(y_value , "is");                 //copies the values into a char*
    strcpy(z_value , "awesome");
//--------------------------------------------------------------

//-------------------------------------------------
    x -> value = x_value;
    y -> value = y_value;
    z -> value = z_value; //sets node *value to x,y,z value which are the strings copied

    x -> next = y;
    y -> next = z;
    z -> next = x;      //points to next nodes
//------------------------------------------------


    
	
   /* y->value[0] = 'i';
    y->value[1] = 's';*/
	

    /*z->value[0] = 'a';
    z->value[1] = 'w';
    z->value[2] = 'e';
    z->value[3] = 's';
    z->value[4] = 'o';
    z->value[5] = 'm';
    z->value[6] = 'e';*/
	
   /* x->value[0] = 'C';
    x->value[1] = 'S';
    x->value[2] = '2';
    x->value[3] = '3';
    x->value[4] = '2';*/
    
	

	return x;
	
}

//You can ignore the following code for testing
int dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * x = construct_3_strs();
    return dump_all(x);

}

int dump_all(node_t * x) {
    printf("x -> %s", x->value);
    node_t * y = x->next;
    printf(" %s", y->value);
    node_t * z = y->next;
    printf(" %s\n", z->value);
    
    if(z->next != x) {
    	printf("failed");

        free(x->value);
        free(y->value);
        free(z->value);

        free(x);
		free(y);
		free(z);
		return -1;

    } else {

        free(x->value);
        free(y->value);
        free(z->value);

		free(x);
		free(y);
		free(z);
        return 0;
    }

} 
	
