#include<stdio.h>

main()

{
	int i , n , s , ans , temp;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
		temp=n;
	
	for (ans=0; n!=0; i++)
	{
		s =  n % 10;
		ans = ans * 10 + s;
		n = n/10;
	}
	
	printf("%d\n",ans);
	
	if(ans==temp)
		{
			printf("Number is palindrome");
		}
		else
		{
			printf("Number is not palindrome");
		}
}