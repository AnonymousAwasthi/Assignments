#include<stdio.h>
int is_even(int x);
float area_of_circle(int r);
float simple_interest(int p,float r, int t);
void printN(int n);
void print_odd_n(int n);
long int fact(int n);
int combi(int n,int r);
int permu(int n,int r);
int is_number_contains_digit(int num, int digit);
void prime_factors(int n);

void prime_factors(int n)
{
    int i=2;
    while(n>1)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
        else
            i++;
    }
}
int is_number_contains_digit(int num, int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num/=10;
    }
    return 0;

}
int combi(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}
int permu(int n,int r)
{
    return fact(n)/fact(n-r);
}
long int fact(int n)
{
    long int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}
void print_odd_n(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",2*i-1);
}
void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
float area_of_circle(int r)
{
    float a;
    a=3.14*r*r;
    return a;
}
float simple_interest(int p,float r, int t)
{
    float si;
    si=p*r*t/100;
    return si;
}
int is_even(int x)
{
    return x%2?0:1;
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    prime_factors(n);
    printf("\n");
    return 0;
}
