#include<stdio.h>
#include<string.h>
void sort(char p[][20],int n);
int main()
{
    int i;
    char city[10][20];
    printf("Enter names of 10 cities\n");
    for(i=0;i<10;i++)
        {fgets(city[i],20,stdin);
        city[i][strlen(city[i])-1]='\0';}
    sort(city,10);
    for(i=0;i<10;i++)
        printf("%s\n",city[i]);
}
void sort(char p[][20],int n)
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(p[i],p[j])==1)
            {
                char temp[20];
                strcpy(temp,p[i]);
                strcpy(p[i],p[j]);
                strcpy(p[j],temp);
            }
        }
    }
}
