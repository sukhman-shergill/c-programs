#include <stdio.h>
int main() {
	int n,A[1000],i,j,key;
	printf("Enter number of elements\n");
	scanf("%d", &n);
	printf("Enter %d integers\n", n);
	for (i=0;i<n;i++) {
	scanf("%d", &A[i]);
	}
	for (i=1;i< n ; i++)
	{
	key=A[i ];
	j=i-1;
	while(j > =0 && A [ j ] > key)
	{
	A[j+1]=A[j];
	j--;
	}
	A [ j+1 ] = key;
	}
	printf("Sorted list in ascending order:\n");
	for (i= 0;i<n;i++) {
	printf("%d\n",A[i]);
	}
return 0;
}