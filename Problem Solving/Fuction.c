#include<stdio.h>
int fact(int x,int y)
{
    if(y==1 || y==0)
        return(x);
    else
        fact(x*y,y-1);

}

int main()
{
    fact(5,6);
}
