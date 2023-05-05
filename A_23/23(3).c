#include<stdio.h>
void trim(char []);
int main()
{
    int count_words(char str[])
    {
        int i,j=1;
        for(i=0;str[i];i++);
        str[i-1]='\0';
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
    char s1[40];
    fgets(s1,40,stdin);
    int k=count_words(s1);
    printf("\n%d",k);

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
        printf("%s",str);
    }

