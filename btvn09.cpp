#include <stdio.h>

int main() {
	int a,b,c;
	int choose; 
	float result;
	printf("Nhap ba so nguyen: ");
	scanf("%d", &a);
		printf("Nhap ba so nguyen: ");
	scanf("%d", &b);
		printf("Nhap ba so nguyen: ");
	scanf("%d", &c);
	printf("  MENU  \n"); 
	printf("1. SUM\n");
	printf("2. AVERAGE\n");
	printf("3. MIN\n");
	printf("4. MAX\n");
	printf("5. OUT\n");
	printf("Nhap lua chon ban muon: ");
	scanf("%d", &choose);
	do {
	switch(choose) {
		case 1:
		result = a + b + c;
		printf("The sum of three numbers is: %.0f\n", result);
		break; 
		case 2:
		result = (float)(a + b + c)/3;
		printf("The average of three numbers is: %.2f\n", result);
		break; 
		case 3:
		 if (a<b && a<c) {
		 	printf("The min is: %d\n", a); 
		 } else if(b<a && b<c ) {
		 	printf("The min is: %d\n", b); 
		 } else if(c<a && c<b) {
		 	printf("The min is: %d\n", c); 
		 } break; 
		 case 4:
		  if (a>b && a>c) {
		 	printf("The max is: %d\n", a); 
		 } else if(b>a && b>c ) {
		 	printf("The max is: %d\n", b); 
		 } else if(c>a && c>b) {
		 	printf("The max is: %d\n", c); 
		 } break; 
		 case 5:
		 printf("Please press Enter again to exit!");
		 break; 
		 defualt:
		 printf("Please re-enter\n");
	} if(choose != 5){
		 	printf("Next selection: ");
			 scanf("%d", &choose); 
			 
		 } 
} while (choose != 5);
	return 0; 
} 
