#include <stdbool.h> //for returning bool values
#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */

int main(void) {

    int same = 0;   //declaring same variable with the value of 0 as a checker
    int input1[26]={0},input2[26]={0};  //declaring arrays for inputs

    void scan_word(int occurences[26]){ //declaring and defining scan_word function, takes an array parameter
        char c;
        while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurences[toupper(c) - 'A']++; //incrementing a value of 1 to every scanned letter in the array
        }
    }
    }
    bool is_anagram(int occurence1[26], int occurence2[26]){    //declaring and defining is_anagram function, takes two arrays as a parameter
        for (int i= 0; i < 26; i++){        //iteration through the arrays
            if (occurence1[i] != occurence2[i]){    //checking if there is an unequal occurence in the two arrays
                return false;   //returning a value of false if an unequal occurence is detected
                break;  //breaking the loop if an unequal occurence is detected
            }
        }
        return true;    //returning true if the occurence of letters between the words are equal
    }

    printf("Enter first word: ");   //taking the first input
    scan_word(input1);  //using scan_word on the first input

    printf("Enter second word: ");  //taking the second input
    scan_word(input2);  //using scan_word on the second input


    if(is_anagram(input1,input2)){ //conditional on is_anagram function
        same = 1;   //setting the value of the 'same' variable to 1 if is_anagram returns a true value
        if (same == 1){
            printf("The words are anagrams"); //printing the result
        }
    }
    else{
       same = 0;    //setting the value of the 'same' variable to 0 if is_anagram returns a false value
       if (same == 0){
        printf("The words are not anagrams");   //printing the result
       }
    }

    return 0;
}

