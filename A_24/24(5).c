#include<stdio.h>
#include<string.h>
int main()
{
    char names[15][20];
    printf("Enter 15 names");
    int i;
    for(i=0;i<15;i++)
    {fgets(names[i],20,stdin);
    names[i][strlen(names[i])-1]='\0';}
    clear_duplicate_name(names,15);
    for(i=0;i<15;i++)
        printf("%s\n",names[i]);
}
void clear_duplicate_name(char p[][20],int m)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
           if(strcmp(p[i],p[j])==0)
           {
               for(k=0;p[j][k];k++)
                p[j][k]='\0';
           }
        }
    }
}

