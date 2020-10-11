
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,i=1,i2;
    scanf("%d",&N);
    while(i<=N){
        i2=i;
        while(i2>0){
            printf("%d",i);
            i2--;
        }
        i++;
        printf("\n");
    }
    i--;
    i--;
    while(i>0){
        i2=i;
        while(i2>0){
            printf("%d",i);
            i2--;
        }
        i--;
        printf("\n");
    }
    return 0;
}

