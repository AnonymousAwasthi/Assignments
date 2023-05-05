#include<stdio.h>
#include<string.h>
char* store(char str[]);
int main()
{
    char *p;
    char str[50];
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    p=store(str);
    printf("%s",p);
}
char* store(char str[])
{
    int k=strlen(str);
    char *p;
    p=(char*)malloc(k);
    int i;
    for(i=0;str[i];i++)
        *(p+i)=str[i];
    return p;
}
