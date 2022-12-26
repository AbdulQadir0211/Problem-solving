void strreverse(char *);
void main()
{
    char a[10];
    printf("Enter a string");
    scanf("%s",&a);
    strreverse(a);
    printf("Reverse string=%s",a);
}

void strreverse(char *p)
{
    char *q,r;
    q=p;
    while(*q!='\0')
    {
        q++;
    }
    q--;
    while(p<q)
    {
        r=*p;
        *p=*q;
        *q=r;
    }
}
