#include "expert.h"

void Birthday(void)
{
	// Define Birthday Event Courses
	char *birth_appetizers[] = {"Peppered Kpomo", "Plantain Chicken Pies", "Honey garlic Oxtail Bites", "Deviled Eggs", "Turkey Wings", "Peppered Gizzard", "Plantain Chips", "Suya", "Chin-Chin"};
	char *birth_main[] = {"Chicken Stew", "Goat Pepper Soup", "Yam Porridge", "Kllishi", "Ofe Aku"};
	char *birth_sides[] = {"Fried Rice", "Jollof Rice", "White Rice", "Coconut Rice", "Fried Plantain", "Creamed Corn", "Macaroni Salad", "Salad"};
	char *birth_drinks[] = {"Wine", "Kunun Zaki(Millet Drink)","Zobo(Hibiscus Tea)", "Chapman", "Cocacola", "Tiger Nut Milk", "Fura da Nono" "Soya Milk", "Guiness", "Heineken", "Goldberg", "Star"};
	// Define Birthday Event prices in Naira
	float birth_appetizer_prices[] = {4999.99, 7999.99, 4999.99, 4999.99, 4999.99, 9999.99, 4999.99, 7999.99, 9999.99, 4999.99, 4999.99};
	float birth_main_prices[] = {19999.99, 24999.99, 14999.99, 9999.99, 9999.99};
	float birth_side_prices[] = {24999.99, 24999.99, 17999.99, 24999.99, 4999.99, 4999.99, 4999.99, 4999.99};
	float birth_drink_prices[] = {29999.99, 9999.99, 9999.99, 9999.99, 14999.99, 9999.99, 9999.99, 9999.99, 9999.99, 9999.99, 9999.99, 9999.99};
	
	Season();
	int budget = Budget();
	system("cls");
	
	//define variables to be used
	float total_cost = 0.00;	//total cost of each course
    	float grand_total = 0.00;	//Grand total amount
    
    
   
	//float budget = 1000000.00;
	
	float main_budg = (0.4 * budget);
	float app_budg = (0.15 * budget);
	float side_budg = (0.29 * budget);
	float drink_budg = (0.15 * budget);
	
	float birth_main_cost = 0.00;
	float birth_app_cost = 0.00;
	float birth_side_cost = 0.00;
	float birth_drink_cost = 0.00;
	
	
	
	int main_0 = 0;
	int main_1 = 0;
	int main_2 = 0;
	int main_3 = 0;
	int main_4 = 0;
	
	while(birth_main_cost < main_budg - 8888.88)
	{
		unsigned int birth_main_idx = rand() % 5;
		if(birth_main_idx == 0)
		{
			main_0 += 1;
		}
		else if(birth_main_idx == 1)
		{
			main_1 += 1;
		}
		else if(birth_main_idx == 2)
		{
			main_2 += 1;
		}
		else if(birth_main_idx == 3)
		{
			main_3 += 1;
		}
		else if(birth_main_idx == 4)
		{
			main_4 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", birth_main[birth_main_idx], birth_main_prices[birth_main_idx]);
		birth_main_cost += birth_main_prices[birth_main_idx];

	}
	
	printf("The main dishes:\n\n");
	printf("%d %s\n", main_0, birth_main[0]);
	printf("%d %s\n", main_1, birth_main[1]);
	printf("%d %s\n", main_2, birth_main[2]);
	printf("%d %s\n", main_3, birth_main[3]);
	printf("%d %s\n", main_4, birth_main[4]);

	printf("\t\tTotal cost:\t%.3f\n\n", birth_main_cost);
	//float change = (main_budg - main_cost);   change will be a function
	
	
	
	int app_0 = 0;
	int app_1 = 0;
	int app_2 = 0;
	int app_3 = 0;
	int app_4 = 0;
	int app_5 = 0;
	int app_6 = 0;
	int app_7 = 0;
	int app_8 = 0;


	
	while(birth_app_cost < app_budg - 8888.88)
	{
		unsigned int birth_app_idx = rand() % 9;
		if(birth_app_idx == 0)
		{
			app_0 += 1;
		}
		else if(birth_app_idx == 1)
		{
			app_1 += 1;
		}
		else if(birth_app_idx == 2)
		{
			app_2 += 1;
		}
		else if(birth_app_idx == 3)
		{
			app_3 += 1;
		}
		else if(birth_app_idx == 4)
		{
			app_4 += 1;
		}
		else if(birth_app_idx == 5)
		{
			app_5 += 1;
		}
		else if(birth_app_idx == 6)
		{
			app_6 += 1;
		}
		else if(birth_app_idx == 7)
		{
			app_7 += 1;
		}
		else if(birth_app_idx == 8)
		{
			app_8 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", birth_main[birth_main_idx], birth_main_prices[birth_main_idx]);
		birth_app_cost += birth_appetizer_prices[birth_app_idx];

	}
	
	printf("The Appetizers:\n\n");
	printf("%d %s\n", app_0, birth_appetizers[0]);
	printf("%d %s\n", app_1, birth_appetizers[1]);
	printf("%d %s\n", app_2, birth_appetizers[2]);
	printf("%d %s\n", app_3, birth_appetizers[3]);
	printf("%d %s\n", app_4, birth_appetizers[4]);
	printf("%d %s\n", app_5, birth_appetizers[5]);
	printf("%d %s\n", app_6, birth_appetizers[6]);
	printf("%d %s\n", app_7, birth_appetizers[7]);
	printf("%d %s\n", app_8, birth_appetizers[8]);

	printf("\t\tTotal cost:\t%.3f\n\n", birth_app_cost);
	
	
	
	int side_0 = 0;
	int side_1 = 0;
	int side_2 = 0;
	int side_3 = 0;
	int side_4 = 0;
	int side_5 = 0;
	int side_6 = 0;
	int side_7 = 0;
	
	while(birth_side_cost < side_budg - 8888.88)
	{
		unsigned int birth_side_idx = rand() % 8;
		if(birth_side_idx == 0)
		{
			side_0 += 1;
		}
		else if(birth_side_idx == 1)
		{
			side_1 += 1;
		}
		else if(birth_side_idx == 2)
		{
			side_2 += 1;
		}
		else if(birth_side_idx == 3)
		{
			side_3 += 1;
		}
		else if(birth_side_idx == 4)
		{
			side_4 += 1;
		}
		else if(birth_side_idx == 5)
		{
			side_5 += 1;
		}
		else if(birth_side_idx == 6)
		{
			side_6 += 1;
		}
		else if(birth_side_idx == 7)
		{
			side_7 += 1;
		}
		
		//printf("Main: %d %s (N%.2f)\n", birth_main[birth_main_idx], birth_main_prices[birth_main_idx]);
		birth_side_cost += birth_side_prices[birth_side_idx];

	}
	
	printf("The Side dishes:\n\n");
	printf("%d %s\n", side_0, birth_sides[0]);
	printf("%d %s\n", side_1, birth_sides[1]);
	printf("%d %s\n", side_2, birth_sides[2]);
	printf("%d %s\n", side_3, birth_sides[3]);
	printf("%d %s\n", side_4, birth_sides[4]);
	printf("%d %s\n", side_5, birth_sides[5]);
	printf("%d %s\n", side_6, birth_sides[6]);
	printf("%d %s\n\n", side_7, birth_sides[7]);
	printf("\t\tTotal cost:\t%.3f\n\n", birth_side_cost);
	
	
	
	
	int drink_0 = 0;
	int drink_1 = 0;
	int drink_2 = 0;
	int drink_3 = 0;
	int drink_4 = 0;
	int drink_5 = 0;
	int drink_6 = 0;
	int drink_7 = 0;
	int drink_8 = 0;
	int drink_9 = 0;
	int drink_10 = 0;
	int drink_11 = 0;

	
	while(birth_drink_cost < drink_budg - 8888.88)
	{
		unsigned int birth_drink_idx = rand() % 12;
		if(birth_drink_idx == 0)
		{
			drink_0 += 1;
		}
		else if(birth_drink_idx == 1)
		{
			drink_1 += 1;
		}
		else if(birth_drink_idx == 2)
		{
			drink_2 += 1;
		}
		else if(birth_drink_idx == 3)
		{
			drink_3 += 1;
		}
		else if(birth_drink_idx == 4)
		{
			drink_4 += 1;
		}
		else if(birth_drink_idx == 5)
		{
			drink_5 += 1;
		}
		else if(birth_drink_idx == 6)
		{
			drink_6 += 1;
		}
		else if(birth_drink_idx == 7)
		{
			drink_7 += 1;
		}
		else if(birth_drink_idx == 8)
		{
			drink_8 += 1;
		}
		else if(birth_drink_idx == 9)
		{
			drink_9 += 1;
		}
		else if(birth_drink_idx == 10)
		{
			drink_10 += 1;
		}
		else if(birth_drink_idx == 11)
		{
			drink_11 += 1;
		}
		//printf("Main: %d %s (N%.2f)\n", birth_main[birth_main_idx], birth_main_prices[birth_main_idx]);
		birth_drink_cost += birth_drink_prices[birth_drink_idx];

	}
	
	printf("The Drinks:\n\n");
	printf("%d %s\n", drink_0, birth_drinks[0]);
	printf("%d %s\n", drink_1, birth_drinks[1]);
	printf("%d %s\n", drink_2, birth_drinks[2]);
	printf("%d %s\n", drink_3, birth_drinks[3]);
	printf("%d %s\n", drink_4, birth_drinks[4]);
	printf("%d %s\n", drink_5, birth_drinks[5]);
	printf("%d %s\n", drink_6, birth_drinks[6]);
	printf("%d %s\n", drink_7, birth_drinks[7]);
	printf("%d %s\n", drink_8, birth_drinks[8]);
	printf("%d %s\n", drink_9, birth_drinks[9]);
	printf("%d %s\n", drink_10, birth_drinks[10]);
	printf("%d %s\n", drink_11, birth_drinks[11]);
	
	grand_total = GrandTotal(birth_main_cost, birth_app_cost, birth_side_cost, birth_drink_cost);
	printf("\t\tTotal cost:\t%.3f\n\n", birth_drink_cost);
	printf("GRAND TOTAL: %.2f", grand_total);
}
