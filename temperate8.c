#include<stdio.h>

main()
{
	int i = 2, n, prime=0;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%i==0)
		{
			prime++;
		}
		i++;
	}
	if(prime==0)
	{
		printf("This Is Prime Number");
	}
	else
	{
		printf("This Is Not Prime Number");
	}
}