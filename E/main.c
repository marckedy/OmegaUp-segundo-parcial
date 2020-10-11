
#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int N, y, y2, x, x1, temporal, mcm, alterna, cont=0;
    
    scanf("%d",&N);
    scanf("%d",&y);
    do{
        scanf("%d",&x);
        if(x!=0){
            alterna=y%x;
        }else
            alterna=y+x;
        if((alterna!=0) || (cont==0)){
        y2=y;
        x1=x;
        cont++;
            while (x != 0) {
                temporal = x;
                x = y % x;
                y = temporal;
            }
            if((y2==0) || (x1==0)){
                mcm=y2+x1;
                y=mcm;
            }
            else{
                mcm=(y2*x1)/y;
                y=mcm;
            }
        }
        N--;
    }while(N>1);
    printf("%d",mcm);
    
 return 0;   
}
    