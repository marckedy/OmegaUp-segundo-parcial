
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float m,n;
    int a,b,c,cont=0;
    float c2,c3;
    scanf("%f",&n);
    scanf("%f",&m);
    for(n;n<=m;n++){
        a=n;
        b=n;
        for(b;b<=m;b++){
            c=sqrt(pow(b,2)+pow(a,2));
            c2=sqrt(pow(b,2)+pow(a,2));
            c2=c2/c;
            if((c2==1) && (c<=m))
                cont++;
        }
    }
    printf("%d",cont);
    return 0;
}

