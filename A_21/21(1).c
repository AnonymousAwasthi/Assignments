#include<stdio.h>
int main()
{
    int i;
    char str[20];
        fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++);
    printf("%d",i);

}
