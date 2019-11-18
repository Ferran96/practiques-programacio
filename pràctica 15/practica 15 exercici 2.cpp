
#include <stdio.h>

int
main ()
{
  int fibonacci[15];

  for (int i = 0; i < 15; i++)
    {

      if (i == 0)
	{
	  fibonacci[i] = 0;
	}

      if (i == 1 || i == 2)
	{
	  fibonacci[i] = 1;
	}
      else
	{
	  fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
	}
    }


for( int i=14; i>=0; i--)
{
  printf ("%d", fibonacci[i]);
  printf ("\n");
}

  
  return 0;
}
