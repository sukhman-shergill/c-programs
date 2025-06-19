#include<stdio.h>
#include<conio.h>
int main () {
	int num,rev=0,rem,original;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	original=num;
	do
	{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	}
	while(num>0);
	if(rev==original)
	printf("The given number %d is a Palindrome",original);
	else
	printf("The given number %d is not a Palindrome",original);
	return 0;
}