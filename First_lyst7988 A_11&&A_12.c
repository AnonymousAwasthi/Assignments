#include<stdio.h>
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
void f9();
void f10();
void s1();
void s2();
void s3();
void s4();
void s5();
void s6();
void s7();
void s8();
void s9();
void s10();
int main()
{
    s10();
    printf("\n");
    return 0;
}
void s10()
{
    int i,j;
    char k;

    for(i=1;i<=4 ;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}
void s9()
{
    int i,j,k;

    for(i=1;i<=4 ;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}
void s8()
{
    int i,j;

    for(i=1;i<=4 ;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void s7(int lines)
{
    int i,j,k,x;

    for(i=1;i<=lines ;i++)
    {
        k=1;
        x=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                if(k)
                {
                    printf("%d",x);
                    j<lines?x++:x--;
                }
                else
                {
                    printf(" ");
                    if(j==lines)
                        x--;
                }
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void s6()
{
    int i,j;
    char k;
    for(i=1;i<=4 ;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void s5()
{
    int i,j;
    char k;
    for(i=1;i<=4 ;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void s4()
{
    int i,j,k;

    for(i=1;i<=4 ;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void s3(int lines)
{
    int i,j,k;

    for(i=1;i<=lines ;i++)
    {
        k=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                if(k)
                    printf("*");
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void s2()
{
    int i,j;

    for(i=1;i<=4 ;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void s1()
{
    int i,j;

    for(i=1;i<=4 ;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f10()
{
    int i,j;

    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f9()
{
    int i,j;
    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",64+j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f8()
{
    int i,j,k=1;

    for(i=1;i<=4 ;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {    
                printf("%d",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f7()
{
    int i,j;
    char k;
    for(i=1;i<=5 ;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f6()
{
    int i,j,k;

    for(i=1;i<=4 ;i++)
    {
        k=i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {    
                printf("%d",k);
                k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f5()
{
    int i,j;

    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f4()
{
    int i,j;

    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f3()
{
    int i,j;

    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f2()
{
    int i,j;

    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void f1()
{
    int i,j;

    for(i=1;i<=5 ;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}