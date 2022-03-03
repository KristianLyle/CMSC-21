#include <stdio.h> //entering<stdio.h> directive
int main(void){    //declaring main function
    int i;         //declaring the variable i as an integer
    float x;       //declaring the variable x as a float

    i= 40;          //setting appropriate values for the integer and float variables
    x= 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);    //using printf to display the output
    printf("|%10.3f|%10.3e|%-10g|\n", x,x,x);   //using | to determine the amount of space present between the variable outputs

    return 0;
    }
