#include<iostream>
#include<string.h>
using namespace std;
class TestResult
{
private:
    int roll_no,right,wrong,net_score;
    static int right_weightage,wrong_weightage;
public:
    void setroll_no()
    {
        cout<<"Enter roll number"<<endl;
        cin>>roll_no;
    }
    void getroll_no()
    {
        cout<<roll_no<<endl;
    }
    void setright()
    {
        cout<<"Enter right number of que"<<endl;
        cin>>right;
    }
    void getright()
    {
        cout<<right<<endl;
    }
    void setwrong()
    {
        cout<<"Enter wrong number of que"<<endl;
        cin>>wrong;
    }
    void getwrong()
    {
        cout<<wrong<<endl;
    }
    int setnet_score()
    {
        net_score=right*right_weightage+wrong*wrong_weightage;
        return net_score;
    }
    void getnet_score()
    {
        cout<<right*right_weightage+wrong*wrong_weightage<<endl;
    }
    static void setright_weightage(int x)
    {
        right_weightage=x;
    }
    static void setwrong_weightage(int x)
    {
        wrong_weightage=x;
    }
};
int TestResult::right_weightage;
int TestResult::wrong_weightage;
int main()
{
    TestResult arr[5];
    int p[5];
    int i,j;
    TestResult::setright_weightage(4);
    TestResult::setwrong_weightage(-1);
    for(i=0;i<5;i++)
    {
        arr[i].setroll_no();
        arr[i].setright();
        arr[i].setwrong();
        p[i]=arr[i].setnet_score();
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(p[i]>p[j])
            {
                TestResult temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        arr[i].getroll_no();
        arr[i].getright();
        arr[i].getwrong();
        arr[i].getnet_score();
    }
}
