#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[40],rap[40];
    fgets(str,40,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    strcpy(rap,str);
    printf("%s",rap);
}
