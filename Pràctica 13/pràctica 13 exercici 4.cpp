
#include <stdio.h>
#include <stdbool.h>

int
main ()
{

  int diaNaixement = 0;
  char diaNaixementString[7];
  bool invalidDate;
  invalidDate = true;

  while (invalidDate)
    {
        
      printf ("Dona'm un la teva data de naixement (format ddmmyyyy)");
      scanf ("%d", &diaNaixement);

      int any = 0;
      any = diaNaixement % 10000;
      printf ("%d\n", any);

      int dia = 0;
      dia = (diaNaixement / 1000000);
      printf ("%d\n", dia);

      int mes = 0;
      mes = (diaNaixement % 1000000 / 10000);
      printf ("%d\n", mes);

    

    }
  return 0;
}
