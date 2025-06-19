#include<stdio.h>
#include<conio.h>
//Using for loop
int main () {
	int m,n,sum=0,i,term;
	printf("Enter the value of m and n"); //m is power of series and n is last no. of series
	scanf("%d%d",&m,&n);
	for( i=1;i<=m ;i++)
	{
	term=pow(i,n); //i^n;
	sum=sum+term; //sum=sum+pow(i,n);
	}
	printf("The sum of given series is %d",sum);
	return 0;
}