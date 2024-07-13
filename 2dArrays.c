// #include <stdio.h>

// int main() {

//   // create a 2D array
//   int numbers[3][2] = {
//     {23, 41},
//     {13, 29},
//     {34, 17}
//   };

//   // access array elements
//   // outer loop access each inner array
//   for (int i = 0; i < 3; ++i) {

//     // inner loop access each element of inner arrays
//     for (int j = 0; j < 2; ++j) {
//       printf("%d ", numbers[i][j]);
//     }
//   }

//   return 0;
// }



/////// Adding two matrices using 2D array and nested loop ////////
// #include <stdio.h>

// int main() {

//   // first matrix
//   int A[2][3] = {
//     {4, 8, 12}, 
//     {5, 10, 15}
//   };

//   // second matrix
//   int B[2][3] = {
//     {7, 14, 21},
//     {8, 16, 24}
//   };

//   // matrix to store the sum
//   int sum[2][3];

//   for (int i = 0; i < 2; ++i) {
//     for (int j = 0; j < 3; ++j) {

//       // sum of [i][j] elements of A and B is
//       // stored in [i][j] position of sum
//       sum[i][j] = A[i][j] + B[i][j];
//     }
//   }

//   // print the sum matrix
//   for (int i = 0; i < 2; ++i) {
//     for (int j = 0; j < 3; ++j) {
//       printf("%d ", sum[i][j]);
//     }

//     // to print elements in rows and columns format
//     printf("\n");
//   }

//   return 0;
// }



// matrix differences
#include <stdio.h>

int main() {

    // first matrix
    int A[3][2] = {
        {9, 8}, 
        {12, 21}, 
        {32, 36}
    };

    // second matrix
    int B[3][2] = {
        {4, 5}, 
        {10, 12}, 
        {20, 19}
    };

    // matrix to store the difference
    int difference[3][2];

    // use nested loop to find the difference
    for (int i=0; i<3; ++i){
        for (int j=0; j<2; ++j){
           difference[i][j] = A[i][j] - B[i][j]; 
        }
    }

    // print the difference matrix
    for (int i=0; i<3; ++i){
        for (int j=0; j<2; ++j){
            printf ("%d ", difference[i][j]);
        }
        printf ("\n");
    }

    return 0;
}