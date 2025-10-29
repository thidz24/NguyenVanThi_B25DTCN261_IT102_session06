#include <stdio.h>

int main() {
	float number_1,number_2,result; 
	int choose; 
	printf("Nhap so thu nhat: ");
	scanf("%f", &number_1);
	printf("nhap so thu hai: ");
	scanf("%f", &number_2);
	printf("  Menu  \n"); 
	printf("1. SUM 2 so\n");
	printf("2. Effect 2 so\n");
	printf("3. Multiplication 2 so\n");
	printf("4. Division 2 so\n");
	printf("5. Out\n");
	printf("Please select in order: ");
	scanf("%d", &choose);
	do {
	 switch(choose){
	 	case 1:
		  result = number_1 + number_2;
		  printf("The sum of two numbers is: %.2f\n", result);
		  break; 
		case 2:
		  result = number_1 - number_2;
		  printf("The effect of two numbers is: %.2f\n", result);
		  break;
		case 3:
		  result = number_1 * number_2;
		  printf("The multiplication of two numbers is: %.2f\n", result);
		  break; 
		case 4:
		if(number_2 == 0){
			printf("Error cannot be divided by 0\n");
		} else {
			result = number_1 / number_2;
			printf("The division of two numbers is: %.2f\n", result);
		  break; 
		}
		case 5:
			printf("exiting the program press enter again\n");
			break; 
		defualt:
		printf("Please re-enter\n");
	 }	if(choose != 5){
		printf("next selection: ");
		scanf("%d", &choose);
	}
	 } while (choose != 5);
	 return 0; 
	 
} 
