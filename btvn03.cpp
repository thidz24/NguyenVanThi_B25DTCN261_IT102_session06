#include <stdio.h>

int main() {
	int i, N ;
	int sum = 0; 
	printf("Nhap N: ");
	scanf("%d", &N);
	if (N<0) {
		printf("Value error please re-enter");
		return 0; 
	} 
	for (i = 1; i<=N; i++ ) {
		sum += i; 
	} 
	printf("Tong = %d", sum);
	return 0; 
} 
