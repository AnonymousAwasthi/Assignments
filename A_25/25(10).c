#include<stdio.h>
void max_mark(int **q,int m,int *x);
int main()
{
    int a[10]={54,65,38,22,98,16,57,39,48,61},b[8]={84,92,62,51,43,81,58,47},c[6]={56,23,15,29,41,84},d[11]={12,13,14,15,10,17,18,19,20,25,26},e[5]={84,85,87,92,15};
    int *p[5];
    *p=a;*(p+1)=b;*(p+2)=c;*(p+3)=d;*(p+4)=e;
    int size[5]={10,8,6,11,5};
    max_mark(p,5,size);
}
void max_mark(int **q,int m,int *x)
{
    int **w,i,j;
    w=q;
    for(i=0;i<m;i++)
    {
        for(j=0;j<*(x+i);j++)
        {
            if(*(*(q+i)+j)>**w)
               {
                   **w=*(*(q+i)+j);
               }
        }
    }
    printf("Maximum mark is %d",**w);
}

