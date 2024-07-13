// #include <stdio.h>

// int main() {
//    // printf() displays the string inside quotation  // first statement
//    printf("Hello, World!");

//    return 0;  // second statement
// }


// #include <stdio.h>
// #include <math.h>

// int main() {
//    double number, squareRoot;

//    printf ("Write desired number: ");
//    scanf ("%lf", &number);
   
//    // computing the square root
//    squareRoot = sqrt(number);
   
//    printf ("Square root of %.2lf = %.2lf", number, squareRoot);

//    return 0;
// }


// // variables and values
// #include <stdio.h>
 
// int main() {
 
//     // create a variable
//     int age = 25;
 
//     // print the variable
//     printf("%d", age);   // "%d" is a Format Specifier!! - %d, %c, %f, %lf, %s (int, char, float, double, string)
  
//     return 0;
// }

// #include <stdio.h>

// int main() {

//     // create int, float, and character variables
//     int number1 = 101;
//     float number2 = 86.99;
//     char letter = 'z';

//     // print variables in separate lines
//     printf ("%d", number1);
//     printf ("\n");
//     printf ("%f", number2);
//     printf ("\n");
//     printf ("%c", letter);

//     return 0;
// }

// #include <stdio.h>

// int main() {

//     char char1 []= "kreso";     // [] - array, uzima tocno znakova koliko mu treba
//     char char2 []= "ivan";

//     printf ("%s and %s idu na pivo", char1, char2);  // %s za string   // format specifier umjesto rijeci koje fale i recenica u navodnike

//     return 0;

// }

// float calculate_mean(int num){ // prosjek znamenaka (12345 -> 15/5=3)
    
//     int sum = 0;
//     int count = 0;
//     int digit;

//     for (int i=1; i<=5; ++i){
//         digit = num%10;
//         sum = sum + digit;
//         count++;
//         num = num /10;
//     }
//     int mean = sum/count;
//     return mean;
// }

// // SIZEOF %lu
// #include <stdio.h>

// int main() {

//     // create double array
//     double numbers[4] = {3.5, 8.9, 1.6, -4.8};

//     // access array using loop
//     for (int i=0; i<4; ++i) {
//         printf("%.2lf\n", numbers[i]);
//     }
//     printf("%lu", sizeof(numbers));  /////////////// %lu - "unsigned long interer" format specifer - racuna zbroj brojeva u arrayu i printa velicinu
//     return 0;
// }


