// #include <stdio.h>

// // function definition to take double arguments
// void addNumbers(double n1, double n2) {

//     // add two arguments and print the result
//     double sum = n1 + n2;
//     printf ("%.2lf", sum);
// }

// int main() {
//     double number1;
//     double number2;
//     scanf("%lf %lf", &number1, &number2);

//     // call function with argument number1 and number2
//     addNumbers(number1, number2);

//     return 0;
// }


#include <stdio.h>

int addNums (int n1, int n2){
    int sum = n1 + n2;
    return sum;
}

int main(){

    int num1 = 22;
    int num2 = 33;

    int res = addNums(num1, num2);
    printf ("res: %d", res);

    return 0;
}