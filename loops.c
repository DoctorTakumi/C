// #include <stdio.h>

// int main(){

//     int count = 10;

//     while (count >= 0){
//         printf ("count = %d\n", count);  // printa "count" + %d vrijednosti
//         count = count -1;   // povećavanje vrijednosti +1 za countdown
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {

//   int n;

//   printf("Enter a positive number: ");   // upisivanje prirodnog broja (pozitivnog) // zbroj koliko prirodnih brojeva želimo!!! if n==5, total == 15 (1+2+3+4+5)
//   scanf("%d", &n);                       // skeniramo upisani broj

//   int i = 1;          // postavljamo prvi prirodni broj za kasniji - while (i <=n)
//   int total = 0;      // counter počinje od nule da bi prvi broj bio 1 - total = total + i (0=0+1)

//   while (i <= n) {    // osiguravamo da je broj prirodan (veci od nule) - i=1, n>=i, odnosno n>=1 !!!

//     // adding the value of i to total
//     total = total + i; // counter počinje sa 0 = 0 + 1...(1) -> 1 = 1 + 2...(3) -> 3 = 3 + 3...(6) // counter svaku iteraciju zbraja niz prirodnih brojeva
//     i = i + 1;         // counter počinje sa 1 = 1 + 1...(2) -> 2 = 2 + 1...(3) -> 3 = 3 + 1...(4) // counter se svaku iteraciju povećava za 1 - niz prirodnih brojeva!
//   }

//   printf("Result: %d", total);

//   return 0;
// }


// // kolko piva tolko samara
// #include <stdio.h>

// int main(){

// int pive;
// printf ("koliko piva? ");
// scanf ("%d", &pive);

//     while (pive >=1){
//         printf ("samar broj %d\n", pive);
//         pive = pive - 1;
//     }
//     printf ("dosta samaranja");
//     return 0;
// }

////////////// WHILE LOOP //////////////////
#include <stdio.h>

int main (){

    int n, i, sum = 0;

    printf ("enter n natural number: ");
    scanf ("%d", &n);

    i = 1;

    while (n>=i){
        sum += i;
        ++i;  
    }

    printf ("%d", sum);
    return 0;
}

/////////// FOR LOOP //////////////
#include <stdio.h>

int main (){

    int n, i, sum = 0;

    printf ("enter n natural number: ");
    scanf ("%d", &n);


    for (i=1; n>=i; ++i){  // (initialization; booleanExpression; update)
        sum += i;
    }

    printf ("%d", sum);
    return 0;
}

/////////// DO WHILE FOR LOOP /////////////
#include <stdio.h>

int main (){

    int i, n, sum = 0;

    do {
        printf ("enter a positive integer: ");
        scanf ("%d", &n);
    }while (n<=0);

    for (i=1; n>=i; ++i){
        sum += i;
    }
    printf ("the result is: %d", sum);
    return 0;
}