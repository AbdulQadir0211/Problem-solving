int rstrcmp(char *,char *);
void main()
{
    char a[100], b[100];
    printf("Enter the string 1: ");
    scanf("%s",a);
    printf("Enter the string 2: ");
    scanf("%s",b);
    rstrcmp(a,b);
}

int rstrcmp(char *p,char *q)
{
    while(*p==*q)
    {
        if(*p=='\0')
            return (0);
        p++;
        q++;
    }
    return(*p-*q);
}
