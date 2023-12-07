#include<stdio.h>

main()
{
	int i,n,fac;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	for(i = 1,n,fac = 1;i<=n;i++)
	{
		printf("%d\n",i);
		fac = i * fac;
	}
		printf("Sum of 1 to N = %d",fac);
}