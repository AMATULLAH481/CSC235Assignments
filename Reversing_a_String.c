#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
 char str1[100] ;
 printf("Enter the sentence you want to reverse: ");
 fgets(str1, 100, stdin);
 char str_length = strlen(str1);
 printf("The reverse string is: ");
 for(int reverse = str_length; reverse >= 0; reverse--){
    printf("%c", str1[reverse]);
 }


        return 0;
}