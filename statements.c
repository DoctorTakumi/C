#include <stdio.h>

int main(){

    int broj;

    printf ("Enter the number: ");
    scanf ("%d", &broj);

    // range if
    if (broj<0||broj>100){
        printf ("It has to be on scale 0-100");
    }
    //multiple else if
    else if (broj==50){
        printf ("sredina");
    else if (broj>50){
        printf ("you passed");
    }
    // else
    else {
        printf ("you failed");
    }

return 0;
}