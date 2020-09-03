//write a fuction to calculate a square of number
#include<stdio.h>
int square(int); // type of function
int main()
{
  int squ, n;
  printf("enter a number");
  scanf("%d", &n);
  squ=square(n);
  printf("%d", squ);
  return 0;
	
}
int square(int x){
	int sq;
	sq=x*x;
	return(sq);
}
