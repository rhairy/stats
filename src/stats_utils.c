#include "stats_utils.h"

/* Convert string into an integer */
int stats_atoi( char *str )
{
  int i, n;
  i = n = 0;

  while( str[i] != '\0' )
    {
    n = 10 * n + ( str[i] - '0' );
    i++;
    }

  return n;
}

/* Convert string into a float */
double stats_atof( char *str )
{
  double n, o;
  n = 0;
  o = .1;

  int frac, i;
  frac = i = 0;

  while ( str[i] != '\0' )
    {
      if ( str[i] == '.' )
        {
        frac = 1;
        i++;
        }
      else
        {
        if( frac )
          {
          n += o * ( str[i] - '0' ) ;
          o *= .1;
          i++;
          }
        else
          {
          n = 10 * n + ( str[i] - '0' );
          i++;
          }
        }
    }
  return n;
}

