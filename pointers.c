// #include <stdio.h>

// int main(){

//     int var = 13;

//     printf ("%d\n", var);
//     printf ("%p", &var);  // pointer format specifier  // & storing the input value at the address of var

//     return 0;
// }


// #include <stdio.h>

// int main(){

//     int num = 36;
//     int* pt;

//     //pt = &num;
//     //pt=0;  // test - pt=NULL; / pt=0; nema adrese. pointer je adresa, ne vrijednost!

//     printf ("Value of pointer: %p\n", pt);
//     printf ("Address of number: %p", &num);

//     return 0;
// }

// pt is the pointer variable which gives the memory address and *pt gives the value pointed by pt
// pt is the pointer variable which stores the memory address and * is just a part of syntax to create pointers
// *pt denotes the data pointed by the address pt

// #include <stdio.h>

// int main() {

//     // get input value for x
//     int x;
//     printf ("value of x: ");
//     scanf("%d", &x);

//     // assign address of x to pointer
//     int* pt = &x;

//     // print value of x using pt
//     printf ("%d\n", *pt);  // value of x  // denotes the data pointed by the address pt
//     printf ("%p", &x);  // address
//     return 0;
// }

// pt = &x; is VALID - both pt and &x are addresses
// *pt = x; is VALID - both *pt and x are addresses


// // JEBALO MATER - ZASTO JE ISTO!!!!!!
// pt je pointer koji pokazuje na adresu *pt
// #include <stdio.h>

// int main (){

//     int num = 33;
//     int* pt = &num;
// // isto jer pt=&num.
//     printf ("address: %p\n", pt);  // adresa vrijednosti
//     printf ("address: %p\n", &num);

//     printf ("value: %d\n", *pt);  //vrijednost pospremljena na adresi
//     printf ("value: %d\n", num);

//     return 0;
// }

// // POINTERS AND ARRAYS
// #include <stdio.h>

// int main(){

//     int nums[5] = {1, 2, 3, 4, 5};

//     for (int i=0; i<5; ++i){
//         printf ("%d = %p\n", nums[i], &nums[i]);
//     }
//     printf ("address of array: %p", nums);
//     return 0;
// }


// ČITAJ!!!
// numbers + i - gives the address of the ith element
// *(numbers + i) - gives the value of the ith element
//