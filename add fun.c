#include<stdio.h>
 void dosum(int a,int b,int c)
{
	int result;
    result=(a+b+c);
	printf("%d\n",result);	
}
int main()
{
	 dosum(10,30);
	 dosum(100,300);
	 dosum(300,400);
}
