#include<stdio.h>
int main()
{
    void reverse(char str[])
    {
        int i,j;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        for(i=0;str[i];i++);
        for(j=0;j<i/2;j++)
        {
            char c=str[j];
            str[j]=str[i-1-j];
            str[i-1-j]=c;
        }
        printf("%s",str);
    }
    char str[20];
    fgets(str,20,stdin);
    reverse(str);


}
