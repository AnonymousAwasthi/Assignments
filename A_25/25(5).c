#include<stdio.h>
#include<string.h>
void extract_string(char *str,int lower_index,int upper_index,char *arr);
int main()
{
    char str[20];
    fgets(str,20,stdin);
    int li,ui;
    printf("Enter upper index");
    scanf("%d",&ui);
    printf("Enter lower index");
    scanf("%d",&li);
    char arr[5];
    extract_string(str,li,ui,arr);

}
void extract_string(char *str,int lower_index,int upper_index,char *arr)
    {
        int i;
        for(i=lower_index;i<=upper_index;i++)
        {
            arr[i-lower_index]=str[i];
            printf("%c",arr[i-lower_index]);
        }
    }
