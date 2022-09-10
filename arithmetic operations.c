#include<stdio.h>

int main(){
	int x,n,choice;
	printf("enter the num1;");
	scanf("%d",&x);
	printf("enter the num2;");
	scanf("%d",&n);
	printf("enter the choice: 1.add 2.sub 3.mul 4.div \n");
	scanf("%d",&choice);
	if(choice==1)
	{
		int add;
		add=x+n;
		printf("add of 2 num is %d",add);
		
	}
	else if(choice==2)
	{
		int sub;
		sub=x-n;
		printf("sub of 2 num is %d",sub);
		
	}
	else if(choice==3)
	{
		int mul;
		mul=x*n;;
		printf("mul of 2 num is %d",mul);
		
	}
	else if(choice==4)
	{
		int div;
		div=x/n;
		printf("div of 2 num is %d",div);
		
	}
	else
	{
		printf("enter the correct choice");
		
	}
	return 0;
	
}