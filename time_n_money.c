#include "expert.c"

int Season(void)
{
	system("cls");
	printf("\t=====================================================\n");
	printf("\t\t\tSEASONS\n");
	printf("\t=====================================================\n\n");
	printf("\tCHOOSE A SEASON\n\n\t1. WET\n\t2. DRY\n\n");
	
	int seas;
	
	scanf("%d", &seas);
	
	return (seas);
	
}

int Budget(void)
{
	system("cls");
	
	printf("\t=====================================================\n");
	printf("\t\t\tBUDGET\n");
	printf("\t=====================================================\n\n");
	printf("\tWHAT IS YOUR BUDGET FOR THE EVENT(IN NAIRA)?\n");
	
	int n;
	
    printf("Enter your Budget:");
    scanf("%d", &n);
    return (n);
}
