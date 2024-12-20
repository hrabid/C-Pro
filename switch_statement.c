#include <stdio.h>

int main() {
	printf("\n");
	int day;
	printf("Enter the serial number of day you wanna print : ");
	scanf("%d",&day);
	//printf("The %d No. day is: ", day);
	switch(day) {
		case 1:
			printf("Saturday");
			break;
		case 2: 
			printf("Sunday");
			break;
		case 3:
			printf("Monday");
			break;
		case 4:
			printf("Tuesday");
			break;
		case 5:
			printf("Wednesday");
			break;
		case 6:
			printf("Thursday");
			break;
		case 7:
			printf("Friday");
			break;
		default:
			printf("Error! Enter a valid weekday number (0-7)");
	}
	printf("The %d No. day is: ", day);
	printf("\n\n");
	
	return 0;
}
