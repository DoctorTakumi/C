//////////////////// OSNOVE /////////////////////////

// We use the file pointer, FILE* to work with files.
// File* fptr;

// To work with files, we need to make a connection between the file and the program using the fopen() function.
// fptr = fopen("File Location", opening mode);

// We can open files in "r" (read), "w" (write), or "a" (append) mode.
// fptr = fopen("file.txt", "r");

// We can write to a file using the fputs() function.
// fputs(fileContent, fptr);

// We can read from the file using the fgets() function.
// fgets(fileContent, 1000, fptr);

// After we work with files, we should always close the file using the fclose() function.
// fclose(fptr);

//////////////////////////////////////////////////////


///////////////////// READING ////////////////////////////

// #include <stdio.h>

// int main(){

//     FILE* fptr;

//     fptr = fopen("test.txt", "r");

//     if (fptr == NULL){
//         printf ("ne valja");
//     }
// }


////// READING CONTENT FROM A FILE
// #include <stdio.h>

// int main() {

//   FILE* fptr;
//   // open file
//   fptr = fopen("test.txt", "r");

//   // array to store the file content
//   char fileContent[1000];
  
//   // condition to check if file opening is successful
//   if(fptr != NULL) {

//     // read file content
//     fgets(fileContent, 1000, fptr);
//     printf("%s", fileContent);
    
//   }
//   else {
//     printf("File opening is unsuccessful");
//   }

//   return 0;
// }


// //// READING MULTIPLE LINES
/// cita 1000 po 1000 byteova dok ne dodje do nule, onda staje
// #include <stdio.h>

// int main() {

//   FILE* fptr;
//   // open file
//   fptr = fopen("message.txt", "r");

//   // array to store the file content
//   char fileContent[1000];
  
//   // condition to check if file opening is successful
//   if(fptr != NULL) {

//     // read file content
//     while(fgets(fileContent, 1000, fptr)) {
//       printf("%s", fileContent);
//     }
//   }
//   else {
//     printf("File opening is unsuccessful"); /////// dodaj fclose(fptr); za zatvaranje fajla
//   }

//   return 0;
// }

// /////////////////WITH CLOSING THE FILE  ///////////////////
// #include <stdio.h>

// int main() {

//   FILE* fptr;
//   // open file
//   fptr = fopen("test.txt", "r");

//   // array to store the file content
//   char fileContent[1000];
  
//   // condition to check if file opening is successful
//   if(fptr != NULL) {

//     // read file content
//     while(fgets(fileContent, 1000, fptr)) {
//       printf("%s", fileContent);
//     }
//   }
//   else {
//     printf("File opening is unsuccessful");
//   }

//   // close the file
//   fclose(fptr);

//   return 0;
// }


//////////////////////// WRITING  ////////////////////////

// #include <stdio.h>

// int main() {

//   FILE* fptr;
//   fptr = fopen("file.txt", "w");

//   fputs("C is mother of all programming languages\n", fptr);
//   fputs("I love C Programming", fptr);

//   fclose(fptr);

//   return 0;
// }


/// FILE APPENDING
// #include <stdio.h>

// int main(){

//   FILE* fptr;

//   fptr = fopen ("file.txt", "a");

//   fputs ("\nAppending the next text using fputs() function", fptr);

//   close(fptr);

//   return 0;
// }


/// ACCESSING FILES IN DIFFERENT FOLDERS
// #include <stdio.h>

// int main(){

//     FILE* fptr;

//     fptr = fopen ("textFiles/messages.txt", "w");

//     fputs ("this file is in the external folder", fptr);

//     fclose(fptr);

//     return 0;
// }