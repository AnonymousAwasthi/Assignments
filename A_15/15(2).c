#include <stdio.h>

int main() {
	int HCF(int x,int y)
	{
	    int H=1;
	   int p=x<y?x:y;
	    for(int i=2;i<=p;x>1||y>1)
	        if(x%i==0&&y%i==0)
	        {
	            H=H*i;
	            x=x/i;
	            y=y/i;
	        }
	        else
	        i++;
	        return H;
	}
	int x,y;
	scanf("%d%d",&x,&y);
	int k=HCF(x,y);
	printf("%d",k);
	return 0;
}