#include<stdio.h>
dosub(int n1,int n2,int n3)
{
	int result;
	result=(n1-n2-n3);
	printf("%d\n",result);
	
}
int main()
{
	dosub(10,40,30);
	dosub(100,500,600);
	dosub(388,599,800);
	dosub(1888,7858,7896);
}
