#include <stdio.h>
#include <stdlib.h>

void rotate_4(int a, int b, int c, int d) {
    //TO-DO: please implement left rotate 4 integers by one position
    int array[] = {a , b, c, d};
  //  int arr[] = {1, 2, 3, 4};
    //int length = sizeof(argv) / sizeof(argv[0]); // i coded this in java first and in java we have array.length so i searched online what is equivalent
                              //https://riptutorial.com/c/example/1125/array-length
//(int *p_a, int*p_b, int*p_c, int* p_d)
    int i;
    int temp = array[1];
    for(i = 0; i < 3; i++)
    {
      array[i] = array[i + 1];
    }

    array[4] = temp;
}

int main() {
    //TO-DO check if there are 4 inputs.
    //print out an error message if there are not enough inputs.
    //hint: use argc
    //int main(int argc, char ** argv)
  /*  printf("%s" , (argv[0]));
    int a = atoi(argv[1]); //atoi converts string to int
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]); */
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    //rotate_4(a,b,c,d);
    int array[] = {a , b, c, d};
    int i;
    int temp = array[0];
    for(i = 0; i < 3; i++)
    {
      array[i] = array[i + 1];

    }

    array[3] = temp;
    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);

    return 0;
}
