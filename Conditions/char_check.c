#include<stdio.h>
#include<conio.h>
int main () {
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>=65 &&ch<=90)
	{
	printf("\n Upper case letter");
	}
	else if(ch>=97 &&ch<=122)
	{
	printf("\n Lower case letter");
	}
	else if(ch>=48 &&ch<=57)
	{
	printf("\n Digit");
	}
	else if((ch>=0 &&ch<=47) || (ch>=58&&ch<=64) || (ch>=91 &&ch<=96) || (ch>=123&&ch<=127))
	{
	printf("\n Special symbol");
	}
	else {
	printf("Invalid");
    }
	return 0;
}