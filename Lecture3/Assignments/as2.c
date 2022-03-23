#include <stdio.h>
int main(void){
    int num1,num2;

    printf("Please enter a 2-digit number: ");
    scanf("%1d%1d",&num1,&num2);

    if (num1 == 1){
        switch(num2){
            case 0:
                printf("Number entered in words: ten");
                break;
            case 1:
                printf("Number entered in words: eleven");
                break;
            case 2:
                printf("Number entered in words: twelve");
                break;
            case 3:
                printf("Number entered in words: thirteen");
                break;
            case 4:
                printf("Number entered in words: fourteen");
                break;
            case 5:
                printf("Number entered in words: fifteen");
                break;
            case 6:
                printf("Number entered in words: sixteen");
                break;
            case 7:
                printf("Number entered in words: seventeen");
                break;
            case 8:
                printf("Number entered in words: eighteen");
                break;
            case 9:
                printf("Number entered in words: nineteen");
                break;
        }
    }
    else{
        switch(num1){
            case 2:
                printf("Number entered in words: twenty-");
                break;
            case 3:
                printf("Number entered in words: thirty");
                break;
            case 4:
                printf("Number entered in words: forty-");
                break;
            case 5:
                printf("Number entered in words: fifty-");
                break;
            case 6:
                printf("Number entered in words: sixty-");
                break;
            case 7:
                printf("Number entered in words: seventy-");
                break;
            case 8:
                printf("Number entered in words: eighty-");
                break;
            case 9:
                printf("Number entered in words: ninety-");
                break;
        }
        switch(num2){
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    }

    return 0;

}

