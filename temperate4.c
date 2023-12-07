#include<stdio.h>

main()
{
	int i,fd,ld,n,sum;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	ld = n%10;
	
	while(n>=10)
	{
		n = n /10;
	}
	
	fd=n;
	sum = fd + ld;
	printf("Sum OF First And Last Digit = %d",sum);
}