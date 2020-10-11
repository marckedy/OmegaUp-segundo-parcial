
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,i,x,x1,x2=0,x3,cont=0;
    scanf("%d",&N);
    scanf("%d",&i);
    scanf("%d",&x);
    
    while(i>1){
        if(x1==0)
            x3=x;
        else
            x3=x2;
        
        scanf("%d",&x2);
        
        x3=x3+x2;
        if(x3%N==0)
            cont++;
        i--;
        x1++;
    }
    x=x2+x;
    
    if(x%N==0)
        cont++;
    printf("%d",cont);
    return 0;
}

