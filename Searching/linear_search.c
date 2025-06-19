#include<stdio.h>
#include<conio.h>
int main () {
	int a[11],b,c;
	printf("Enter an array ");
	for(b=0;b<11;b++)
	{
	scanf("%d",&a[b]);
	}
	printf("\nWhich value you want to search");
	scanf("%d",&c);
	for(b=0;b<11;b++)
	{
	if(a[b]==c)
	{
	printf("\nLocation of that value is %d",b+1);
	break;
	}
	}
	if(b==11)
	printf("\nValue not found in array");
}