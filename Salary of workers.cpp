#include<stdio.h>
int main()
{
	int gender, service, qualification;
	printf("enter your gender (male) press1 OR (female) press2");
	scanf("%d", &gender);
	printf("enter your years of service");
	scanf("%d", &service);
	printf("enter your qualification (post graduate) press1 OR (graduate) press2");
	scanf("%d", &qualification);
	if(gender==1 && service>=10 && qualification==1){
	printf("salary=15000");}
	else if(gender==1 && service>=10 && qualification==2){
	printf("salary=10000");}
	else if(gender==1 && service<10 && qualification==1){
		printf("salary=10000");}
	else if (gender==1 && service<10 && qualification==2){
		printf("salary=7500");}
		else if(gender==2 && service>=10 && qualification==1){
			printf("salary=12000");}
			else if(gender==2 && service>=10 && qualification==2){
			printf("salary=12000");}
			else if(gender==2 && service<10 && qualification==1){
			printf("salary=10000");}
			else if(gender==2 && service<10 && qualification==2){
			printf("salary=12000");}
}
