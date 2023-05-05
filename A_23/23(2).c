#include<stdio.h>
#include<string.h>
int main()
{
    void trim(char str[])
    {
        int i,j,k;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        for(i=0;str[i];i++);
        for(j=0;str[j]==' ';)
        {
            if(str[j]==' ')
            {
                for(k=j;str[k];k++)
                    str[k]=str[k+1];
                str[k-1]='\0';
            }
        }
        for(j=i-1;str[j]==' ';j--)
        {
            if(str[j]==' ')
            {
                str[j]='\0';
            }
        }
            printf("%s",str);
    }
    char s1[20];
    fgets(s1,20,stdin);
    trim(s1);

}
