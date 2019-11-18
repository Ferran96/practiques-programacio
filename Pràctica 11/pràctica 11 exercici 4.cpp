#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
int
main ()
{
  int numero;
  bool esPrimer = false;


  printf ("Dona'm un numero' ");
  scanf ("%d", &numero);

  for (int x = 2; x < numero; x++)
    {
      if (numero % x == 0)
	{
	  esPrimer = false;
	  break;
	}
      else
	{
	  esPrimer = true;
	}
    }

  if (esPrimer)
    {
      printf ("El numero ES primer");
    }
  else
    {
      printf ("El numero NO es primer");
      //Busca desde el numero NO primer fins el proper numero primer
    }




  return 0;
