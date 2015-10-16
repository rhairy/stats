#include <stdio.h>
#include <stdlib.h>
#include "stats_math.h"

int main( int argc, char *argv[] ) {
	
	if( argc < 2 || argc > 2 ) {
		printf( "Invalid number of arguments.\n" );
		return -1;
	}
	else {
		char *arg = argv[1];
		int arg_num = atoi( argv[1] );

		printf( "You entered %s; The factorial of %s is %li.\n", arg, arg, stats_factorial( arg_num ) ); 
		return 0;
	}
}
