#include<stdio.h>
int main()
{
	float marks, marks1, marks2, marks3, marks4, marks5;
	printf("enter your marks in maths");
	scanf("%f", &marks1);
	printf("enter your marks in english");
	scanf("%f", &marks2);
	printf("enter your marks in physics");
	scanf("%f", &marks3);
	printf("enter your marks in chemistry");
	scanf("%f", &marks4);
	printf("enter your in physical education");
    scanf("%f", &marks5);		
	marks=(marks1+ marks2+ marks3+ marks4+ marks5)/5;
	if(marks<=100 && marks>=91){
		printf("grade A+");}
	if(marks<=90 && marks>=81){
		printf("grade A");}
	if(marks<=80 && marks>=71){
		printf("grade B+");}
	if(marks<=70 && marks>=61){
	    printf("grade B");}
	if(marks<=60 && marks>=51){
		printf("grade C");}
	if(marks<=50 && marks>=41){
	    printf("grade D");}
	if(marks<=40 && marks>=0){
		printf("grade F");}
}
