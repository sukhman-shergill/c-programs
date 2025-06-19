#include<stdio.h>
#include<conio.h>
int main () {
	int a,b,c;
	printf("Enter the value of A & B:\t");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("The value after swap is:\t%d\n%d",a,b);
	return 0;
}