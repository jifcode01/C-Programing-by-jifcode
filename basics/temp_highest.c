#include <stdio.h>

	/* print fahrenheit-Celcius table from 300 down to 0 */


int main()
{


	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* Lower limit of temperature scale */
	upper = 300; /* upper limit */
	step= 20;   /* step size */



	fahr = upper;
	while (fahr >= lower) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr - step;

	}



}
