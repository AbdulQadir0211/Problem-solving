#include<stdio.h>
int main()
{
    int i,j;
    int n=150;
    for(i=1;i<=n;i++){
        printf("*");

    }
    printf("\n");
    for(i=1;i<=n-2;i++){
        for(j=n-i-1;j>=1;j--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i=1;i<=n;i++){
        printf("*");
    }
}
