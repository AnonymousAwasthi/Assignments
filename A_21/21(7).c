#include<stdio.h>
int main()
{
    int i,j;
    char str[20],c;
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++);
    for(j=0;j<i/2;j++)
    {
        c=str[j];
        str[j]=str[i-1-j];
        str[i-1-j]=c;
    }
    printf("%s",str);

}
