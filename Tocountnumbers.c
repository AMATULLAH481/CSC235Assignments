#include <stdio.h>
#include <stdlib.h>
int main (){
    int Num = 1 ;
    int YourNum;
    printf("Type the number you want to count to(Between 1-10) ; ");
    scanf("%d", &YourNum); 
    while (Num <=YourNum ){
        printf("%d\n", Num);
        Num= Num+1;
    }
    return 0;
}