#include<stdio.h>
int main()
{
	int n;
	int count=1;
	printf("value of n");
	scanf("%d", &n);
	while(count<=n){
	printf("%d\n",count);
	count=count+1;
	}
	return 0;
}
