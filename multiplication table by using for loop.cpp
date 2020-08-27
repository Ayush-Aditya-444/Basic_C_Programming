#include<stdio.h>
int main()
{
	int n, i;
	int multi=1;
	printf("enter the value of n");
	scanf("%d", &n);
	for(i=1 ; i<=10 ; i++){
		multi=n*i;
		printf("%d\n", multi);
	}
}
