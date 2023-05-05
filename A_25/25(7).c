#include<stdio.h>
#include<string.h>
void sort(int *str);
int main()
{
    int arr[20],i;
    for(i=0;i<20;i++)
    scanf("%d",&arr[i]);
    sort(arr);

}
void sort(int *str)
    {
        int i,j;
        for(i=0;i<20;i++)
        {
            for(j=0;j<i;j++)
            {   if(str[i]<str[j])
                {
                    int c=str[i];
                    str[i]=str[j];
                    str[j]=c;
                }
            }
        }
        for(i=0;i<20;i++)
        {
            printf("%d",str[i]);
        }
    }
