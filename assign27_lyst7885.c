#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
char* inputString()
{
    char ch,*p=NULL,*q=NULL;
    int i,size=1;
    printf("Enter text: ");
    p=(char*)malloc(size);
    p[0]='\0';
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
            break;
        q=(char*)malloc(size+1);
        for(i=0;i<size;i++)
            q[i]=p[i];
        q[i-1]=ch;
        q[i]='\0';
        free(p);
        size++;
        p=(char*)malloc(size);
        strcpy(p,q);
        free(q);
    }
    return p;
}
int *merge(int A[],int size1,int B[],int size2)
{
    int i,j,k;
    int *C;
    C=(int*)calloc(size1+size2,sizeof(int));
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    while(i<size1)
    {
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<size2)
    {
        C[k]=B[j];
        k++;
        j++;
    }
    return C;
}
void f4()
{
    int a[]={10,12,15,18,25,37};
    int b[]={8,11,13,21,24};
    int *p,i;
    p=merge(a,6,b,5);
    for(i=0;i<11;i++)
        printf("%d ",p[i]);
}
void f3()
{
    int *p,size,i,s=0;
    printf("How many values you want to enter");
    scanf("%d",&size);
    p=(int*)malloc(sizeof(int)*size);
    printf("Enter %d numbers",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        s=s+p[i];
    
    printf("Sum is %d",s);
    free(p);
}
void f2()
{
    int *p,size,i,s=0;
    float avg;
    printf("How many values you want to enter");
    scanf("%d",&size);
    p=(int*)malloc(sizeof(int)*size);
    printf("Enter %d numbers",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        s=s+p[i];
    avg=(float)s/size;
    printf("Average is %f",avg);
    free(p);
}
void f1()
{
    char *ptr=NULL;
    ptr=inputString();
    printf("%s",ptr);
    printf("\n");
    
}
struct Student
{
    char name[20];
    int rollno;
    char college[40];
};
struct Team
{
    struct Student s1;
    struct Student s2;
};
struct Student* newStudent(char n[],int r,char c[])
{
    struct Student *p;
    p=(struct Student*)malloc(sizeof(struct Student));
    strcpy(p->name,n);
    p->rollno=r;
    strcpy(p->college,c);
    return p;
}
struct Team* newTeam(struct Student x, struct Student y)
{
    struct Team *p;
    p=(struct Team*)malloc(sizeof(struct Team));
    p->s1=x;
    p->s2=y;
    return p;
}
void displayStudent(struct Student s)
{
    printf("\n%s\n%d\n%s",s.name,s.rollno,s.college);
}
void displayTeam(struct Team t)
{
    printf("\nTeam:\n");
    displayStudent(t.s1);
    displayStudent(t.s2);
}
struct Student** createStudentArray(int size)
{
    struct Student **ptr;
    ptr=(struct Student **)malloc(size*sizeof(struct Student*));
    return ptr;
}
struct Team** createTeamArray(int size)
{
    struct Team **ptr;
    ptr=(struct Team**)malloc(size*sizeof(struct Team*));
    return ptr;
}
void driverFunction()
{
    char n[6][10]={"Aman","Sandeep","Bhavna","Vishal","Blesson","Divaker"};
    int i,r[6]={100,105,108,112,114,115};
    char c[6][10]={"NITT","NITK","MANIT","MNNIT","NITD","NITJ"};
    struct Student **sptr;
    struct Team **tptr;
    sptr=createStudentArray(6);
    tptr=createTeamArray(3);
    for(i=0;i<=5;i++)
        sptr[i]=newStudent(n[i],r[i],c[i]);
    tptr[0]=newTeam(*sptr[0],*sptr[2]);
    tptr[1]=newTeam(*sptr[4],*sptr[1]);
    tptr[2]=newTeam(*sptr[3],*sptr[5]);
    for(i=0;i<=2;i++)
        displayTeam(*tptr[i]);
}
int main()
{
    driverFunction();
    printf("\n");
    return 0;
}