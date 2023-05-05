#include<stdio.h>
int main()
{
    int i;
    char str[40];
    fgets(str,40,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]=='h')
            break;
    }
    printf("%d",i);
}
