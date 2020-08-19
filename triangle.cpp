#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter the lenght of triangle");
	scanf("%d%d%d", &a, &b, &c);
	
	
	// case1 equilateral
	if(a==b && b==c){
		printf("equilateral");}
		
	// case2 isossles
	if(a==b || a==c ||b==c){
			printf("issosles");}
			
	// case3 scalene
	if(a!=b && a!=c && b!=c){
				printf("scaline");}	
}
