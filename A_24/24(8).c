#include<stdio.h>
#include<string.h>
int anagram(char *p,char *q);
int main()
{
    char str[20];
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    char str1[20];
    fgets(str1,20,stdin);
    str1[strlen(str1)-1]='\0';
    int j;
    j=anagram(str,str1);
    printf("%d",j);

}
int anagram(char *p,char *q)
{
    int arr[128]={0};
    int brr[128]={0};
    int i;
    for(i=0;*(p+i);i++)
        arr[*(p+i)]++;
    for(i=0;*(q+i);i++)
        brr[*(q+i)]++;
    if(strlen(p)!=strlen(q))
        return 0;
    for(i=0;*(q+i);i++)
       {
           if(*(q+i)!=*(p+i))
        break;
       }
    if(i==strlen(p))
        return 1;
    else
        return 0;

}






