#include <stdio.h>                  //enter stdio.h directive
int main (void){                    //enter main function
    int num_input,reverse1,reverse2;    //declare variables as integers

    printf("Please enter a 2-digit number:");   //print statement for the user input
    scanf("%d",&num_input);                 //using scanf to take a 2 digit number from the user

    reverse1= num_input % 10;               //taking the remainder by 10 to get the first digit of the reversed number
    reverse2= (num_input / 10) % 10;        //dividing the input by 10 and then taking the remainder by 10

    printf("Reverse: %d%d",reverse1,reverse2);  //printing the reversed number

    return 0;
    }
