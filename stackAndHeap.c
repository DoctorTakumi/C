// checks is memory freed or not
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int* ptr;
    ptr = (int*)malloc(sizeof(int));
 
    if (ptr == NULL)
        printf("Memory Is Insuffficient\n");
    else {
        free(ptr);
        printf("Memory Freed\n");
    }
}

/* Function with memory leak */
#include <stdlib.h>
 
void f()
{
    int* ptr = (int*)malloc(sizeof(int));
 
    /* Do some work */
 
    /* Return without freeing ptr*/
    return;
}

/* Function without memory leak */
#include <stdlib.h>
 
void f()
{
    int* ptr = (int*)malloc(sizeof(int));
 
    /* Do some work */
 
    /* Memory allocated by malloc is released */
    free(ptr);
    return;
}