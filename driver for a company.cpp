#include<stdio.h>
int main()
{
	int age, status, gender;
	printf("application for a driver in our company\n");
	printf("enter gender of driver (male) press 1 OR (female) press 2");
	scanf("%d", &gender);
	printf("enter driver age");
	scanf("%d", &age);
	printf("enter driver marital status (married) press 1 OR (unmarried press 2)");
	scanf("%d", &status);
	if(status==1){
		printf("approved");
	}
	else if(gender==1 && age>30 && status==2){
		printf("approved");

	}
	else if(gender==2 && age>25 && status==2){
		printf("approved");
	}
	else{
	    printf("not approved");
	
	}
	}

