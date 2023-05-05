#include<iostream>
using namespace std;
class Matrix{
    private:
        int A[3][3];
    public:
        void setMatrix(int a[][3])
        {
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    A[i][j]=a[i][j];
        }
        void printMatrix()
        {
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++)
                    cout<<A[i][j]<<" ";
                cout<<endl;
            }
        }
        Matrix add(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                {
                    temp.A[i][j]=A[i][j]+M.A[i][j];
                }
            return temp;
        }
        Matrix sub(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                {
                    temp.A[i][j]=A[i][j]-M.A[i][j];
                }
            return temp;
        }
        Matrix multiply(Matrix M)
        {
            Matrix temp;
            int s,k;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                {
                    for(s=0,k=0;k<=2;k++)
                    {
                        s=s+A[i][k]*M.A[k][j];
                    }
                    temp.A[i][j]=s;
                }
            return temp;
        }
        Matrix transpose()
        {
            Matrix temp;
            
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.A[i][j]=A[j][i];

           return temp;
        }
        bool is_singlular()
        {
            int d;
            d=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
            return d==0;
        }
};

class Complex{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"\nreal="<<a<<" imaginary="<<b;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex subtract(Complex C)
        {
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex multiply(Complex C)
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=a*C.b+b*C.a;
            return temp;
        }

};
class Time{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showTime()
        {
            cout<<"\n"<<hr<<":"<<min<<":"<<sec;
        }
        void normalize()
        {
            min=min+sec/60;
            sec=sec%60;
            hr=hr+min/60;
            min=min%60;
        }
        Time add(Time t)
        {
            Time temp;
            temp.sec=sec+t.sec;
            temp.min=min+t.min;
            temp.hr=hr+t.hr;
            return temp;
        }
        bool is_greater(Time t)
        {
            if(hr>t.hr)
                return true;
            else if(hr<t.hr)
                return false;
            else if(min>t.min)
                return true;
            else if (min<t.min)
                return false;
            else if(sec>t.sec)
                return true;
            else
                return false;
        }
};
class TestResult
{
    private:
        int roll_no,right,wrong, net_score;
        static int right_weightage,wrong_weightage;
    public:
        void setRollNo(int r) { roll_no=r;}
        void setRight(int r) { right=r;}
        void setWrong(int w) { wrong=w;}
        void setNetScore(int n){net_score=n;}
        int getRollNo() { return roll_no;}
        int getRight(){return right;}
        int getWrong(){return wrong;}
        int getNetScore() {return net_score;}
        static void setRightWeightage(int w){ right_weightage=w;        }
        static void setWrongWeightage(int w) {wrong_weightage=w;}
        static int getRightWeightage() {return right_weightage;}
        static int getWrongWeightage() { return wrong_weightage;}
};
int TestResult::right_weightage=3;
int TestResult::wrong_weightage=1;
void setTestResult(TestResult tr,int a,int b,int c)
{
    tr.setRollNo(a);
    tr.setRight(b);
    tr.setWrong(c);
    tr.setNetScore(b*tr.getRightWeightage()-c*tr.getWrongWeightage());
}
void printTestResult(TestResult tr)
{
    cout<<"\n"<<tr.getRollNo()<<" "<<tr.getRight()<<" "<<tr.getWrong()<<" "<<tr.getNetScore();
}
void sortByNetScore(TestResult result[],int size)
{
    int i,r;
    TestResult temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(result[i].getNetScore()>result[i+1].getNetScore())
            {
                temp=result[i];
                result[i]=result[i+1];
                result[i+1]=temp;
            }
        }
    }
}
int main()
{
    TestResult result[5];
    setTestResult(result[0],100,80,20);
    setTestResult(result[1],101,70,10);
    setTestResult(result[2],102,90,0);
    setTestResult(result[3],103,60,15);
    setTestResult(result[4],104,50,12);
    sortByNetScore(result,5);
    for(int i=0;i<=4;i++)
        printTestResult(result[i]);
    cout<<endl;
    return 0;

}