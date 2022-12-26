#include<stdio.h>
int main ()
{
    int i,a[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);  }

    if(i=0;i<=n;i++)
    {
        if(a[i]%2!==0)
        {
            printf("%d",a[i]);
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
        {
            printf("%d",a[i]);
        }
    }
}
