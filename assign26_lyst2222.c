#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee inputEmployee()
{
    struct Employee e;
    printf("Enter employee id, name and salary");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
void displayEmployee(struct Employee e)
{
    printf("\n%d %s %f",e.id,e.name,e.salary);
}
struct Employee highestSalaryEmployee(struct Employee e[],int n)
{
    int i;
    struct Employee emp;
    emp=e[0];
    for(i=1;i<=n-1;i++)
        if(emp.salary<e[i].salary)
            emp=e[i];
    return emp;
}
int indexOfHighestSalaryEmployee(struct Employee e[],int n)
{
    int i,index;
    struct Employee emp;
    emp=e[0];
    index=0;
    for(i=1;i<=n-1;i++)
        if(emp.salary<e[i].salary)
        {
            emp=e[i];
            index=i;
        }
    return index;
}
void sortBySalary(struct Employee e[],int n)
{
    struct Employee temp;
    int i,index;

    for(i=n-1;i>0;i--)
    {
        index=indexOfHighestSalaryEmployee(e,i+1);
        temp=e[i];
        e[i]=e[index];
        e[index]=temp;
    }
}
void sortByName(struct Employee e[], int n)
{
    int r,i;
    struct Employee temp;
    for(r=1;r<n;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(strcmp(e[i].name,e[i+1].name)>0)
            {
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }
        }
    }
}
struct Time
{
    int hr,min,sec;
};
struct Time difference(struct Time t1,struct Time t2)
{
    struct Time temp;
    int seconds=abs((t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec));
    temp.hr=seconds/3600;
    seconds=seconds%3600;
    temp.min=seconds/60;
    temp.sec=seconds%60;
    return temp;
}
struct Student
{
    int rollno;
    char name[20];
};
struct Student inputStudent()
{
    struct Student s;
    printf("\nEnter Student roll number and name");
    scanf("%d",&s.rollno);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void displayStudent(struct Student s)
{
    printf("\n%d %s",s.rollno,s.name);
}
void inputStudentArray(struct Student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        s[i]=inputStudent();
}
void displayStudentArray(struct Student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        displayStudent(s[i]);
}
struct Marks
{
    struct Student stu;
    int chem_marks,maths_marks,phy_marks;
};
struct Marks setMarks(struct Student s,int c,int m,int p)
{
    struct Marks m1;
    m1.stu=s;
    m1.chem_marks=c;
    m1.maths_marks=m;
    m1.phy_marks=p;
    return m1;
}
void printPercentage(struct Marks m)
{
    float per;
    per=(m.chem_marks+m.maths_marks+m.phy_marks)/3.0;
    printf("\n%d %s Percentage=%0.2f%%",m.stu.rollno,m.stu.name,per);
}
int main()
{
    struct Student s[10];
    inputStudentArray(s,10);
    displayStudentArray(s,10);
    printf("\n\n");
    struct Marks m[5];
    m[0]=setMarks(s[0],71,89,60);
    m[1]=setMarks(s[1],61,90,90);
    m[2]=setMarks(s[2],65,56,40);
    m[3]=setMarks(s[3],25,57,63);
    m[4]=setMarks(s[4],1,9,0); 
    int i;
    for(i=0;i<=4;i++)
        printPercentage(m[i]);
    printf("\n");
    return 0;
}