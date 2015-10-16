#include "stats_math.h"

/* Take a base, and return the product of itself "exp" times */
double stats_en( double base, int exp )
{
  double res = base;
  int i = 1;

  if ( exp == 0 )
    {
    return 1;
    }
  else
    {
    while( i < exp )
      {
      res *= base;
      i++;
      }
    }
  return res;
}

