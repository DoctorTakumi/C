// Enum constants are internally represented by integral constants. So, by default the value of Monday is 0, Tuesday 1, etc.

// #include <stdio.h>

// enum Days{
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday,
//     Sunday
// };

// int main(){

//     enum Days currentDay;

//     currentDay = Friday;

//     printf ("%d", currentDay);

//     return 0;
// }


////// ENUM + SWITCH CASE ///////
#include <stdio.h>

enum Suit{
    clubs,
    diamonds,
    hearts,
    spades
};

int main(){

    enum Suit card = hearts;

    switch(card){
        case clubs:
        printf ("Card is clubs");
        break;

        case diamonds:
        printf ("Card is diamonds");
        break;

        case hearts:
        printf ("Cards is hearts");
        break;

        case spades:
        printf ("Card is spades");
        break;

        // default:
        // printf ("it's not any of the 4 suits")
    }
    return 0;
}