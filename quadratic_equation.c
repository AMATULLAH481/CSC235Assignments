#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>


int main(){

    double  xsquared_co_efficient;
    double  x_co_efficient;
    double  constant_C;
    printf("Input your x squared co_efficient (a) : ");
    scanf("%lf", & xsquared_co_efficient );
    printf("Input your x coefficient (b): .");
    scanf("%lf", &x_co_efficient);
    printf("Input your no x coefficient (c): ");
    scanf("%lf", & constant_C);
    double determinant= pow(x_co_efficient,2) - 4*xsquared_co_efficient*constant_C;
    if (determinant > 0){
        double first__root= ((x_co_efficient) + sqrt(determinant)) /(2.0*xsquared_co_efficient);
         double second__root= ((x_co_efficient) -  sqrt(determinant)) /(2.0*xsquared_co_efficient);
         printf("The roots of this equation are %.3lf and %.3lf to 3 decimal places." , first__root , second__root );
    } 
    else if ( determinant== 0 ){
         double first__root= -(x_co_efficient) /(2.0*xsquared_co_efficient);
         double second__root= -(x_co_efficient) /(2.0*xsquared_co_efficient);
         printf("The roots of this equation are %.3lf and %.3lf to 3 decimal places." , first__root , second__root );
    } 
    else{
         double first__root= ((-x_co_efficient) + csqrt(determinant)) /(2.0*xsquared_co_efficient);
         double second__root= ((-x_co_efficient) -  csqrt(determinant)) /(2.0*xsquared_co_efficient);
         printf("The roots of this equation are %.3lfi and %.3lfj to 3 decimal places." , first__root , second__root ); 
    }


    return 0;
}