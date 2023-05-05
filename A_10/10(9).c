#include <stdio.h>

int main() {
	int i,x,y,sum=0,z;
	printf("Enter a number");
	scanf("%d",&x);
 	//for(x=1;x<=1000;x++)
 	//{
 	    int count=0;
 	    int p=x;
    	while(p)
    	{
    	    p=p/10;
    	    count++;
    	}
    	p=x;
    	while(p)
    	{
    	    y=p%10;
    	    for(i=1,z=1;i<=count;i++)
    	    {
    	        z=z*y;
    	    }
    	    sum+=z;
    	    p=p/10;
    	}
    	if(sum==x)
    	printf("Armstrong Number");
        else
        printf("Not a Armstrong Number");
	//}
	return 0;
}
