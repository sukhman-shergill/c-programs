#include<stdio.h>
#include<conio.h>
int main () {
	int a[11],b,i;
	float sum=0,avg;
	printf("Enter the value of i(1 to 11) ");
	scanf("%d",&i);
	for(b=0;b<i;b++)
	{ 
	printf("Enter the values ");
	scanf("%d",&a[b]);
	sum=sum+a[b];
	}
	printf("The sum of the values is %f\n",sum);
	avg=sum/i;
	printf("The average of the values is %f",avg);
}