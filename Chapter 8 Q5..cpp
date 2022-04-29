#include<stdio.h>

int main()
{
	int a,b,c,d,i,j,k,l,m;
	printf("Enter Any Number Of Your Choice\n");
	scanf("%d", &b);
	a=b;
	for(i=2 ; i<=a ; i++)
	{
		if(b%i==0)
		{
			printf("%d\n", i);
			b=b/i;
			i=2;
		}
	}
}
