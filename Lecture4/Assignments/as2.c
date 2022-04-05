#include <stdio.h>
int main(void){
    int i;
    i=1;

    printf("While Output: ");
    while (i < 10) {
        printf("\n%d",i);
        i += 1;
    }
    printf("\nFor Output: ");
    for (i=1; i < 10;i +=1 ) {
        printf("\n%d",i);
    }
    printf("\nDo-While Output: ");
    do {
        printf("\n%d",i);
        i += 1;
    } while (i < 10);
return 0;
}
