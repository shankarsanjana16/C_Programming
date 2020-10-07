#include <stdio.h>
int main()
{
	int choice;
	printf("Enter your choice (in between 1 to 5): ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item - Pasta\nPrice - Rs 179");
			break;
		case 2:
			printf("Food item - Pizza\nPrice - Rs 239");
			break;
		case 3:
			printf("Food item - French Fries\nPrice - Rs 99");
			break;
		case 4:
			printf("Food item - Burger\nPrice - Rs 129");
			break;
		case 5:
			printf("Food item - Sandwich\nPrice - Rs 149");
			break;
		default:
			printf("Sorry. This number is not there in the List.");
	}
	printf("\n");
}