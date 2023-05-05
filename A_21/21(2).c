#include<stdio.h>
int main()
{
    int i;
    char str[20],c;
    int count=0;
    c='h';
        fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]=='h')
            count++;
    }
    printf("%d",count);

}
