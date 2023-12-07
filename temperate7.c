#include<stdio.h>

main()

{
	int i, n, f1=0, f2=1, fs;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	printf("Fibonacci series = %d,%d,",f1,f2);
	
	for(fs=1; fs<=n; i++)
	{
		printf("%d,",fs);
		f1=f2;
		f2=fs;
		fs=f1+f2;
	}
}