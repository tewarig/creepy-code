#include <stdio.h>
#include <string.h>
int main() {

   char str[100];
   gets(str);
   int i, k, l, j, max =0, index = -1, check = 0, count = 0;
   for(i=0; i<strlen(str); i++) {
      max = 0;
      k = i;
      j = i+1;
      while(str[j]!=' ' && str[j]!='\0'){
         j++;
      }
      l = j-1;
      if(str[k]!=' ' && str[k]!='\0') {
         while(k<=l) {
            if (str[k]==str[l]) {
               max++;
               if(count<=max) {
                  index = i;
                  count = max;
               }
            } else {
               max = 0;
               count = -1;
               break;
            }
            k++;
            l--;
         }
      }
      i = j;
   }
  if(i!=1)
 {
   printf("Exist one unique longest palindrome sub string in "); 
   for (i = index;str[i]!=' ' && str[i]!='\0'; i++) {
      printf("%c", str[i]);
   }
   return 0;}
}
