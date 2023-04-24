#include <stdio.h>

#define YEAR 2022

char * getMonthByIndex(int monthIndex)
{
	
		switch (monthIndex)
		{
			case 0: return "January";
			case 1: return "February";
			case 2: return "March"; 
			case 3: return "April";
			case 4: return "May";
			case 5: return "June";
			case 6: return "July";
			case 7: return "August";
			case 8: return "September";
			case 9: return "October";
			case 10: return "November";
			case 11: return "December";
			default: return "";
		}
}

int main() 
{
	char fileName[] = "input.txt"; 
	FILE* file = fopen(fileName, "r");
	
	float monthlySaleData[12];
	printf("Monthly sales report for %d \n\n", YEAR);
	for (int i=0; i < 12; i++)
	{
		char *month = getMonthByIndex(i);
		fscanf(file, "%f", &monthlySaleData[i]);
		printf("%s:     ", month);	
		printf("$ %.2f\n", monthlySaleData[i]);
       }
	printf("\n\nSales Summary:\n");
	float average = 0.0;
	
	char *minMonth;
	char *maxMonth;
	float currentMin; 
	float currentMax; 

	for (int i=0; i < 12; i++)
	{
		average += monthlySaleData[i];

		if (monthlySaleData[i] < currentMin)
		{
			currentMin = monthlySaleData[i];
			minMonth = getMonthByIndex(i);
		} else if (monthlySaleData[i] > currentMax)
		{
			currentMax = monthlySaleData[i];
			maxMonth = getMonthByIndex(i);
		}
	}
	average = average / 12;
	printf("Minimum Sales:   $%.2f   (%s)\n", currentMin, minMonth);
	printf("Maximum Sales:   $%.2f   (%s)\n", currentMax, maxMonth);
	printf("Average Sales:   $%.2f\n", average);	
}
