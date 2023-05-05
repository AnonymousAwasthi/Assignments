#include<stdio.h>
#include<string.h>
int main()
{
    void check(char str[])
    {
        int i,j;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        char cpy[i];
        //for(j=0;j<i;j++)
          //  cpy[j]=str[j];
        strcpy(cpy,str);
        for(i=0;str[i];i++);

            for(j=0;j<i/2;j++)
            {
                int c=str[j];
                str[j]=str[i-1-j];
                str[i-1-j]=c;
            }

        int x=strcmp(cpy,str);
        if(x)
                printf("Given string is not palindrome string ");
            else
                printf("Given string is palindrome string");
    }
    char s1[20];
    fgets(s1,20,stdin);
    check(s1);

}
