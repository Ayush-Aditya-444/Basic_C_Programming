#include<stdio.h>
int main()
{
	int side1, side2, side3, length;
	printf("enter the value of side1");
	scanf("%d", &side1);
	printf("the value of side2");
	scanf("%d", &side2);
	printf("the value of side3");
	scanf("%d", &side3);
	if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2){
	printf("exist");}
	
	else{
	
	printf("not exist");
}}

