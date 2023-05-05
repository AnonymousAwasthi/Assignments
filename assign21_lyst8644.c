#include<stdio.h>
#include<string.h>
void f1()
{
    char str[50];
    int len;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(len=0;str[len];len++);
    printf("Length is %d",len);

}
void f2()
{
    char ch, str[50];
    int i,count;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    fflush(stdin);
    printf("Enter a character");
    scanf("%c",&ch);
    for(i=0, count=0;str[i];i++)
        if(ch==str[i])
            count++;
    printf("Count=%d",count);
}
void f3()
{
    char str[50],v[]="aeiouAEIOU";
    int count,i,j;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0,count=0;str[i];i++)
        for(j=0;v[j];j++)
            if(str[i]==v[j])
            {
                count++;
                break;
            }
    printf("Count=%d",count);
}
void f4()
{
    char str[50];
    int i,count;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0,count=0;str[i];i++)
        if(str[i]==' ')
            count++;
    printf("Total spaces=%d",count);
}
void f5()
{
    char str[50];
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    printf("Updated String = %s",str);
}
void f6()
{
    char str[50];
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
    printf("Updated String = %s",str);
}
void f7()
{
    char str[50],ch;
    int i,l;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("Reverse of string is %s",str);
}
void f8()
{
    char str[50];
    int i,alpha_count=0,digit_count=0, other_count=0;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
    {
        switch(str[i])
        {
            case 'a' ... 'z':
            case 'A' ... 'Z':
                alpha_count++;
                break;
            case '0' ... '9':
                digit_count++;
                break;
            default:
                other_count++;

        }
    }
    printf("Alphabets=%d",alpha_count);
    printf("Digits=%d",digit_count);
    printf("Special Characters=%d",other_count);
}
void f9()
{
    char str[50],s[50];
    int i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        s[i]=str[i];
    s[i]='\0';
    printf("\n%s",s);
}
void f10()
{
    char str[50],ch;
    int i,l;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    fflush(stdin);
    printf("Enter a character: ");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
        if(ch==str[i])
            break;
    if(str[i]==0)
        printf("%c not found in %s",ch, str);
    else
        printf("%c found in %s at %d index",ch,str,i);
}
int main()
{
    f10();
    printf("\n");
    return 0;
}