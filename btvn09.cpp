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
	printf("1.Tinh tong\n");
	printf("2.Tinh trung binh cong\n");
	printf("3.Tim so nho nhat trong 3 so\n");
	printf("4.Tim so lon nhat trong 3 so\n");
	printf("5.Thoat\n");
	printf("Nhap lua chon ban muon: ");
	scanf("%d", &choose);
	do {
	switch(choose) {
		case 1:
		result = a + b + c;
		printf("Tong cua ba so là: %.0f\n", result);
		break; 
		case 2:
		result = (float)(a + b + c)/3;
		printf("Trung binh cua ba so là: %.2f\n", result);
		break; 
		case 3:
		 if (a<b && a<c) {
		 	printf("so nho nhat cua ba so la: %d\n", a); 
		 } else if(b<a && b<c ) {
		 	printf("so nho nhat cua ba so la: %d\n", b); 
		 } else if(c<a && c<b) {
		 	printf("so nho nhat cua ba so la: %d\n", c); 
		 } break; 
		 case 4:
		  if (a>b && a>c) {
		 	printf("so lon nhat cua ba so la: %d\n", a); 
		 } else if(b>a && b>c ) {
		 	printf("so lon nhat cua ba so la: %d\n", b); 
		 } else if(c>a && c>b) {
		 	printf("so lon nhat cua ba so la: %d\n", c); 
		 } break; 
		 case 5:
		 printf("Vui long an Enter lan nua de thoat");
		 break; 
		 defualt:
		 printf("vui long nhap lai\n");
	} if(choose != 5){
		 	printf("lua chon tiep: ");
			 scanf("%d", &choose); 
			 
		 } 
} while (choose != 5);
	return 0; 
} 
