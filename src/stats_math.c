#include "stats_math.h"

/* Return the factorial of the given number. */
unsigned long int stats_factorial( int number ) {

	int i = number - 1;
	unsigned long int res = number;
	
	while( i > 0 ) {
		res *= i;
		i--;
	}

	return res;
}		

