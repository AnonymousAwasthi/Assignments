#include<stdio.h>
#include<string.h>
char* store()
{
    char ch;
    char *p=NULL,*q=NULL;
    int size=1;
    p=(char*)malloc(size);
    p[0]='\0';
    printf("Enter string");
    while(1)
    {

        ch=getchar();
        if(ch=='\n')
            break;
        free(q);
        q=(char*)malloc(size+1);
        strcpy(q,p);
        q[size-1]=ch;
        q[size]='\0';
        free(p);
        size++;
        p=(char*)malloc(size);
        strcpy(p,q);
    }
    return q;
}
int main()
{
    char *p;
    p=store();
    printf("%s",p);
}






