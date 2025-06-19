#include<stdio.h>
#include<conio.h>
int main () {
	int a,b,c;
	printf("Enter three different no.s\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	if(a>c)
	printf("%d is greatest among the numbers %d ,%d and %d",a,a,b,c);
	else
	printf("%d is big",c);
	}
	else
	{
	if(b>c)
	printf("%d is big",b);
	else
	printf("%d is big",c);
	}
	return 0;
}