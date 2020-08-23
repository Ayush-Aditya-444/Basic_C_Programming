#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d", &n);
		int count=n;
	while(count<=n && count>0){
		printf("%d\n", count);
		count--;
	}
	return 0;
}
