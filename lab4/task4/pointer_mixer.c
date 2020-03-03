// pointer_mixer was created for examination of several aspects
//Start/
// of pointers:
//   - sizeof() vs. strlen()
//   - string init: pointer init. vs array init.
//   - pointer arithmetics and manipulation
//   - structs & pointers
//
//Dr. Jun Yuan-Murray,  Feb 2020 -- prepared for CS232, Pace University
// credits: Prof. Adam J. Aviv & Prof. Mike Lam.
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ----------------------------------------------------------------------------
// "Again, read comments carefully because I spent a lot of time writing self-"
// "explainable comments like a tutorial~ ᕦ(ò_óˇ)ᕤ.." -Jun---------------------
//
// -------------------------------- Prototypes --------------------------------
//
// ----------------------------------------------------------------------------
void trace_pointers();
void trace_structs_pointers();
void strlen_vs_sizeof();
void pointer_math();
void pointer_casting();
void byte_ordering();
void simple_double_array();
void string_double_array_pointer_array();
void string_equal();
void readonly_vs_stack();

// ----------------------------------------------------------------------------
//
// ------------------------------- Main Program -------------------------------
//
// ----------------------------------------------------------------------------
int main(void) {
    printf("---------------------------------------------\n");	
    trace_pointers();
    printf("---------------------------------------------\n");	
    trace_structs_pointers();
    printf("---------------------------------------------\n");	
    strlen_vs_sizeof();
    printf("---------------------------------------------\n");	
    pointer_math(); //i have no idea
    printf("---------------------------------------------\n");	
    pointer_casting(); // don't understand
    printf("---------------------------------------------\n");	
    byte_ordering(); // don't understand
    printf("---------------------------------------------\n");	
    simple_double_array();
    printf("---------------------------------------------\n");	
    string_double_array_pointer_array(); //wrote questions
    printf("---------------------------------------------\n");	
    string_equal(); //wrote question
    printf("---------------------------------------------\n");	
    readonly_vs_stack(); //wrote question
}

// ----------------------------------------------------------------------------
//
// -------------------------- Subprogram Definitions --------------------------
//
// ----------------------------------------------------------------------------
//To differentiate the length of the string from the size of the string.

//string length: how many characters, not including the null character, are in the string
//sizeof : how many bytes required to store the string.

void strlen_vs_sizeof() {
    char str[]="Hello!"; //array of chars
    char str2[8]="Hello!";
    char * s = str; //char pointer -  starting address of 
	//char***** s;
	//*s -> char ****;

    printf("strlen(str):%d sizeof(str):%d sizeof(str2):%d sizeof(s):%d, sizeof(*s):%d\n",
         (int) strlen(str),  //the length of the str //returns 6
         (int) sizeof(str),  //the memory size of the str //returns 7 bc hello! is 6 but \0 is counted
         (int) sizeof(str2),  //the memory size of the str2 //actually an array
         (int) sizeof(s),    //the memory size of a pointer //prints 4 bytes bc s is a pointer and a pointer takes 4 bytes
         (int) sizeof(*s)    //the memory size of a char //prints1
         );
        //strlen(str): 6  -  does NOT count the \0
        //sizeof(str): 7  -  does count the \0 
        //sizeof(str2): 8
        //sizeof(s): 4
        //sizeof(*s): 1
}
/* ----------------------------------------------------------------------------
       <------------------------ 24 bytes ---------------------------->
       .---------------.----------------.--- - - - ---.----------------.
a   -> |             0 |              1 |             |              7 |
       '---------------'----------------'--- - - - ---'----------------'

       .---.---.---.---.---.---.
str -> | H | e | l | l | o | \0|
       '---'---'---'---'---'---'
       <-------  7 bytes ------> 
*/
void pointer_math() {

    puts("this is pointer_math");
    int a[] = {0,1,2,3,4,5,6,7};
    char str[] = "Hello!";
    //pointer arithmetic consideration of typing
    printf("a[3]:%d str[3]:%c\n", *(a+3),*(str+3));
    // a[3]: 3, str[3]: l
    // I know you would not know what the actual addresses are, just comment
    // what you think (a+3-a) and (str+3-str) are.
    printf("a=%p a+3=%p (a+3-a)=%ld\n",a,a+3, ((long) (a+3)) - (long) a);
    //i have no idea (asked professor - will update when understand)
    printf("str=%p str+3=%p (str+3-str)=%ld\n",str,str+3, ((long) (str+3)) - (long) str);
}
// ----------------------------------------------------------------------------------

