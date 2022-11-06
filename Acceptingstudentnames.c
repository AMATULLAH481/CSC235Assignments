#include <stdio.h>
int main (){
    char  Names_of_students [10] [100];
   // printf("What is the student's name ? : ");
    for ( int name=1;   name<=10;   name++){
         printf("Enter student's %d name : " , name );
         fgets(Names_of_students[name], 100, stdin);
    }
    return 0;

}

