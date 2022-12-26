#include<stdio.h>
void reverse(char *);
void main()
{
    char name[10];
   // int length;
    printf("Enter String :");
    scanf("%s",name);
    reverse(name);
    printf("%s",name);

}

int xstrlen(char *p)
    {
    int count=0;
    while(*p!='\0')
    {
        p++;
        count++;

    }
    return(count);
}

void reverse(char *x)
{
    char *y,t;
    y=x;
    while(*y!='\0')
    {
        y++;
    }
    y--;
    while(y>x)
    {
        t=*y;
        *y=*x;
        *x=t;
        x++;
        y--;
    }
}
