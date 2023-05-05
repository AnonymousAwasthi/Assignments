#include<stdio.h>
#include<string.h>
int main()
{
    char names[15][20];
    printf("Enter 15 names");
    int i,j=0,k=0;
    for(i=0;i<15;i++)
    {fgets(names[i],20,stdin);
    names[i][strlen(names[i])-1]='\0';
    if(names[i][strlen(names[i])-1]=='s')
    j++;}
    char list[j][20];
    for(i=0;i<15;i++)
        if(names[i][strlen(names[i])-1]=='s')
    {strcpy(list[k],names[i]);k++;}
    for(i=0;i<j;i++)
        printf("%s\n",list[i]);
}


