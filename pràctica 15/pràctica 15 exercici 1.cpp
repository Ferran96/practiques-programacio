#include <stdio.h>

int
main ()
{
  int conjunt[100];

  for (int i = 0; i < 100; i++)
    {
          if (i % 2 == 0)
    	{
    	    conjunt[i] =0;
    	 printf ("�s parell\n");
    	 printf ("%d", conjunt[i]);
    	 printf ("\n");
    	}
         
          if (i % 2 != 0)
    	{
    	  conjunt[i] =1;
    	  printf ("�s senar\n");
    	   printf ("%d", conjunt[i]);
    	 printf ("\n");
    	}
    }

  return 0;
}

