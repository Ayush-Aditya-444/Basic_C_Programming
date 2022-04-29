#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	printf("Enter Any Year\n");
	scanf("%d", &a);
	if(a>=1000)
	{
		b=a/1000;
		for(int i=1 ; i<=b ; i++)
		{
			printf("M");
		}
	}
	c=a-(b*1000);
	if(c>=500)
	{
		d=c/500;
		for(int j=1 ; j<=d ; j++)
		{
			printf("D");
		}
	}
	e=c-(d*500);
	if(e>=100)
	{
		f=e/100;
		for(int k=1 ; k<=f ; k++)
		{
			printf("C");
		}
	}
	g=e-(f*100);
	if(g>=50)
	{
		h=g/50;
		for(int l=1 ; l<=h ; l++)
		{
			printf("L");
		}
	}
	z=g-(h*50);
	if(z>=10)
	{
		y=z/10;
		for(int m=1 ; m<=y ; m++)
		{
			printf("X");
		}
	}
	x=z-(y*10);
	if(x>=5)
	{
		w=x/5;
		for(int n=1 ; n<=w ; n++)
		{
			printf("V");
		}
	}
	v=x-(w*5);
	if(v>=1)
	{
		u=v/1;
		for(int o=1 ; o<=u ; o++)
		{
			printf("I");
		}
	}
}
