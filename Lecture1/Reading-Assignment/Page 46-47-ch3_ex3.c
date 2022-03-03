#include <stdio.h>  //declaring <stdio.h> directive
int main(void){ //declaring main function
    int num1, denom1, num2, denom2, result_num, result_denom;   //declaring variables as integers

    printf("Enter first fraction: ");   //printing the first fraction text
    scanf("%d/%d", &num1, &denom1);     //using scanf to get an input from user

    printf("Enter second fraction: ");  //printing second fraction text
    scanf("%d/%d", &num2, &denom2);     //using scanf to get an input from user

    result_num= num1 * denom2 + num2 * denom1;  //variable containing the computation for the resulting numerator
    result_denom= denom1 * denom2;              //variable containing the computation for the resulting denominator

    printf("The sum is %d/%d\n", result_num, result_denom); //using printf to display the output

    return 0;
    }
