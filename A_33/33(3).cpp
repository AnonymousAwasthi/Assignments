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
    void getnet_score()
    {
        cout<<right*right_weightage-wrong*wrong_weightage<<endl;
    }
    static setright_weightage()
    {
        right_weightage=4;
    }
    static setwrong_weightage()
    {
        wrong_weightage=-1;
    }
};
int TestResult::right_weightage;
int TestResult::wrong_weightage;
int main()
{

}