//Do we have to store chars in char array? 
void pointer_casting() {
    char s[4]; //allocate 4bytes
    s[0] = 255;//255 is largest uint value in 1-byte
    s[1] = 255;
    s[2] = 255;
    s[3] = 255;//we usually store '\0' here as terminator, but we do not have to
    	       //we can store any arbitrary data here

    int * i = (int *) s;  //casts to an integer pointer
    printf("*i = %d\n", *i); 
    //*i = -1 - i don't understand why
    
    //prints largest value o=on unsigned 32 bit machine
	// %u prints unsigned int
    //use characters as a generic container for data and then used pointer casting 
    //to determine how to interpret that data. char array is an arbitrary container
    //that stores a bunch of bytes.
}

// ----------------------------------------------------------------------------
void byte_ordering() {
    puts("this is byte_ordering");
  unsigned int a = 0xdeadbeef;    //hex number //4 bytes to store deadbeef
  unsigned char * p = (unsigned char *) &a; 

  int i;
  printf("0x");
  //0x
  for(i=0;i<4;i++){
    printf("%02x",p[i]); //could also do *(p+i)
    //efbeadde
  }
  printf("\n");
}
// ----------------------------------------------------------------------------

//a very simple double array to warm you up:
//wait, isn't double-array supposed to be covered in Java 1&2. Anyway, do it.
void simple_double_array() {
    //We can also do static declarations of values with { }. What does this
    //nested {} mean? Hmm
    //it means a double array is essentially an array of arrays. :P
    int darray[][4] = { {1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 16}};
    int i,j;
    //you can skip commenting the following printfs in loop when doing your lab4
    for(i=0;i<4;i++){
        printf("darray[%d] = { ",i); 
        //goes through each row
        for(j=0;j<4;j++){
           printf("%d ",darray[i][j]); //<---
           //goes through each row&column (essential printing out each value in the row)
        }
        printf("}\n");
    }
   //"What do you mean by an array of arrays?" I meant this:
   /*                           .---.---.---.---.
            .---.  _.----> | 0 | 0 | 0 | 0 |  <-- darray[0] //name for first array 
darray ---> | --+-'        '---'---'---'---'
            |---|          .---.---.---.---.
            | --+--------> | 1 | 1 | 1 | 1 |  <-- darray[1] //first element is &darray[1][0]
            |---|          '---'---'---'---'
            | --+-._       .---.---.---.---.
            |---|   '----> | 2 | 2 | 2 | 2 |  <-- darray[2]
            | --+-._       '---'---'---'---'
            '---'   '._    .---.---.---.---.
                       '-> | 3 | 3 | 3 | 3 |  <-- darray[3]
                           '---'---'---'---'
*/
    //darray is actually a int **  it is a pointer that references a memory address
    //that stores another pointer that references a memory address of an integer.
    // adarray equals to &darray[0] which equals to &(&array[0])
    // a double array is a double pointer
    printf("*(*(darray+2)+2) = %d\n", *(*(darray+2)+2));
    //10
    printf("     daray[2][2] = %d\n", darray[2][2]);
    //10
}
// ----------------------------------------------------------------------------
void string_double_array_pointer_array() {
    //these are two strings
    puts("This is string_double_pointer_array");
    char str1[] = "This is a locust tree"; //str1 is a statically alloc-ed array - stored in stack
    char * str2 = "This is also a locust tree"; //str2 is a pointer to char - stored in code(constant)
//------why is char *str a constant and stored in code but char* Strings[]down there is on stack?????
//-------I know stack is higher than heap (correct my if im wrong) but then how do you know which address is higher
    printf("str1:%p\n",str1);
    //some address
    printf("str2:%p\n",str2); 
    // some address
    //which is at the higer address? why?
                              //check the memory layout of your process 
                              //what lays at the bottom?
    //this is an array of strings, each string is a char *	
    char * strings[]={"Go Pace!", //array of 4 char pointers
                     "Beat CUNY!",//also on stack
                     "Crash SUNY!",
                     "Enjoy CS232!"}; //EXPLAIN - WHY IS THIS ON STACK????????
    int i;

    printf("strings: %p\n",strings); //higher address or lower address? why?
    for(i=0;i<4;i++){
      printf("strings[%d]: '%s' %p\n",i,strings[i],strings[i]);
      //are they in higher address or lower address? why?
      //Go Pace address
      //Beat Cuny address
      //Crash Suny address
      //EnjoyCS232 address
  }
}
// ----------------------------------------------------------------------------
//a common mistake for Java programmers to manipulate C strings:
void string_equal() {
    char s1[]="Pace"; //5 bytes on stack 
    char s2[]="Pace"; //another 5 bytes on stack
    char * s3 = "Pace"; //need address. The constant Pace is part of the code, both are pointing to the the same constant so to optimize, te computer gives them the same address
    char * s4 = "Pace";
    if(s1 == s2){
        printf("Go Pace!\n");
    }else if(s3 == s4) {
        printf("Beat CUNY!\n"); //--so with constants are you comparing actual value? and bc s1 and s2 are on stack
        //-----and theres memory allocated separately they do not point to the same address?
    }else {
        printf("Crash SUNY!\n");
    }
    printf("\n");
    printf("s1: %p == s2: %p? \n", s1, s2); //not equal
    //the print out different addresses
    printf("s3: %p == s4: %p? \n", s3, s4); //equal
    //they are equal and print out the same address
}
//Now do you understand why we need string lib, like strcmp?
// ----------------------------------------------------------------------------
// Just simple trace for pointers, just a warm up
void trace_pointers() {
    int a = 42;
    int b = 7;
    int c = 999;
    int *t = &a;
    int *u = NULL;
    printf("%d %d\n", a, *t);
    //42 , 42

    c = b;
    u = t;
    printf("%d %d\n", c, *u);
    //7 , 42

    a = 8;
    b = 8;
    printf("%d %d %d %d\n", b, c, *t, *u);
    // 8 , 7 , 8 , 8

    *t = 123; //bc t is assigned to address of a, if you change *t then you also change a
    printf("%d %d %d %d %d\n", a, b, c, *t, *u);
    //123 , 8 , 7 , 123, 123 
}

