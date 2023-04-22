#include "expert.h"

void Wedding(void)
{
	Season();
	
	float budget;
	
	budget = Budget();
	system("cls");
	
	//define variables to be used
	float total_cost;	//total cost of each course
    float grand_total;	//Grand total amount
    
    total_cost = 0.00;
    grand_total = 0.00;
    
	
	float main_budg = (0.4 * budget);
	float app_budg = (0.15 * budget);
	float side_budg = (0.29 * budget);
	float drink_budg = (0.15 * budget);
	
	float main_cost = 0.00;
	float app_cost = 0.00;
	float side_cost = 0.00;
	float drink_cost = 0.00;
	
	
	
	int main_0 = 0;
	int main_1 = 0;
	int main_2 = 0;
	int main_3 = 0;
	int main_4 = 0;
	int main_5 = 0;
	int main_6 = 0;
	
	while(main_cost < main_budg - 8888.88)
	{
		unsigned int wed_main_idx = rand() % 7;
		if(wed_main_idx == 0)
		{
			main_0 += 1;
		}
		else if(wed_main_idx == 1)
		{
			main_1 += 1;
		}
		else if(wed_main_idx == 2)
		{
			main_2 += 1;
		}
		else if(wed_main_idx == 3)
		{
			main_3 += 1;
		}
		else if(wed_main_idx == 4)
		{
			main_4 += 1;
		}
		else if(wed_main_idx == 5)
		{
			main_5 += 1;
		}
		else if(wed_main_idx == 6)
		{
			main_6 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", wed_main[wed_main_idx], wed_main_prices[wed_main_idx]);
		main_cost += wed_main_prices[wed_main_idx];

	}
	
	printf("The main dishes:\n\n");
	printf("%d %s at (N%.2f each)\n", main_0, wed_main[0], wed_main_prices[0]);
	printf("%d %s\n", main_1, wed_main[1]);
	printf("%d %s\n", main_2, wed_main[2]);
	printf("%d %s\n", main_3, wed_main[3]);
	printf("%d %s\n", main_4, wed_main[4]);
	printf("%d %s\n", main_5, wed_main[5]);
	printf("%d %s\n\n", main_6, wed_main[6]);
	printf("\t\tTotal cost:\t%.3f\n\n", main_cost);
	//float change = (main_budg - main_cost);   change will be a function
	
	
	
	int app_0 = 0;
	int app_1 = 0;
	int app_2 = 0;
	int app_3 = 0;
	int app_4 = 0;
	int app_5 = 0;
	int app_6 = 0;
	
	while(app_cost < app_budg - 3888.88)
	{
		unsigned int wed_app_idx = rand() % 3;
		if(wed_app_idx == 0)
		{
			app_0 += 1;
		}
		else if(wed_app_idx == 1)
		{
			app_1 += 1;
		}
		else if(wed_app_idx == 2)
		{
			app_2 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", wed_main[wed_main_idx], wed_main_prices[wed_main_idx]);
		app_cost += wed_appetizer_prices[wed_app_idx];

	}
	
	printf("The Appetizers:\n\n");
	printf("%d %s\n", app_0, wed_appetizers[0]);
	printf("%d %s\n", app_1, wed_appetizers[1]);
	printf("%d %s\n", app_2, wed_appetizers[2]);

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
		unsigned int wed_side_idx = rand() % 8;
		if(wed_side_idx == 0)
		{
			side_0 += 1;
		}
		else if(wed_side_idx == 1)
		{
			side_1 += 1;
		}
		else if(wed_side_idx == 2)
		{
			side_2 += 1;
		}
		else if(wed_side_idx == 3)
		{
			side_3 += 1;
		}
		else if(wed_side_idx == 4)
		{
			side_4 += 1;
		}
		else if(wed_side_idx == 5)
		{
			side_5 += 1;
		}
		else if(wed_side_idx == 6)
		{
			side_6 += 1;
		}
		else if(wed_side_idx == 7)
		{
			side_7 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", wed_main[wed_main_idx], wed_main_prices[wed_main_idx]);
		side_cost += wed_side_prices[wed_side_idx];

	}
	
	printf("The Side dishes:\n\n");
	printf("%d %s\n", side_0, wed_sides[0]);
	printf("%d %s\n", side_1, wed_sides[1]);
	printf("%d %s\n", side_2, wed_sides[2]);
	printf("%d %s\n", side_3, wed_sides[3]);
	printf("%d %s\n", side_4, wed_sides[4]);
	printf("%d %s\n", side_5, wed_sides[5]);
	printf("%d %s\n", side_6, wed_sides[6]);
	printf("%d %s\n\n", side_7, wed_sides[7]);
	printf("\t\tTotal cost:\t%.3f\n\n", side_cost);
	
	
	
	
	int drink_0 = 0;
	int drink_1 = 0;
	int drink_2 = 0;
	int drink_3 = 0;
	int drink_4 = 0;
	int drink_5 = 0;
	int drink_6 = 0;
	int drink_7 = 0;
	
	while(drink_cost < drink_budg - 3888.88)
	{
		unsigned int wed_drink_idx = rand() % 8;
		if(wed_drink_idx == 0)
		{
			drink_0 += 1;
		}
		else if(wed_drink_idx == 1)
		{
			drink_1 += 1;
		}
		else if(wed_drink_idx == 2)
		{
			drink_2 += 1;
		}
		else if(wed_drink_idx == 3)
		{
			drink_3 += 1;
		}
		else if(wed_drink_idx == 4)
		{
			drink_4 += 1;
		}
		else if(wed_drink_idx == 5)
		{
			drink_5 += 1;
		}
		else if(wed_drink_idx == 6)
		{
			drink_6 += 1;
		}
		else if(wed_drink_idx == 7)
		{
			side_7 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", wed_main[wed_main_idx], wed_main_prices[wed_main_idx]);
		drink_cost += wed_drink_prices[wed_drink_idx];

	}
	
	printf("The Drinks:\n\n");
	printf("%d %s\n", drink_0, wed_drinks[0]);
	printf("%d %s\n", drink_1, wed_drinks[1]);
	printf("%d %s\n", drink_2, wed_drinks[2]);
	printf("%d %s\n", drink_3, wed_drinks[3]);
	printf("%d %s\n", drink_4, wed_drinks[4]);
	printf("%d %s\n", drink_5, wed_drinks[5]);
	printf("%d %s\n", drink_6, wed_drinks[6]);
	printf("%d %s\n", drink_7, wed_drinks[7]);
	
	grand_total = GrandTotal(main_cost, app_cost, side_cost, drink_cost);
	printf("\t\tTotal cost:\t%.3f\n\n", drink_cost);
	printf("GRAND TOTAL: %.2f", grand_total);
}
