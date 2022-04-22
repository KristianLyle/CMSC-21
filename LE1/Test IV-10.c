#include <stdio.h>
#include <math.h>
int main(void){
    double tol,x,y,yn;

    tol=  0.00001;

    printf("Enter a number: ");
    scanf("%lf", &x);

    y=1;
    yn= 0.5*(y+(x/y));

    while(fabs(yn-y) > tol ){
        y=yn;
        yn= 0.5*(y+(x/y));
    }
    printf(" The square root of %.2lf is approximately %lf",x,y);

    return 0;

}

