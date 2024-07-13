// // struct // typedef
// #include <stdio.h>

// typedef struct Complex{
//     double real;
//     double imag;
// } complex;

// int main(){

//     complex c1 = {.real = 10.1, .imag = 9.4};
//     complex c2 = {.real = 28.9, .imag = 4.3};
//     complex result; 

//     result.real = c1.real + c2.real;
//     result.imag = c1.imag + c2.imag;

//     printf ("result: %.2lf + %.2lfi", result.real, result.imag);

//     return 0;
// }


// //IN FUNCTION
// #include <stdio.h>

// struct Student{
//     char name[50];
//     int age;
// };

// void display (struct Student s1){
//     printf ("name: %s\n", s1.name);
//     printf ("age: %d", s1.age);
// }

// int main(){
//     struct Student student1 = {.name = "majmun", .age=22};
    
//     display(student1);

//     return 0;
// }


// // SA TYPEDEF (valjda?)
// #include <stdio.h>

// typedef struct Student{
//     char name[50];
//     int age;
// }defMajmun;

// void display (defMajmun s1){
//     printf ("name: %s\n", s1.name);
//     printf ("age: %d", s1.age);
// }

// int main(){
//     defMajmun student1 = {.name = "majmun", .age=22};

//     display(student1);

//     return 0;
// }


// more typedef - STRUCT AS ARGUMENT
#include <stdio.h>

typedef struct Rectangle{
    int length;
    int breadth;
}trokut;

void findArea(trokut rect1){
    int area = rect1.length * rect1.breadth;
    printf ("Area: %d", area);
}

int main(){

    trokut rect = {.length = 12, .breadth = 8};

    findArea(rect);

    return 0;
}

// without typedef example - STRUCT AS ARGUMENT

#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

// function to find perimeter
void findPerimeter (struct Rectangle rect){
    int perimeter = 2 * (rect.length+rect.breadth);    // P=2(l+w)
    printf ("%d", perimeter);
}

int main() {

    // declare struct variable
    struct Rectangle rect1;

    // get input value for length and breadth of rect
    scanf("%d %d", &rect1.length, &rect1.breadth);

    // function call
    findPerimeter (rect1);

    return 0;
}


// RETURN STRUCT FROM FUNCTION
