#include <stdio.h>

int main() {
	int a,b,temp;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &a);
	printf("nhap so nguyen duong: ");
	scanf("%d", &b);
	if(a <= 0 || b <= 0) {
		printf("Please enter correct value");
		return 1; 
	} 
	while(b != 0) {
		temp = a % b;
		a = b;
		b = temp; 
	} 
	printf("Greatest common divisor: %d\n", a);
	return 0; 
} 
