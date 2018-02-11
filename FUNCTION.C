#include<stdio.h>
void sub(int x ,int y);
void main()
{
	int a ,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	sub(a,b);
	printf("%d%d",a,b);
}
void sub(int x, int y)
{
	int z;
	z=x-y;
	printf("%d",z);
}
