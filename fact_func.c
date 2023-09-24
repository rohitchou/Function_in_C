#include<stdio.h>
int i,fact=1;
int find_fact(int num)
{
	for(i=1;i<=num;i++)
	{ 
	 fact = fact*i;
	}
	return fact;
}
int main()
{
	int number,fact=1,result;
	printf("Enter the number");
	scanf("%d",&number);
	fact = find_fact(number);
	printf("the factorial is %d",fact);
	return 0;
}
