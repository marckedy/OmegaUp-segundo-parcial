
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, c=0, num;
    scanf("%d",&n);
    scanf("%d",&x);
    while(n>0){
        scanf("%d",&num);
        if(num==x)
            c++;
        n--;
    }
    printf("%d",c);
    return 0;
}

