#include <stdio.h>
int main(void){
    int i,j;

    j= 1;

    printf("n \t 2 to the n \n");

    for(i=0; i <=10; i += 1){
        printf("%i\t",i);
        printf("%d\n",j);
        j *= 2;
    }

}
