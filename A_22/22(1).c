#include<stdio.h>
int main()
{
    int strlen(char str[])
    {
        int i;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        for(i=0;str[i];i++);
        return i;
    }
    char str[20];
    fgets(str,20,stdin);
    int k=strlen(str);
    printf("%d",k);


}
