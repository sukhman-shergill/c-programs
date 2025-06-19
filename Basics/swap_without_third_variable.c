#include<stdio.h>
#include<conio.h>
int main () {
	int a,b;
	printf("Enter the value of A & B:\t");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value after swap is:\t%d\n%d",a,b);
	return 0;
}