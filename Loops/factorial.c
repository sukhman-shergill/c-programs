#include<stdio.h>
#include<conio.h>
int main () {
	int n,f=1,i=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
	f = f * i;
	i++;
	}
	printf("\nFactorial of %d = %d", n,f);
	return 0;
}