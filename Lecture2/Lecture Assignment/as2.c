#include <stdio.h>                  //enter stdio.h directive
int main (void){                        //enter main function
    int num_input,reverse1,reverse2,reverse3;   //declare variables as integers

    printf("Please enter a 3-digit number:");   //print statement for the user input
    scanf("%d",&num_input);                     //using scanf to take a 3 digit number from the user

    reverse1= num_input % 10;                   //taking the remainder using modulo division by 10
    reverse2= (num_input / 10) % 10;            //dividing the input by 10 and then taking the remainder using modulo division by 10
    reverse3= (num_input/ 100) % 10;            //dividing the input by 100 then taking the remainder using modulo division by 10


    printf("The reverse is %d%d%d",reverse1,reverse2,reverse3); //using printf to display the reversed number

    return 0;
    }
