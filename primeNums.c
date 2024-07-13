///// first version /////

// #include <stdio.h>

// int main(){

//     int num;
//     printf ("enter a number: ");
//     scanf ("%d", &num);

//     int isPrime = 1;

//     for (int i=2; i<num; ++i){
//         if (num % i == 0){
//             isPrime = 0;
//             break;
//         }
//     }

//     if (isPrime){
//         printf ("%d is prime", num);
//     }
//     else{
//         printf ("%d is not a prime", num);
//     }

//     return 0;
// }



//// second version - function //////

// #include <stdio.h>

// int checkPrime (int num){
//     for (int i=2; i<num; ++i){
//         if (num % 2 == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){

//     int num;
//     printf ("enter a number: ");
//     scanf ("%d", &num);

//     int isPrime = checkPrime(num);

//     if (isPrime){
//         printf ("%d is prime", num);
//     }
//     else{
//         printf ("%d is not a prime", num);
//     }

//     return 0;
// }



//// checking prime in range 50-100 /////

#include <stdio.h>

// function to check prime number
int checkPrime (int num){
    for (int i=2; i<num; ++i){
        if (num % i == 0){
            return 0;
        }
    }
    
    return 1;
}

int main(){

    // in each iteration we are checking if the num is prime or not by calling the checkPrime() function
    for (int i=50; i<=100; ++i){
        int isPrime = checkPrime(i);

        // printing if i is prime
        if (isPrime){
            printf ("%d\n", i);
        }
    }

    return 0;
}