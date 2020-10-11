
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,x,acom=0,acom2=0,y1=0,y2=0;
    scanf("%d",&num);
    while(num>0){
        scanf("%d",&x);
    if(x%2==0){
        acom=acom+x;
        y1++;
    }else{
        acom2=acom2+x;
        y2++;
    }
    num--;
    }
    acom=acom/y1;
    acom2=acom2/y2;
    if(acom>acom2)
        printf("APARICIO");
    if(acom2>acom)
        printf("NONILA");
    if(acom==acom2)
        printf("EMPATE!");
    return 0;
}

