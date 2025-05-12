#include <stdio.h>
#define LIM 100
int main() {
   //write a loop equivlant to the for loop without using && or ||
   // for (i = 0; i < lim - 1 && (c=getchar()) != '\n' && c != EOF; ++i)
   // s[i] = c;
   int i = 0;
   int c;
   char s[LIM];

   while (i < LIM - 1) {
       c = getchar();
       if (c == '\n')
           break;
       if (c == EOF)
           break;
       s[i] = c;
       ++i;
   }
    return 0;
}
