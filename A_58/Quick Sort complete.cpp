#include <iostream>
#include <vector>
using namespace std;

void quick(vector<int> &a,int left,int right)
                {
                    int l=left;
                    int loc=left;
                    while(loc!=left||left!=right)
                    {   
                        while(1)
                        {
                            if(a[loc]>a[right])
                                {right--;//if(right==loc)
                                //break;
                                }
                                
                            else
                                {
                                    a[loc]=a[loc]+a[right]-(a[right]=a[loc]);
                                    loc=right;
                                    break;
                                }
                        }
                        while(1)
                        {
                                if(a[loc]<a[left])
                                    {left++;//if(loc==left)
                                   // break;
                                   }
                                else
                                {
                                    a[loc]=a[loc]+a[left]-(a[left]=a[loc]);
                                    loc=left;
                                    break;
                                }
                        }
                    }
                    if(loc>0)
                    quick(a,l,loc);
                    if(loc<right)
                    quick(a,loc,right);
                }
int main() 
{
             
     vector<int> num={15,54,97,95,52,14,36,28,72,90,60,43,62,51};
     quick(num,0,num.size()-1);
     for(int i=0;i<num.size();i++)
     cout<<num.at(i)<<" ";
	return 0;
}