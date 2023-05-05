#include<stdio.h>
#include<string.h>
int search(char str[]);
int main()
{
    char str[50];
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    int c;
    c=search(str);
    printf("Max occurance is of %c",c);
}
int search(char str[])
{
    int arr[128]={0};
    int i;

    for(i=0;str[i];i++)
    { arr[str[i]]++;

    }

    int max=0,j;
    char c;
    for(i=0;i<128;i++)
        if(arr[i]>max)
    {
        max=arr[i];
        j=i;
    }
    return j;
}








