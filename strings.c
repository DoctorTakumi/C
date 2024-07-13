// #include <stdio.h>
 
// int main() {
 
//   char text[100];
 
//   printf("Enter the string: ");

//   // kako skenirati cijeli input // scanf skenira sve do prvog whitespacea
//   // fgets - "file get string", stdin - "standard input"
//   fgets(text, sizeof(text), stdin); 
 
//   printf("%s", text);
 
//   return 0;
// }


// // %zu FORMAT SPECIFIER // strlen()
// #include <stdio.h>
// #include <string.h>

// int main() {

//   char series[] = "Squid Game";

//   // %zu - format specifier to print the returned value of strlen()
//   // The strlen() function doesn't count the null character, '\0' present at the end of the string.
//   printf("%zu", strlen(series));    // 10
//   return 0;
// }


// // KOPIRANJE STRINGOVA // CTRCPY()
// #include <stdio.h>
// #include <string.h>

// int main(){

//     char originalText[] = "tekst za kopiranje";  // na kraju stringa je \0 - null operator/null terminator

//     //kreiramo novi string iste velicine kao sto je prvi
//     char copiedText[strlen(originalText)];

//     // strcpy (newString, oldString);
//     strcpy (copiedText, originalText);

//     printf ("%s", copiedText);

//     return 0;
// }


// // KOPIRANJE STRINGOVA BEZ STRCPY()
// #include <stdio.h>
// #include <string.h>

// int main(){

//     char source[100];
//     char destination[100];

//     int i;

//     printf ("enter source string: ");
//     fgets (source, sizeof(source), stdin);

//     for (i=0; i<strlen(source); ++i){
//         destination[i]=source[i];
//     }

//     destination[i] = '\0';

//     printf ("%s", destination);

//     return 0;
// }


// // STRING CONCATENATION
// #include <stdio.h>
// #include <string.h>

// int main(){

//     char txt1[] = "jebem ";
//     char txt2[] = "ti sve";

//     // strcat
//     strcat (txt1, txt2);
//     printf ("%s", txt1);

//     return 0;
// }


// // STRING COMPARISON!!!
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";

//     if (strcmp(str1, str2) == 0) {    // isto kao i (!strcmp(str1, str2)) //provjera jesu li isti stringovi
//         printf("Strings are equal\n");
//     } else {
//         printf("Strings are not equal\n");
//     }

//     return 0;
// }
// strcmp(str1, str2) returns 0 if str1 is equal to str2.
// It returns a negative value if str1 is lexicographically less than str2.
// It returns a positive value if str1 is lexicographically greater than str2

//In C, 0 is considered false when used in a boolean context.
// Therefore, strcmp(str1, str2) == 0 can be interpreted as false, indicating that str1 is equal to str2


// // WHILE LOOP, brojanje do '\0'
#include <stdio.h>

int main(){

    char recenica[] = "najebem ti se majke";

    int baseLen = 0;

    while (recenica[baseLen] != '\0'){
        ++baseLen;
    }
    printf ("%d", baseLen);
    return 0;
}