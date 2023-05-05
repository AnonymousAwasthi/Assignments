#include <stdio.h>
int main()
{
    int N,p=1,i=1;
    printf("Enter a number\n");
    scanf("%d",&N);
    while(p<=N)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
        {
            printf("%d",i);
            p++;
        }
        i++;
    }
}
