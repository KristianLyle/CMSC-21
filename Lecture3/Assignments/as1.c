#include <stdio.h>
int main(void){
    int age;

    printf("Please enter age: ");
    scanf("%d", &age);

    if (age >= 13 && age <= 19){
        teenager= true;
        }
    else{
        teenager= false;
        }

    return 0;
}
