/*
1. First Iteration of the Outer Loop
floor is 1, apartment is 'A'
floor is 1, apartment is 'B'
floor is 1, apartment is 'C'

2. Second Iteration of the Outer Loop
floor is 2, apartment is 'A'
floor is 2, apartment is 'B'
floor is 2, apartment is 'C'
*/

#include <stdio.h>

int main(){

    int floors[2] = {1, 2};
    char apartments[3] = {'A', 'B', 'C'};

    for (int i=0; i<2; ++i){

        for (int j=0; j<3; ++j){
            printf ("%d%c\n", floors[i], apartments[j]);
        }
    printf ("--------\n");
    }
    
    return 0;
}




///// In this program, the outer loop iterates from i equals 0 to 2. In each iteration of the outer loop, the inner loop iterates from j equals 0 to 1.
#include <stdio.h>

int main(){

    for (int i=0; i<=2; ++i){

        for (int j=0; j<=1; ++j){
            printf ("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}