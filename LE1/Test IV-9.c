#include <stdio.h>
int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';                    //default value for cont 
        while(cont == 'y'){                //program will keep running as long as cont is == 'y'
            printf("Enter square size: ");  //accepting an input from the user
            scanf("%d", &size);                // storing the input in the size variable

            for( row = 0 ;row < size ; row++){          //for loop that iterates through the row variable
                for(column = 0 ; column < size ;column++){  //nested for loop that iterates through the column variable
                    if (row == 0 || column == 0 || row == size-1 || column == size){    //conditionals that print the spaces and asterisks for the column
                        printf("*");
                    }else{
                        printf(" ");
                    }
                }
                printf("*\n");      //prints statement for the asterisk on the rows
            }
            printf("Print another square? Enter y or n: "); //allowing the user to decide whether or not to continue using the program
            scanf("%c", &cont);     //accepting another input from the user
            
            if (cont == 'n'){
            printf("END");      //print statement if the user selects to terminate the program
            }
            else if (cont != 'y' || cont != 'n'){       //conditional if the user invalid values
                printf("Not a valid choice. \n");       //print statement that informs the user of the invalid input
                printf("Print another square? Enter y/n: ");    //allowing the user to enter another input
                scanf("%c", &cont);
            }
        }
return 0;
}
