#include<stdio.h>
/*
1. Write a program to calculate the sum of numbers 
stored in an array of size 10. Take array values from 
the user.

int main()
{
    int i,a[10],sum=0;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    printf("Sum is %d",sum);
    printf("\n");
    return 0;
}

2. Write a program to calculate the average of numbers 
stored in an array of size 10. Take array values from 
the user.

int main()
{
    int i,a[10],sum=0;
    float avg;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    avg=sum/10.0;
    printf("Average is %f",avg);
    printf("\n");
    return 0;
}



3. Write a program to calculate the sum of all even numbers
 and sum of all odd numbers, which are stored in an array
  of size 10. Take array values from the user.

  int main()
{
    int i,a[10],sum_even=0,sum_odd=0;
    
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            sum_even=sum_even+a[i];
        else
            sum_odd=sum_odd+a[i];
    }

    printf("\nSum of all even is %d",sum_even);
    printf("\nSum of all odd is %d",sum_odd);
    printf("\n");
    return 0;
}

4. Write a program to find the greatest number stored in 
an array of size 10. Take array values from the user.

  int main()
{
    int i,a[10],max;
    
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    
    printf("\nGreatest number is %d",max);
    printf("\n");
    return 0;
}

5. Write a program to find the smallest number stored 
in an array of size 10. Take array values from the user.

 int main()
{
    int i,a[10],min;
    
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    
    printf("\nSmallest number is %d",min);
    printf("\n");
    return 0;
}

6. Write a program to sort elements of an array of size 10.
 Take array values from the user.
 
 int main()
{
    int i,a[10],r,t;
    
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(r=1;r<=9;r++)
        for(i=0;i<=9-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    printf("\n\n");
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    
    printf("\n");
    return 0;
}


7. Write a program to find second largest in an array.
Take array values from the user.

int main()
{
    int i,a[10],max,second_max;
    
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if(a[0]>a[1])
    {
        max=a[0];
        second_max=a[1];
    }
    else
    {
        max=a[1];
        second_max=a[0];
    }
    for(i=2;i<=9;i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else
        {
            if(a[i]>second_max)
                second_max=a[i];
        }
    }
    
    printf("\nSecond Largest number is %d",second_max);
    printf("\n");
    return 0;
}

8. Write a program to find the second smallest number in an array.Take array values
from the user.

int main()
{
    int i,a[10],min,second_min;
    
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if(a[0]<a[1])
    {
        min=a[0];
        second_min=a[1];
    }
    else
    {
        min=a[1];
        second_min=a[0];
    }
    for(i=2;i<=9;i++)
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else
        {
            if(a[i]<second_min)
                second_min=a[i];
        }
    }
    
    printf("\nSecond smallest number is %d",second_min);
    printf("\n");
    return 0;
}

9. Write a program to sort an array of 10 elements in 
descending order.
int main()
{
    int i,a[10],r,t;
    
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(r=1;r<=9;r++)
        for(i=0;i<=9-r;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    printf("\n\n");
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    
    printf("\n");
    return 0;
}

10. Write a program in C to copy the elements of one 
array in to another array.Take array values from the user.
*/
int main()
{
    int i,a[10],b[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        b[i]=a[i];
    
    for(i=0;i<=9;i++)
        printf("%d",b[i]);
 
    printf("\n");
    return 0;
}