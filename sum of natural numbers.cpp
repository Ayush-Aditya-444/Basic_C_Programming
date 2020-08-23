#include<stdio.h>
int main()
{
	int count=1, n;
	int sum=0;
	printf("write the value of n");
	scanf("%d", &n);
	while(count<=n){
		//count=count+1;
	//	printf("%d\n", count);
	    sum=sum+count;
		count++;
	}
	
	printf("%d", sum);
	return 0;
	
}
