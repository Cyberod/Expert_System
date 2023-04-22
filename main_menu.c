#include "expert.h"

void main_menu(void)
{
	printf("\t=====================================================\n");
	printf("\t\t\tWELCOME TO YOUR BANQUET MAIN Menu\n\n");
	printf("\t1. BANQUET-->\n\t2. ABOUT THE PROJECT-->\n\t3. EXIT-->\n\n\tENTER YOUR CHOICE--->\n");
	printf("\t=====================================================\n");

	/* choice is a variable to take in the choice selected by the user */
	
	int choice;
	
	scanf("%d", &choice);
	
	if (choice == 1)
	{
		//call Banquet function
		Banquet();
	}
	
	else if (choice == 2)
	{
		//call the about function, which tells you about the projject
		About();
	}
	
	else if (choice == 3)
	{
		//exits the program
		system("cls"); //used to implement or invoke a system command that clears the screen or terminal
		printf("\t=====================================================\n");
		printf("\t\tTHANK YOU FOR USING OUR BANQUET MENU\n\n");
		printf("\n\t\t\t\tBYE!\n\n");
		printf("\t=====================================================\n");
		
		exit(0);
	}
	else{
		//to detect if an invalid input was entered
		system("cls");
		printf("\n\t\t Wrong Input, Kindly put the correct option....\n\n");
		main_menu();
	}
	
}

void Banquet(void)
{
	system("cls");
	printf("\t=====================================================\n");
	printf("\t\t\tBANQUET MENU\n");
	printf("\t=====================================================\n\n");
	printf("\tSELECT TYPE OF EVENT\n\n");
	printf("\t1. WEDDING-->\n\t2. BIRTHDAY-->\n\t3. CORPORATE-->\n\n\tENTER YOUR CHOICE--->\n");
	printf("\t=====================================================\n\n");
	
	
	int eve_choice;
	
	scanf("%d", &eve_choice);
	
	if (eve_choice == 1)
	{
		Wedding();
	}
	
	else if (eve_choice == 2)
	{
		Birthday();
	}
	
	else if (eve_choice == 3)
	{
		Corporate();
		
	}
	else
	{
		printf("Wrong input, please input the either 1, 2 or 3");
		Banquet();
	}

}

void About(void)
{
	system("cls");
	FILE *Fpointer;
	char ch;
	
	Fpointer = fopen("about.txt", "r");
	
	if(Fpointer == NULL)
	{
		printf("Unable to open file\n");
	}
	else
	{
		while(!feof(Fpointer))
		{
			ch = fgetc(Fpointer);
			printf("%c", ch);
		}
		
		fclose(Fpointer);
	}
}

float GrandTotal(float cost_1, float cost_2, float cost_3, float cost_4)
{

	return (cost_1 + cost_2 +cost_3 +cost_4);
}
