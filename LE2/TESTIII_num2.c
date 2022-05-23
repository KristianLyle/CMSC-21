#include <stdbool.h> //for returning bool values
#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */

int main(void) {

    int same = 0;   //declaring and setting the value for the 'same' variable as 0 as a checker
    int input1[26]={0},input2[26]={0}; //declaring arrays for input

    void scan_word(int occurences[26]){ //declaring and defining scan_word function which takes an array as a parameter
        char c;
        while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurences[toupper(c) - 'A']++; //incrementing the occurrences of letters to the array
        }
    }
    }
    bool is_anagram(int occurence1[26], int occurence2[26]){//declaring and defining is_anagram function, takes two arrays as a parameter
        int *ptr;   //declaring pointer variable
        for (int i= 0; i < 26; i++){    //iteration through the arrays
            ptr= &i;    //setting the value of the ptr variable as the address of i
            if (occurence1[*ptr] != occurence2[*ptr]){  //using the ptr variable to navigate through the loops
                return false;   //returning false if an unequal occurrence is detected
                break;  //breaking the loop when an unequal occurrence is detected
            }
        }
        return true;    //returning true when all the occurrences of letters between the words are equal
    }

    printf("Enter first word: ");   //taking an input for the first word
    scan_word(input1);  //using scan_word on the first input

    printf("Enter second word: ");  //taking an input for the second word
    scan_word(input2);  //using scan_word for the second input


    if(is_anagram(input1,input2)){  //using is_anagram on the inputs
        same = 1;   //setting the value of the variable 'same' to 1 if is_anagram returns a true value
        if (same == 1){
            printf("The words are anagrams");   //printing the output
        }
    }
    else{
       same = 0;    //setting the value of the 'same' variable to 0 if the is_anagram returns a false value
       if (same == 0){
        printf("The words are not anagrams"); //printing the output
       }
    }

    return 0;
}

