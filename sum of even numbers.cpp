#include<stdio.h>
int main()
{
	int n;
	int count=1;
	int sum=0;
	printf("enter the value of n");
	scanf("%d", &n );
	while(count<=n){
		if(count%2==0){
		sum=sum+count;}
		count++;
	}
		printf("%d", sum);
		return 0;
	}

