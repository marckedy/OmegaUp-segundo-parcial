
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,x1,x2,c=0;
    
    scanf("%d",&N);
    scanf("%d",&x1);
    while(N>1){
        scanf("%d",&x2);
        if(x1>x2){
            c++;
        }
        N--;
    }
    printf("\n");
    printf("%d",c);
    
    return 0;
}

