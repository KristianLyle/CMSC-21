#include <stdio.h>
int main (void){
    int num_days, starting_day,i;

    i= 1;

    printf("Enter number of days in month: ");
    scanf("%d", &num_days);
    printf("Enter starting day of the weak (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    if(num_days >= 32 || num_days < 28){
        printf("Invalid Number of Days");
    }
    else{
       for(i=1; i <= starting_day; i++){
        printf("  ");
       }
       for(i=1; i <= num_days; i++ ){
        printf("%3d",i);
        if(((i+starting_day)-1)%7 == 0){
            printf("\n");
        }
       }
    }
    return 0;
}
