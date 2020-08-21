#include<stdio.h>
int main()
{
	float unit1, units, unit2, unit3;
	printf("Enter no. of units you consumed");
	scanf("%f", &units);
	if(units<=50){
		units=units*0.5;
		units=units+units*0.2;
		printf("%f", units);
		}
	else if(units<=150){
			unit1=units-50;
			units=50*0.5;
			unit1=unit1*0.75;
			units=units+unit1;
			units=units+units*0.2;
			printf("%f\n", units);}
	else if(units<=250){
				unit2=units-150;
				units=50*0.5;
				unit1=100*0.75;
				unit2=unit2*1.2;
				units=units+unit1+unit2;
				units=units+units*0.2;
				printf("%f\n", units);}
	else{
					unit3=units-250;
					units=50*0.5;
					unit1=100*0.75;
					unit2=100*1.2;
					unit3=unit3*1.5;
					units=units+unit1+unit2+unit3;
					units=units+units*0.2;
					printf("%f\n", units);}
		
		    return 0;
		}
	
	

