#include<stdio.h>
int main()
{
		int n,k=1;
	printf("enter n ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			printf("%c ",j+65);
		}

		printf("\n");
	}
	return 0;
}

