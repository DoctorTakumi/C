////////////// malloc ////////////////

// double* ptr;
// int n = 100;

// // allocate memory of n number of double data
// ptr = (double*) malloc(n * sizeof(double));

/*
- n * sizeof(double) is the memory required to store n number of double type data.
- In our example, n is 100 and the size of double is usually 8 bytes. So, n * sizeof(double) gives us 800 bytes.
- malloc(n * sizeof(double)) allocates the 800 bytes memory.
- (double*) type-casts the allocated memory to store double type data. // "type casting" refers to converting one datatype into another (type conversion)
- The ptr pointer holds the address of the first byte in the allocated memory.
- Note: If the function fails to allocate memory, it returns NULL (null pointer).
*/


// #include <stdio.h>
// // import stdlib.h file
// #include <stdlib.h>

// int main() {

//   int n;
//   printf("Enter the number of children: ");
//   scanf("%d", &n);

//   // create pointer variable
//   int* ages;
  
//   // dynamically allocate memory for n number of int
//   ages = (int*) malloc(n * sizeof(int));

//   // if memory cannot be allocated, end the main() function
//   if (ages == NULL) {
//     printf("Error! memory not allocated");
//     return 0;
//   }

//   printf("Enter ages:\n");  // to set ages inputs in new lines
//   for (int i = 0; i < n; ++i) {
//     // store value at the allocated memory using ages pointer
//     scanf("%d", ages + i);
//   }

//   printf("Ages are: ");
//   for (int i = 0; i < n; ++i) {
//     printf("%d ", *(ages + i));
//   }

//   // free the allocated memory
//   free(ages);

//   return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int n;
//     int* marks;

//     // get input value for n
//     printf ("enter number of marks: ");
//     scanf("%d", &n);

//     // allocate memory to store n values
//     marks = (int*) malloc(n * sizeof(int));

//     // get input value for marks
//     for (int i=0; i<n; ++i){
//         scanf ("%d", marks + i);
//     }

//     // print values
//     for (int i = 0; i < n; ++i) {
//         printf("%d\n", *(marks + i));
//     }

//     return 0;
// }



///////////////// realloc //////////////////////

// ptr = realloc(ptr, newSize);

// #include <stdio.h>
// #include <stdlib.h>

// int main(){

//     int* ptr;

//     ptr = (int*) malloc(2 * sizeof(int));

//     printf ("Allocated Memory:\n");
//     for (int i=0; i<2; ++i){
//         printf ("%p\n", (ptr+i));
//     }

//     ptr = realloc(ptr, 4 * sizeof(int));

//     printf ("Mew Memory:\n");
//     for (int i=0; i<4; ++i){
//         printf ("%p\n", (ptr+i));
//     }

//     return 0;
// }


// /// increase array size dinamically
// #include <stdio.h>
// #include <stdlib.h>

// int main(){

//     int* myArray;;
//     myArray = (int*) malloc(4 * sizeof(int));

//     printf ("enter array elements: ");
//     for (int i=0; i<4; ++i){
//         scanf ("%d", (myArray+i));
//     }

//     printf ("array elements: ");
//     for (int i=0; i<4; ++i){
//         printf ("%d ", *(myArray+i));
//     }

//     myArray = realloc(myArray, 5* sizeof(int));

//     myArray[4] = 39;

//     printf ("\nNew Array elements: ");
//     for (int i=0; i<5; ++i){
//         printf ("%d ", *(myArray+i));
//     }

//     return 0;
// }



// challenge: change the array size dynamically

#include <stdio.h>
#include <stdlib.h>

int main() {

    int* marks;

    // allocate space for marks
    marks = (int*) malloc (3 * sizeof(int));

    // get input value for marks
    printf ("enter input values for marks:\n");
    for (int i = 0; i < 3; ++i) {
        scanf("%d", (marks + i));
    }

    // print array elements
    printf ("array elements:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *(marks + i));
    }

    // resize the array to store 5 elements
    marks = realloc (marks, 5*sizeof(int));

    // assign value for 4th and 5th element
    marks[3] = 13;
    marks[4] = 15;

    // print all element
    printf("New array elements:\n");
    
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(marks + i));
    }

    return 0;
}