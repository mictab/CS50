/*
* greedy.c
* Written by Michel Tabari
* CS50 Harvard University pset1
* Returns given value in nickels, dimes etc.
*/


#include <stdio.h>
#include <math.h>
#include <cs50.h>

#define QUARTER 25;
#define NICKEL 5;
#define DIME 10;

int main(void)
{
  // define variables to be used
	int cent_amount, quarter_count, dime_count, nickel_count, leftover, coin_count;
	float given_money;
  
  // user input
	do
	{
		printf("You give me: ");
		given_money = GetFloat();

		if (given_money <= 0)
		{
			printf("The amount should be greater than zero\n: ");
		}
	}
	while (given_money <= 0);
  
  // convert given money into cents
	cent_amount = (int) round(given_money * 100);

	quarter_count = cent_amount / QUARTER;
	leftover = cent_amount % QUARTER;

	dime_count = leftover / DIME;
	leftover = leftover % DIME;

	nickel_count = leftover / NICKEL;
	leftover = leftover % NICKEL;

	coin_count = quarter_count + dime_count + nickel_count + leftover;

	printf("You get %d\n", coin_count);

	return 0;
}
