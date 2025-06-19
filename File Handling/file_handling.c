#include<stdio.h>
int main() 
{
	FILE *f;
	f=fopen("Test.txt","w");
	if(f==NULL)
	{
	printf("\n Sorry,File cannot be opened");
	printf("\n Program Terminating...");
	}
	else
	{
	printf("\n File Opened");
	fprintf(f,"%s","Test Successful !");
	printf("\n Operation complete,closing the file.");
	fclose(f);
	}
	return 0;
}