#include<stdio.h>

perfect(int m, int n)
{
    int i,j,sum;
    for(i=m;i<=n;i++){
        sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            printf("%d",i);
        }
    }
}
