//even or odd
#include<stdio.h>
void digit(int);
int main()
{
	int n, check;
	printf("enter a number");
	scanf("%d", &n);
	digit(n);
//	printf("%d", check);
	return 0;
	
} 
void digit(int x){
if(x%2==0){
	printf("even");
	}
	else{
		printf("odd");
	//	return(x);
}
}

