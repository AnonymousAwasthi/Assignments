#include<stdio.h>
int main()
{
    int i,j,count1=0,count2=0,count3=0;
    char str[40];
    fgets(str,40,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++);
    for(j=0;str[j];j++)
    {
       switch(str[j])
       {
            case 'a' ... 'z':
                count1++;
                break;
            case 'A' ... 'Z':
                count1++;
                break;
            case '0' ... '9':
                count2++;
                break;
            default:
                count3++;
                break;
       }
    }

    printf("total alphabets are %d\ntotal number of digits are %d\ntotal number of special characters are %d",count1,count2,count3);

}
