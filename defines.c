// #include <stdio.h>

// #define pi 3.1415

// int main(){

//     printf ("pi: %.4lf", pi);

//     return 0;
// }


// #include <stdio.h>

// #define PI 3.1415
// #define circleArea(r)(PI*r*r)

// int main(){

//     double radius;

//     printf ("enter the radius: ");
//     scanf ("%lf", &radius);

//     double area = circleArea(radius);
//     printf ("Area: %.2lf", area);

//     return 0;
// }



///////////////////// PREDEFINED MACROS ///////////////

// #include <stdio.h>

// int main(){

//     printf ("current date is: %s", __DATE__);

//     return 0;
// }


// #include <stdio.h>

// int main(){

//     printf ("current time is: %s", __TIME__);

//     return 0;
// }


#include <stdio.h>

int main(){

    printf ("Current time is: %s\n", __TIME__);
    printf ("Current date is: %s", __DATE__);

    return 0;
}

/////// FILE NAME //////
#include <stdio.h> 
int main() 
{ 
    printf("File name of this"
           " program is: %s\n", 
           __FILE__); 
    return 0; 
} 

///// LINE ///////
#include <stdio.h> 
int main() 
{ 
    printf("Line number is: %d\n", 
           __LINE__); 
    return 0; 
}