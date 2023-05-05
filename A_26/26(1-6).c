#include<stdio.h>
#include<string.h>

struct Employee
    {
        int id;
        char name[20];
        float salary;
    };
struct Employee highest_salary(struct Employee e[],int n);
struct Employee input();
void display(struct Employee b);
void sort_name(struct Employee e[],int m);
void sort_salary(struct Employee e[],int m);
int main()
{
   //struct Employee b;
    //b=input();
    //display(b);
    struct Employee em[10];
    int i;
    for(i=0;i<10;i++)
        em[i]=input();
    display(highest_salary(em,10));
    sort_salary(em,10);
    for(i=0;i<10;i++)
        display(em[i]);
    sort_name(em,10);
    for(i=0;i<10;i++)
        display(em[i]);
}
struct Employee input()
{
    struct Employee b1;
    printf("Enter Employee id");
    scanf("%d",&b1.id);
    printf("Enter Employee name");
    fflush(stdin);
    fgets(b1.name,20,stdin);
    printf("Enter Employee salary");
    scanf("%f",&b1.salary);
    return b1;
}
void display(struct Employee b)
{
    printf("Employee id =%d\n",b.id);
    printf("Employee name=%s",b.name);
    printf("Employee salary =%.2f",b.salary);
}
struct Employee highest_salary(struct Employee e[],int n)
{
   struct Employee temp={0,"\0",0.00};
   int i;
   for(i=0;i<n;i++)
   {
       if(e[i].salary>temp.salary)
        temp=e[i];
   }
   return temp;
}
void sort_salary(struct Employee e[],int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                struct Employee temp;
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}
void sort_name(struct Employee e[],int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strcmp(e[i].name,e[j].name)==1)
            {
                struct Employee temp;
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}
