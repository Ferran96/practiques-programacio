#include <stdio.h>
#include <time.h>
#include <math.h>

int
main ()
{
  float discriminant, a, b, c, x1, x2, xr, xi;

  printf ("Dona el coeficient A ");
   scanf ("%f", &a);
  while (a == 0)
    {
      printf ("El valor de a no pot ser 0. Introdueix un altre valor: ");
      scanf ("%f", &a);
    }

  printf ("Dona el coeficient B ");
  scanf ("%f", &b);
  printf ("Dona el coeficient C ");
  scanf ("%f", &c);

  discriminant=pow(b, 2.0)-(4*a*c);


  if (discriminant > 0.0)
    {
      printf("\t\t\tLas dos raices son reales");
       x1=((-b+sqrt(discriminant))/(2.0*a));
       x2=((-b-sqrt(discriminant))/(2.0*a));
       printf("\n\t\t\tx1=%.2f   x2=%.2f", x1, x2);
    }

  if (discriminant < 0.0)
    {
     xr=(-b/(2.0*a));
           xi=(sqrt(-discriminant)/(2.0*a));
           printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f", xr, xi);
    }

  if (discriminant == 0.0)
    {
        x1=(-b)/(2.0*a);
           printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", x1);
    }

  return 0;
}

