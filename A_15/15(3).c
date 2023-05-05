#include <stdio.h>

int main() {
	int check_prime(int n)
	{
	    int count=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(n%i==0)
	        count++;
	    }
	    if(count==2)
	    return 1;
	    else
	    return 0;
	}
	int x;
	scanf("%d",&x);
	int k=check_prime(x);
	if(k==1)
	printf("number is prime");
	else
	printf("number is composite");
	return 0;
}