
#include <stdio.h>

int main() {
	int i,x,y,z;
 	for(x=1;x<=1000;x++)
 	{
 	    int sum=0,count=0;
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
    	printf("%d ",x);
	}
	return 0;
}
