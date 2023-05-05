#include<stdio.h>
#include<string.h>
void search_all_occurance(char *str,char ch,char *arr);
int main()
{
    char str[20],c;
    printf("Enter character to be searched");
    scanf("%d",&c);
    fflush(stdin);
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    int arr[20];
    search_all_occurance(str,c,arr);
}
void search_all_occurance(char *str,char ch,char *arr)
{
    int i,j=0;
    for(i=0;*(str+i);i++)
    {
        if(*(str+i)==ch)
        {
            *(arr+j)=i;
            printf("%c occurs at index %d\n",ch,*(arr+j));
            j++;
        }
    }
}
