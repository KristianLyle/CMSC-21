#include <stdio.h>
#include <math.h>
int main(void){
    double tol,x,y,yn;  //declaring variables as doubles

    tol=  0.00001;      //setting the value for the tol variable

    printf("Enter a number: "); //taking an input from the user
    scanf("%lf", &x);

    y=1;        //entering default y value
    yn= 0.5*(y+(x/y));  //value for yn+1

    while(fabs(yn-y) > tol ){ //iteration that repeats until yn+1 -y is less than or equal to tol
        y=yn;       //changing the value of y to the yn + 1 value
        yn= 0.5*(y+(x/y));  //updating the value for yn + 1
    }
    printf(" The square root of %.2lf is approximately %lf",x,y);   //printing the output

    return 0;

}

