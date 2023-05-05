#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>
void f1(char temp[],int k,char str[],int l,int r,int i);
int isPrime(int num)
{
    int i;
    for(i=2;i<num;i++)
        if(num%i==0)
            return 0;
    return 1;
}
int nextPrime(int n)
{
    for(n++;1;n++)
    {
        if(isPrime(n))
            return n;
    }
}
int * createPrimeArray(int N)
{
    int *p,i,num;
    p=(int*)malloc(sizeof(int)*N);
    for(i=1,num=1;i<=N;i++,num=p[i-1])
        p[i-1]=nextPrime(num);
    return p;
}
int maxFrequencyElement(int a[],int n)
{
    int i,j,count=1,maxFreq=1,element,maxElement;
    sort(a,n);
    maxElement=a[0];
    for(i=0;i<n;i=j)
    {
        element=a[i];
        for(j=i+1,count=1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
            else
                break;
        }
        if(maxFreq<count)
        {
            maxFreq=count;
            maxElement=element;
        }
    }
    return maxElement;
}
void sort(int a[],int N)
{
    int r,t,i;
    for(r=1;r<N-1;r++)
    {
        for(i=0;i<=N-1-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}
struct arr{
    int *ptr;
    int size;
};
struct arr removeDuplicate(int a[],int N)
{
    struct arr *p=(struct arr*)malloc(sizeof(struct arr));
    sort(a,N);
    int i,j,k,count=0;
    for(i=0;i<N;i=j)
    {
        count++;
        for(j=i+1;j<N;j++)
        {
            if(a[i]!=a[j])
                break;
        }
    }
    p->size=count;
    p->ptr=(int*)malloc(sizeof(int)*count);
    for(i=0,k=0;i<N;i=j,k++)
    {   p->ptr[k]=a[i];
        for(j=i+1;j<N;j++)
        {
            if(a[i]!=a[j])
                break;
        }
    }
    return *p;
}
struct Triangle
{
    float a,b,c;
};
float getArea(struct Triangle tri)
{
    float area,s;
    s=(tri.a+tri.b+tri.c)/2;
    area=sqrt(s*(s-tri.a)*(s-tri.b)*(s-tri.c));
    return area;
}
triangleSort(struct Triangle t[],int n)
{
    int r,i;
    struct Triangle tri;
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(getArea(t[i])>getArea(t[i+1]))
            {
                tri=t[i];
                t[i]=t[i+1];
                t[i+1]=tri;
            }
        }
    }
}
void printTriangle(struct Triangle tri)
{
    printf("(%f,%f,%f)",tri.a,tri.b,tri.c);
}
void f7()
{
    int n,i;
    scanf("%d",&n);
    struct Triangle t[n];
    for(i=0;i<n;i++)
    {
        scanf("%f %f %f",&t[i].a,&t[i].b,&t[i].c);
    }
    triangleSort(t,n);
    for(i=0;i<n;i++)
        printTriangle(t[i]);

}
int findN(int n,int a,int b,int c)
{
    if(n==1)
        return a;
    if(n==2)
        return b;
    if(n==3)
        return c;
    return (findN(n-1,a,b,c)+findN(n-2,a,b,c)+findN(n-3,a,b,c));
}
void f6()
{
    int n,a,b,c;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",findN(n,a,b,c));

}

void f5()
{
    int i,n,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}




void showTime()
{
    time_t s;
    struct tm *currenttime;
    s=time(NULL);
    currenttime=localtime(&s);
    printf("%02d:%02d:%02d",currenttime->tm_hour,currenttime->tm_min,currenttime->tm_sec);
    
}

void printPattern(int a[],int n,int index)
{
    if(index==0){
        for(int i=0;i<n;i++)
            printf("%d",a[i]);
        printf("\n");
    }
    else{
        a[index-1]=0;
        printPattern(a,n,index-1);
        a[index-1]=1;
        printPattern(a,n,index-1);
    }

}
int main()
{
    int a[4]={0};
    printPattern(a,4,4);
    printf("\n");
    showTime();
    printf("\n");
    return 0;
}



void stringCombinations(char str[],int r)
{
    int l,k=0;
    int R[r];
    char temp[r+1];
    l=strlen(str);
    
    f1(temp,k,str,l,r,0);

}
void f1(char temp[],int k,char str[],int l,int r,int i)
{
    int j;
    for(j=i+1;j<=l-r+k+1;j++)
    {
        temp[k]=str[j-1];
        if(k+1==r)
        {    
            temp[k+1]='\0';
            printf("%s\n",temp);
        }
        else
        {
            f1(temp,k+1,str,l,r,j);
        }
    }
}
/*
int main()
{
    char str[]="ABCDE";
    char **p;
    stringCombinations(str,3);


}*/
/*
for(i=0;i<=l-r;i++)
    {
        temp[0]=str[i];
        for(j=i+1;j<=l-r+1;j++)
        {
            temp[1]=str[j];
            for(k=j+1;k<=l-r+2;k++)
            {
                temp[2]=str[k];
                temp[3]='\0';
                printf("%s\n",temp);
            }
        }
    }
    */