#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    char * value; //must use dynamic allocation 
    struct node* next;
} node_t;

node_t * construct_3_strs() {
    
	node_t* x;
	node_t* y;
	node_t* z;

	x = (node_t*)malloc(sizeof(node_t));
	y = (node_t*)malloc(sizeof(node_t));
	z = (node_t*)malloc(sizeof(node_t));

	
	y-> value = "is";
	y->next = z;

	z->value = "awesome";
	z->next = x;

	x->value = "CS232";
	x->next = y;

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
		free(x);
		free(y);
		free(z);
	return -1;
    } else {
		free(x);
		free(y);
		free(z);
        return 0;
    }
	
}
