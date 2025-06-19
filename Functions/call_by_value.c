#include<stdio.h>
int swap(int i, int j) {
	int temp=i;
	i=j;
	j=temp;
}
int main() {
	int a,b;
	printf("enter the value ");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("The value after swap is %d\n%d",a,b);
return 0;
}