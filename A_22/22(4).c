#include<stdio.h>
int main()
{
    int reverse(char str[])
    {
        int i,j;
        for(i=0;str[i];i++);
        str[i-1]='\0';
        for(i=0;str[i];i++)
        {
            if(str[i]=='a')
                str[i]='A';
                        if(str[i]=='b')str[i]='B';
            if(str[i]=='c')str[i]='C';
            if(str[i]=='d')str[i]='D';
            if(str[i]=='e')str[i]='E';
            if(str[i]=='f')str[i]='F';
            if(str[i]=='g')str[i]='G';
            if(str[i]=='h')
            str[i]='H';if(str[i]=='i')
            str[i]='I';if(str[i]=='j')
            str[i]='J';if(str[i]=='k')
            str[i]='K';if(str[i]=='l')
            str[i]='L';if(str[i]=='m')
            str[i]='M';if(str[i]=='n')
            str[i]='N';if(str[i]=='o')
            str[i]='O';if(str[i]=='p')
            str[i]='P';if(str[i]=='q')
            str[i]='Q';if(str[i]=='r')
            str[i]='R';if(str[i]=='s')
            str[i]='S';if(str[i]=='t')
            str[i]='T';if(str[i]=='u')
            str[i]='U';if(str[i]=='v')
            str[i]='V';if(str[i]=='w')
            str[i]='W';if(str[i]=='x')
            str[i]='X';if(str[i]=='y')
            str[i]='Y';if(str[i]=='z')
            str[i]='Z';
        }printf("%s",str);
    }
    char s1[20];
    fgets(s1,20,stdin);
    reverse(s1);



}
