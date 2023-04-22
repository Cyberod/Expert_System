#include "expert.h"

void Corporate(void)
{
	// Define Corpotrate Event Courses
	char *corp_appetizers[] = {"Cheesy Yam Balls", "Bowl of Peppered Kpomo", "Plantain Chicken Pies", "Honey garlic Oxtail Bites"};
	char *corp_main[] = {"Chicken Stew", "Ofe Aku Stew"};
	char *corp_sides[] = {"Fried Rice", "Jollof Rice", "White Rice", "Coconut Rice","Fried Plantain", "Creamed Corn", "Macaroni Salad", "Salad"};
	char *corp_drinks[] = {"Wine"};
	
	// Define corporate Event prices in Naira
	float corp_main_prices[] = {19999.99, 9999.99};
	float corp_side_prices[] = {24999.99, 24999.99, 17999.99, 24999.99, 4999.99, 4999.99, 4999.99, 4999.99};
	float corp_drink_prices[] = {29999.99};
	float corp_appetizer_prices[] = {14999.99, 9999.99, 7999.99, 4999.99};
	
	
	int budget = Budget();
	system("cls");
	
	//define variables to be used
	float total_cost = 0.00;	//total cost of each course
    float grand_total = 0.00;	//Grand total amount
    
    
   
	//float budget = 1000000.00;
	
	float main_budg = (0.15 * budget);
	float app_budg = (0.35 * budget);
	float side_budg = (0.25 * budget);
	float drink_budg = (0.25 * budget);
	
	float main_cost = 0.00;
	float app_cost = 0.00;
	float side_cost = 0.00;
	float drink_cost = 0.00;
	
	
	
	int main_0 = 0;
	int main_1 = 0;

	
	while(main_cost < main_budg - 24888.88)
	{
		unsigned int corp_main_idx = rand() % 2;
		if(corp_main_idx == 0)
		{
			main_0 += 1;
		}
		else if(corp_main_idx == 1)
		{
			main_1 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", corpmain[corpmain_idx], corpmain_prices[corpmain_idx]);
		main_cost += corp_main_prices[corp_main_idx];

	}
	
	printf("The main dishes:\n\n");
	printf("%d %s\n", main_0, corp_main[0]);
	printf("%d %s\n", main_1, corp_main[1]);


	printf("\t\tTotal cost:\t%.3f\n\n", main_cost);
	//float change = (main_budg - main_cost);   change will be a function
	
	
	
	int app_0 = 0;
	int app_1 = 0;
	int app_2 = 0;
	int app_3 = 0;



	
	while(app_cost < app_budg - 8888.88)
	{
		unsigned int corp_app_idx = rand() % 4;
		if(corp_app_idx == 0)
		{
			app_0 += 1;
		}
		else if(corp_app_idx == 1)
		{
			app_1 += 1;
		}
		else if(corp_app_idx == 2)
		{
			app_2 += 1;
		}
		else if(corp_app_idx == 3)
		{
			app_3 += 1;
		}

		
		//printf("Main: %d %s (N%.2f)\n", corp_main[corp_main_idx], corp_main_prices[corp_main_idx]);
		app_cost += corp_appetizer_prices[corp_app_idx];

	}
	
	printf("The Appetizers:\n\n");
	printf("%d %s\n", app_0, corp_appetizers[0]);
	printf("%d %s\n", app_1, corp_appetizers[1]);
	printf("%d %s\n", app_2, corp_appetizers[2]);
	printf("%d %s\n", app_3, corp_appetizers[3]);


	printf("\t\tTotal cost:\t%.3f\n\n", app_cost);
	
	
	
	int side_0 = 0;
	int side_1 = 0;
	int side_2 = 0;
	int side_3 = 0;
	int side_4 = 0;
	int side_5 = 0;
	int side_6 = 0;
	int side_7 = 0;
	
	while(side_cost < side_budg - 8888.88)
	{
		unsigned int corp_side_idx = rand() % 8;
		if(corp_side_idx == 0)
		{
			side_0 += 1;
		}
		else if(corp_side_idx == 1)
		{
			side_1 += 1;
		}
		else if(corp_side_idx == 2)
		{
			side_2 += 1;
		}
		else if(corp_side_idx == 3)
		{
			side_3 += 1;
		}
		else if(corp_side_idx == 4)
		{
			side_4 += 1;
		}
		else if(corp_side_idx == 5)
		{
			side_5 += 1;
		}
		else if(corp_side_idx == 6)
		{
			side_6 += 1;
		}
		else if(corp_side_idx == 7)
		{
			side_7 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", corp_main[corp_main_idx], corp_main_prices[corp_main_idx]);
		side_cost += corp_side_prices[corp_side_idx];

	}
	
	printf("The Side dishes:\n\n");
	printf("%d %s\n", side_0, corp_sides[0]);
	printf("%d %s\n", side_1, corp_sides[1]);
	printf("%d %s\n", side_2, corp_sides[2]);
	printf("%d %s\n", side_3, corp_sides[3]);
	printf("%d %s\n", side_4, corp_sides[4]);
	printf("%d %s\n", side_5, corp_sides[5]);
	printf("%d %s\n", side_6, corp_sides[6]);
	printf("%d %s\n\n", side_7, corp_sides[7]);
	printf("\t\tTotal cost:\t%.3f\n\n", side_cost);
	
	
	
	
	int drink_0 = 0;


	
	while(drink_cost < drink_budg - 8888.88)
	{
		unsigned int corp_drink_idx = rand() % 1;
		if(corp_drink_idx == 0)
		{
			drink_0 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", corp_main[corp_main_idx], corp_main_prices[corp_main_idx]);
		drink_cost += corp_drink_prices[corp_drink_idx];

	}
	
	printf("The Drinks:\n\n");
	printf("%d %s\n", drink_0, corp_drinks[0]);

	
	grand_total = GrandTotal(main_cost, app_cost, side_cost, drink_cost);
	printf("\t\tTotal cost:\t%.3f\n\n", drink_cost);
	printf("GRAND TOTAL: %.2f", grand_total);
}
