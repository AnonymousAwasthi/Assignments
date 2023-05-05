#include<stdio.h>
#include<string.h>
void swap_string(char *str,char *arr);
int main()
{
    char str[20];
    fgets(str,20,stdin);
    char arr[20];
    fgets(arr,20,stdin);
    swap_string(str,arr);
    printf("str has %s\n",str);
    printf("arr has %s",arr);

}
void swap_string(char *str,char *arr)
    {
        int i;
        for(i=0;str[i];i++)
        {
            char c=arr[i];
            arr[i]=str[i];
            str[i]=c;
        }
    }
