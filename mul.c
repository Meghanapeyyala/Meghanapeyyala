#include<stdio.h>
int main()
{
	int a=20,b=40,c=50;
	int result;
	result=(a*b+b*c);
	printf("%d\n",result);
	a=59,b=78,c=86;
	result=(a*b+b*c);
	printf("%d",result);
}

