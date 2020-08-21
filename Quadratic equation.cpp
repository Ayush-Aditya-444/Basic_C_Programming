#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, root1, root2;
	printf("ax^2+ bx+ c\n");
	printf("Enter the value of a, b, and c");
	scanf("%f%f%f", &a, &b, &c);
	d=(b*b)-(4*a*c);
	if(d>0){
	printf("2 real roots possible");
	root1=(-b+sqrt(d))/(2*a);
	printf("%f", root1);
	root2=(-b-sqrt(d))/(2*a);
	printf("%f", root2);}
	if(d==0){
		printf("1 real root possible");
		root1=-b/2*a;
		printf("%f", root1);}
	if(d<0){
		printf("no real root possible");}
		return 0;
}
