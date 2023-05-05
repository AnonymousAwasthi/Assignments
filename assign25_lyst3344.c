#include<string.h>
#include<stdio.h>
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void search_all_occurrences(char *str, char ch, int *arr)
{
    int i,k;
    for(i=0,k=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[k]=i;
            k++;
        }
    }
}
char* uppercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    return str;
}
char* lowercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    return str;
}
void extract_string(char *str, int start_index, int end_index, char *result)
{
    int i;
    for(i=start_index;i<end_index;i++)
        result[i-start_index]=str[i];
    result[end_index-start_index]='\0';
}
void swap_strings(char *s1,char *s2)
{
    char temp[50];
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
}
void sort(int *ptr,int size)
{
    int r,i,t;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<size-1-r;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                t=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
        }
    }
}
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
int f9(int a[],int n)
{
    int left=0,t;
    int right;
    int loc=0; //loc is index of first element of array(23)
    right=n-1;
    while(left<right)
    {
        while(left<right&&a[loc]<=a[right])
            right--;
        if(left==right)
            break;
        t=a[loc];
        a[loc]=a[right];
        a[right]=t;
        loc=right;
        while(left<right&& a[left]<a[loc])
            left++;
        if(left==right)
            break;
        t=a[left];
        a[left]=a[loc];
        a[loc]=t;
        loc=left;
    }
    return loc;
}
int highestMarks(int **ptr,int n,int size[])
{
    int i,j,max;
    max=ptr[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<size[i];j++)
        {
            if(max<ptr[i][j])
                max=ptr[i][j];
        }
    }
    return max;
}
int main()
{
    int A[]={23,67,89,11,23,42,59,16,8,81};
    int B[]={44,77,88,22,11};
    int C[]={50,70,20,30,90,60,80};
    int D[]={3,6,9,1,0};
    int E[]={81,75,50,63,40,49,77,86};
    int *p[5],size[]={10,5,7,5,8};
    int hmarks;
    p[0]=A;
    p[1]=B;
    p[2]=C;
    p[3]=D;
    p[4]=E;
    hmarks=highestMarks(p,5,size);
    printf("Highest Marks: %d",hmarks);
    
    printf("\n");
    return 0;
}