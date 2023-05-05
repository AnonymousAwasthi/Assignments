#include<stdio.h>
int main()
{
    int reverse(char str[],char str1[])
    {
        int i,j;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        for(i=0;str1[i];i++);
        str1[i-1]='\0';
        for(i=0;str[i]||str1[i];)
        {
            if(str[i]==str1[i])
                i++;
            else if(str[i]<str1[i])
                return -1;
            else
                return 1;
        }
        return 0;
    }
    char s1[20],s2[20];
    fgets(s1,20,stdin);
    fgets(s2,20,stdin);
    int k=reverse(s1,s2);
    printf("%d",k);


}
