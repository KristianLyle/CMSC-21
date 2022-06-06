#include <stdio.h>
#include <math.h>

struct line {   //declaring line struct
    struct point{   //declaring inner struct point
        float x;    //declaring x and y variables as float
        float y;
    }point1,point2; //naming inner struct
    float midpoint;    //declaring midpoint, slope, and distance as float
    float slope;
    float distance;
}line1; //naming outer struct

float solveSlope(struct line line1){    //defining solveSlope, solves for the slope of the line
    float numerator,denominator,slope;  //separating the numerator and denominator since we are dealing with division

    numerator= line1.point2.y - line1.point1.y; //subtracting y1 from y2
    denominator= line1.point2.x - line1.point1.x;   //subtracting x1 from x2
    slope= numerator / denominator; //dividing the difference of y2 and y1 by the difference of x2 and x1

    return slope;
};
void solveMidpoint (struct line line1){ //defining solveMidpoint, finds the midpoint of the line
    float x_value, y_value; //declaring the x and y value of the midpoint as floats

    x_value= (line1.point1.x + line1.point2.x)/ 2;  //solving for the x_value of the midpoint
    y_value= (line1.point1.y + line1.point2.y)/ 2;  //solving for the y_value of the midpoint

    printf("%f , %f",x_value,y_value);  //printing the output
};
float solveDistance(struct line line1){ //defining solveDistance, solves for the distance between the 2 points
    float x_difference,y_difference,x_squared, y_squared,distance;  //declaring variables to be used as floats

    x_difference= line1.point2.x - line1.point1.x;  //subtracting x1 from x2
    y_difference= line1.point2.y - line1.point1.y;  //subtracting y1 from y2

    x_squared= pow(x_difference, 2);    //squaring the difference of x2 and x1
    y_squared= pow(y_difference, 2);    //squaring the difference of y2 and y1

    distance= sqrt(x_squared + y_squared);  //taking the square root of the sum of the squared differences of the Xs and Ys

    return distance;

};
void getSlopeInterceptForm(struct line line1){  //defining getSlopeInterceptForm, prints the slope intercept form of the line
    float b_value, y_value; //declaring b and y as float

    y_value= (-1) * line1.point1.y; //multiplying y by -1 since the value of y1 is negated in the point slope form
    b_value= (solveSlope(line1)*(-1*line1.point1.x)) + (y_value * -1);  //formula for b, by multiplying the slope to x1 and adding the transposed value of y1

    if(b_value < 0){    //conditional if b is less than 0
        printf("\ny = %fx - %f",solveSlope(line1),b_value* (-1)); //multiplying by -1 so that negative sign wont duplicate
    }
    else{
    printf("\ny = %fx + %f",solveSlope(line1),b_value); //output when b is positive
    }

};

int main(void){ //main function

printf("Enter x and y for point1: ");   //taking an input for point1
scanf("%f",&line1.point1.x);    //storing x value in point1.x
scanf(" %f",&line1.point1.y);   //storing y value in point1.y


printf("Enter x and y for point2: ");   //taking an input for point2
scanf("%f",&line1.point2.x);    //storing x value in point2.x for x2
scanf(" %f",&line1.point2.y);   //storing y value in point2.y for y2

printf("\nSlope: %f",solveSlope(line1));    //printing the slope of the line by calling solveSlope function
printf("\n");
printf("\nMidpoint: ");
solveMidpoint(line1);       //printing midpoint by calling solveMidpoint function
printf("\n");
printf("\nDistance between 2 points: %f",solveDistance(line1)); //printing the distance between the two points by calling solveDistance function
printf("\n");
getSlopeInterceptForm(line1);   //printing the slope-intercept form of the line
printf("\n");

return 0;
}

