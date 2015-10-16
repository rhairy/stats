#include <stdio.h>
#include "stats_math.h"
#include "stats_utils.h"

int main( int argc, char *argv[] )
{
	if( argc < 2 || argc > 2 ) {
		printf( "Invalid number of arguments.\n" );
		return -1;
	 }
	else {
		printf( "%s was entered; atof returned %f.\n", argv[1], stats_atof( argv[1] ) );
		return 0;
	}
}