// ----------------------------------------------------------------------------
// Yet another simple trace for pointers and structs
typedef struct {
    int *a;
    int b;
} stuff_t;

static void foo(stuff_t value) //pass by value
{
    *(value.a) = 2; //working on pointee of temp -> temp=2
	//updating a's pointee to 2
    value.b = 3; //be did not update
	//if want to update both of them you need to get hold of both attributes like in bar
}

static void bar(stuff_t *value) //pass by reference
{
    *(value->a) = 4; //value->a -> (*value).a
    value->b = 5; //(*value).b = 5

	
}

void trace_structs_pointers()
{
    stuff_t my_stuff;
    int temp = 0;

    my_stuff.a = &temp; //if you do *a you are manipulating temp
    my_stuff.b = 1;
    printf("a=%d b=%d\n", *(my_stuff.a), my_stuff.b);
    //a = 0 | b = 1

    foo(my_stuff);
    printf("a=%d b=%d\n", *(my_stuff.a), my_stuff.b);
    // a = 2 | b = 1 - is b=1 because local variable and in foo b=3 but that is local to that method? i think so

    bar(&my_stuff);
    printf("a=%d b=%d\n", *(my_stuff.a), my_stuff.b); //a essentially printing out temp
    //a = 4 | b = 5;
}

// ----------------------------------------------------------------------------
void readonly_vs_stack() {
  char str1[] = "This is a locust tree"; //str1 is a statically alloc-ed array
  char * str2 = "This is also a locust tree"; //str2 is a pointer to char //-----is this on heap or constant?

  str1[0] = 't';
  printf("str1: %s \n",str1);
  //this is a locus tree
  str2[0] = 't';
  printf("str2: %s \n",str2); //--cant change a constant ever? or is there a way to?
  //cant change constant so error 
}

