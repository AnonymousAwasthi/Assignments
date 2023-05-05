#include<stdio.h>
int main()
{
    void check(char str[])
    {
        int i,j;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        int count=0,count1=0;
        for(i=0;str[i];i++)
        {
            switch(str[i])
            {
            case 'a' ... 'z':
                count++;
                break;
            case '0' ... '9':
                count1++;
                break;
            }

        }if(count>0&&count1>0)
                printf("Given string is alphanumeric string ");
            else
                printf("Given string is not a alphanumeric string");
    }
    char s1[20];
    fgets(s1,20,stdin);
    check(s1);

}
