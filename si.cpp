#include<stdio.h>
int main()
{
	float p,n,r,si;
	char choice;
	printf("enter the principal amount:");
	scanf("%f",&p);
	printf("enter the no.of years:");
	scanf("%f",&n);
	
	
	printf("is customer senior citizen:");
	scanf("%s",&choice);
	
	if(choice=='y')
	{
		r = 12;
		si = p*n*r/100;
		printf("simple interest : %f",si);	
	}
	else
	{
		r = 10;
		si = p*n*r/100;
		printf("simple interest : %f",si);	

	}
	return 0;
	
}