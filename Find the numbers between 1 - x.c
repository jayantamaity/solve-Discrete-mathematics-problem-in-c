// Find the numbers between 1 - x divisible by a,b,c 
#include<stdio.h>

int main()
{
	int x,cnt=0;
	int n,a,b,c;
	
	printf("Enter the HIgher limit of the Range:");
	scanf("%d",&n);
	printf("Enter the 3 number to check the divisibility");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nNumbers from 1 to %d divisible by 100 by %d,%d and %d",n,a,b,c);
	for(x=1;x<=n;x++)
	{
		if(x%a==0 &&x%b==0 &&x%c==0)
		{
			printf("%d\t",x);
			cnt++;
		}
	}
	printf("\n Total Numbers: %d",cnt);
	
}
 
