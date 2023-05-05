#include<stdio.h>
#include<string.h>
void store(char str[][40],int x,int a[][2]);
int main()
{
    int i,arr[5][2];
    char str[5][40];
    store(str,5,arr);
    for(i=0;i<5;i++)
    {
        arr[i][0]=i+1;
        printf("%d->%d\n",arr[i][0],arr[i][1]);
    }
}
void store(char str[][40],int x,int a[][2])
{
    int i,j;
    for(i=0;i<x;i++)
    {
        int count=0;
        printf("Enter a string of length less than 40");
        fgets(str[i],40,stdin);
        str[i][strlen(str[i])-1]='\0';
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
                count++;
        }
        a[i][1]=count;

    }

}
