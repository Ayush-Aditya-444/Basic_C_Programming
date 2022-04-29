#include<stdio.h>
#include<math.h>
int power(int x, int y);

int main()
{
	int a,i,sum,b;
	printf("Enter Any Number\n");
	scanf("%d", &a);
	printf("Enter Power on the Number\n");
	scanf("%d", &b);
	sum=power(a,b);
	printf("%d", sum);
}

int power(int x, int y)
{
	int j;
	j=pow(x,y);
	return (j);
}
