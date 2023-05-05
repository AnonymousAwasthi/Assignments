#include<stdio.h>
int main()
{
    void print(int x,int y)
    {
        for(int i=x+1;i<y;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                 count++;
            }
            if(count==2)
                printf("%d",i);
        }
    }
    print(24,55);
    return 0;
}
