#include<stdio.h>
#include<math.h>
int factorial(int x);

int main()
{
	int a,i,sum;
	printf("Enter Any Number\n");
	scanf("%d", &a);
	sum=factorial(a);
	printf("%d", sum);
}

int factorial(int x)
{
	int j=1;
	for(int i=1 ; i<=x ; i++)
	{
		j=j*i;
	}
	return (j);
}
