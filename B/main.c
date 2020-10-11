
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,num;
    char cad[100000];
    int x=0,x2;
    scanf("%d",&N);
    while(N>0){
        
        scanf("%d",&num);
        if((num%3==0) && (num%5!=0)){
             cad[x]=1;
            
        }
        if((num%5==0) && (num%3!=0)){
            cad[x]=2;
            
        }
        if((num%3==0) && (num%5==0)){
            cad[x]=3;
            
        }
        if((num%3!=0) && (num%5!=0)){
            cad[x]=4;
            
        }
        x++;
        N--;
    }
    x2=x;
    x=0;
    while(x<=x2){
        if(cad[x]==1)
            printf("Fizz\n");
        if(cad[x]==2)
            printf("Bozz\n");
        if(cad[x]==3)
            printf("FizzBozz\n");
        if(cad[x]==4)
            printf("NoFizzBozz\n");
        x++;
        
    }
    return 0;
}

