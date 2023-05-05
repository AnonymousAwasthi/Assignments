#include <stdio.h>

int main() {
	int check_prime(int n)
	{
	    int j;
	    int i=n+1;
	while(1)
	{
	    
	    int count=0;
	    for(j=1;j<=i;j++)
	    {
	        if(i%j==0)
	        count++;
	    }
	    
	    if(count==2)
        return i;
	    i++;
	}
	}
	int x;
	scanf("%d",&x);
	int k=check_prime(x);
	printf("%d",k);
// 	if(k==1)
// 	printf("number is prime");
// 	else
// 	printf("number is composite");
	return 0;
}