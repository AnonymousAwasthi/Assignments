#include<stdio.h>
#include<string.h>
int sort1(int*,int);
int main()
{
    int arrA[10],i;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&arrA[i]);
    int *k;
    k=arrA;
    k=sort1(arrA,10);
    for(i=0;i<10;i++)
    printf("%d ",*(arrA+i));
}
int sort1(int *arr,int k)
{
    int j;
    for(j=1;j<10;j++)
        {
            if(*(arr+j-1)>*(arr+j))
            {
                int c=*(arr+j-1);
                *(arr+j-1)=*(arr+j);
                *(arr+j)=c;
            }
        }
}
