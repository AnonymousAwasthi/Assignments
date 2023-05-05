#include<stdio.h>
#include<string.h>
void trim(char str[]);
int count_words(char str[]);
void word(char p[],char q[][20]);
int main()
{
    int i,n;
    char str[50];
    printf("Enter a string\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    n=count_words(str);
    char store[n][20];
    word(str,store);
    for(i=0;i<n;i++)
        printf("%s\n",store[i]);
}


int count_words(char str[])
    {
        int i,j=1;
        trim(str);
        for(i=0;str[i];i++)
        {
            switch(str[i])
            {
            case 'a' ... 'z':
                break;
            case 'A' ... 'Z':
                break;
            default :
                j++;

            }
        }
        return j;

    }
void trim(char str[])
    {
        int i,j,k;

        for(j=0;str[j]==' ';)
        {
            if(str[j]==' ')
            {
                for(k=j;str[k];k++)
                    str[k]=str[k+1];
            }
        }
        for(i=0;str[i];i++);
        for(j=i-1;str[j]==' ';j--)
        {
            if(str[j]==' '||str[j]=='.')
                str[j]='\0';
        }
    }
void word(char p[],char q[][20])
{
    int i,j=1,k=0;
    for(i=0;p[i];i++,k++)
        {
            switch(p[i])
            {
            case 'a' ... 'z':
                q[j-1][k]=p[i];
                break;
            case 'A' ... 'Z':
                q[j-1][k]=p[i];
                break;
            default :
                    q[j-1][k]='\0';
                j++;
                k=-1;

            }
        }
}
