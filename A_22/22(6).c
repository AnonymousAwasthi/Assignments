#include<stdio.h>
int main()
{
    int count_vowel(char str[])
    {
        int i,j;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        int count=0;
        for(i=0;str[i];i++)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
              count++;
        }
        return count;
    }
    char s1[20];
    fgets(s1,20,stdin);
    int k=count_vowel(s1);
    printf("%d",k);


}
