#include <stdio.h>

#define N_ROWS 8        //using macros to define array size
#define N_COLUMNS 8

int main(void){         //declaring the main function
    int user_input, i, j;   //declaring variable for user input and for loop intialization
    char *road_stations[]={"A", "B", "C", "D", "E", "F", "G", "H"}; //initializing array of strings for final output
    char *array_stations[]= {"  A", "  B","[C]","[D]", "  E", "  F", "  G", "  H"};   //initializing array of strings for 2d matrix printing

    int road_networks[N_ROWS][N_COLUMNS]= { //initializing 2d array
        { 1, 1,0,0, 0, 1, 0, 0},
        { 1, 1,1,0, 0, 0, 0, 0},
        { 0, 1,1,0, 1, 1, 0, 0},
        { 0, 0,0,1, 1, 0, 0, 0},
        { 0, 0,0,1, 1, 0, 0, 0},
        { 1, 0,1,0, 0, 1, 0, 0},
        { 1, 0,0,1, 0, 0, 1, 0},
        { 0, 0,0,0, 0, 1, 0, 1}
    };

printf("         A       B       [C]     [D]     E       F       G       H\n"); //manually printing the header part of the 2d array
for(i= 0;i < N_ROWS; i++){  //iteration through array rows
    printf("%s",array_stations[i]); //printing row labels on the side
    for (j= 0; j < N_COLUMNS; j++){ //iteration through the columns
        printf("%8d",road_networks[i][j]);  //printing 1 and 0 values on the 2d array
    }
    printf("\n");
}

printf("\n");

printf("Which point are you located? 0- A,1- B, 2- C, 3- D, 4- E, 5- F, 6- G, 7- H \n");   //taking an input from the user for starting point
scanf("%d",&user_input);   //storing user input in previously declared variable

printf("\nAt point: %s", road_stations[user_input]);    //printing starting point

int locator;    //declaring locator variable, to navigate through the 2d array

for(locator= 0; locator < N_COLUMNS;){ //iteration of locator through the columns of the 2d array
    if(road_networks[user_input][locator] == 1){    //if statement when the iteration arrives at a true value
       printf("\nNow at point: %s",road_stations[locator]); //printing the current location

       if (locator == 2){   //when locator arrives at column C
        printf("\nArrived at charging station: %s", road_stations[locator]);    //printing the indication that the iteration has arrived at charging station C
        break;  //ending the for loop
       }
       else if (locator == 3){  //when locator arrives at column D
        printf("\nArrived at charging station: %s", road_stations[locator]);    //printing the indication that the iteration has arrived at charging station D
        break;  //ending the for loop
       }
       user_input = locator;    //setting the value for the default value of the row (user_input) into the value of the locator
       locator += 1 ;   //incrementing 1 to the value of the locator to avoid an infinite loop when arriving at station A
    }
    else if(locator == 7){  //if statement when the locator reaches the value 7 without arriving at the nearest charging station
            locator = 0;    //resetting the value of the locator back to 0 in order to continue the loop
       }
    else{
        locator += 1;   //loop will increment the value of 1 to the locator when it lands on a false location
    }

}
return 0;
}
