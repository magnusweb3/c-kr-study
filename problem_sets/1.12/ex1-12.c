#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 // outside a word

int main() {
    //write a program that prints its input one word per line
    //define what is a word
    //what do we do with white space
    //what is the logic
    //read one char at a time
    //if its not whitespace print it
    //if it is whitespace and the previous cha was part of a word [print \n]
    //skip over repeated whitespaces
   int c;
   int state = OUT; //start of a word

   //read char one by one until end of file
   while ((c = getchar()) != EOF) {
       if (c == ' ' || c == '\t' || c == '\n') {
           //if the current char is whitespace
           //we are def OUT of a word
           if (state ==IN) {
               putchar('\n');
               state = OUT;
           }
           //if we are already OUT, do nothing
       } else {
           //if its not whitespace
           //we are IN a word, so print the character
           putchar(c);
           state = IN;
       }
   }


    return 0;
}
