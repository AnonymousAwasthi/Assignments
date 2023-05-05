#include<stdio.h>
void store(char str[][40],int x);
int main()
{
    int i;
    char str[5][40];
    store(str,5);
    for(i=0;i<5;i++)
    printf("%s\n",str[i]);
}
void store(char str[][40],int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        printf("Enter a string of length less than 40");
        fgets(str[i],40,stdin);
    }
}
