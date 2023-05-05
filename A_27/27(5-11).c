#include<stdio.h>
#include<string.h>
struct student* input_s(char *p,int,char *q);
struct team* input_t(struct student a,struct student b);
void display_s(struct student s);
void display_t(struct team t);
struct student* create_array_s(int n);
struct team* create_array_t(int n);
struct student
{
    char name[20];
    int r_num;
    char clg_name[40];
};
struct team
{
    struct student s1,s2;
};
int main()
{
    struct student s1,s2,s3,s4,s5,s6;
    struct team t1,t2,t3;
    char name1[20];
    printf("Enter name of student");
    fflush(stdin);
    fgets(name1,20,stdin);
    name1[strlen(name1)-1]='\0';
    int r_num1;
    printf("Enter roll number");
        scanf("%d",&r_num1);
    char clg_name1[40];
    printf("Enter college name");
    fflush(stdin);
    fgets(clg_name1,40,stdin);
    struct student *p;
    p=input_s(name1,r_num1,clg_name1);
    s1=*p;

    char name2[20];
    printf("Enter name of student");
    fflush(stdin);
    fgets(name2,20,stdin);
    name2[strlen(name2)-1]='\0';
    int r_num2;
    printf("Enter roll number");
        scanf("%d",&r_num2);
    char clg_name2[40];
    printf("Enter college name");
    fflush(stdin);
    fgets(clg_name2,40,stdin);
    p=input_s(name2,r_num2,clg_name2);
    s2=*p;

    char name3[20];
    printf("Enter name of student");
    fflush(stdin);
    fgets(name3,20,stdin);
    name3[strlen(name3)-1]='\0';
    int r_num3;
    printf("Enter roll number");
        scanf("%d",&r_num3);
    char clg_name3[40];
    printf("Enter college name");
    fflush(stdin);
    fgets(clg_name3,40,stdin);
    p=input_s(name3,r_num3,clg_name3);
    s3=*p;

    char name4[20];
    printf("Enter name of student");
    fflush(stdin);
    fgets(name4,20,stdin);
    name4[strlen(name4)-1]='\0';
    int r_num4;
    printf("Enter roll number");
        scanf("%d",&r_num4);
    char clg_name4[40];
    printf("Enter college name");
    fflush(stdin);
    fgets(clg_name4,40,stdin);
    p=input_s(name4,r_num4,clg_name4);
    s4=*p;

    char name5[20];
    printf("Enter name of student");
    fflush(stdin);
    fgets(name5,20,stdin);
    name5[strlen(name5)-1]='\0';
    int r_num5;
    printf("Enter roll number");
        scanf("%d",&r_num5);
    char clg_name5[40];
    printf("Enter college name");
    fflush(stdin);
    fgets(clg_name5,40,stdin);
    p=input_s(name5,r_num5,clg_name5);
    s5=*p;

    char name6[20];
    printf("Enter name of student");
    fflush(stdin);
    fgets(name6,20,stdin);
    name6[strlen(name6)-1]='\0';
    int r_num6;
    printf("Enter roll number");
        scanf("%d",&r_num6);
    char clg_name6[40];
    printf("Enter college name");
    fflush(stdin);
    fgets(clg_name6,40,stdin);
    p=input_s(name6,r_num6,clg_name6);
    s6=*p;


    struct team *q;
    q=input_t(s1,s2);
    t1=*q;

    q=input_t(s3,s4);
    t2=*q;

    q=input_t(s5,s6);
    t3=*q;

    display_s(s1);
    display_s(s2);
    display_s(s3);
    display_s(s4);
    display_s(s5);
    display_s(s6);
    display_t(t1);
    display_t(t2);
    display_t(t3);

}
struct student* input_s(char *p,int n,char *q)
{

   struct student *k;
    k=(struct student*)malloc(84);
   strcpy(k->name,p);

   k->r_num=n;
   strcpy(k->clg_name,q);
   return k;
}
struct team* input_t(struct student a,struct student b)
{
    struct team *p;
    p=(struct team*)malloc(168);
    p->s1=a;
    p->s2=b;
    return p;
}
void display_s(struct student s)
{
    printf("%s\n",s.name);
        printf("%d",s.r_num);
    printf("\n");
    printf("%s",s.clg_name);
}
void display_t(struct team t)
{
    display_s(t.s1);
    display_s(t.s2);
}
struct student* create_array_s(int n)
{
    struct student *p;
    p=(struct student*)calloc(n,84);
    return p;
}
struct team* create_array_t(int n)
{
    struct team *p;
    p=(struct team*)calloc(n,168);
    return p;
}















