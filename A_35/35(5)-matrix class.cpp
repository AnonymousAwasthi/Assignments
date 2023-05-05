#include<iostream>
using namespace std;
class matrix
{
private:
    int a[3][3];
public:
    matrix(){}
    void inputData()
    {
        cout<<"Enter 9 numbers"<<endl;
        int i,j;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                cin>>a[i][j];
    }
    void showdata()
    {
        int i,j;
        for(i=0;i<3;i++)
            {for(j=0;j<3;j++)
                cout<<a[i][j];
                cout<<endl;}
    }
    matrix operator+(matrix);
    matrix operator-(matrix);
    matrix operator*(matrix);
};
matrix matrix:: operator+(matrix m)
{
    int i,j;
    matrix temp;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                temp.a[i][j]=a[i][j]+m.a[i][j];
    return temp;
}
matrix matrix:: operator-(matrix m)
{
    int i,j;
    matrix temp;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                temp.a[i][j]=a[i][j]-m.a[i][j];
    return temp;
}
matrix matrix:: operator*(matrix m)
{
    int i,j,k;
    matrix temp;
        for(i=0;i<3;i++)
        {
            for(k=0;k<3;k++)
            {
                int sum=0;
                for(j=0;j<3;j++)
                    sum+=a[i][j]*m.a[j][k];
                temp.a[i][k]=sum;
            }

        }

    return temp;
}
int main()
{
    matrix m1,m2,m3;
    m1.inputData();
    m2.inputData();
    m3=m1+m2;
    m3.showdata();
    m3=m1-m2;
    m3.showdata();
    m3=m1*m2;
    m3.showdata();
}
