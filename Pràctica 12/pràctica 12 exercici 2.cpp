include <stdio.h>
int main(void){
	int particio=1, i xifra, n, a, xifra2, curios=0;
	printf("Dona'm un numero i et dir� si �s curi�s"); scanf ("%d", &n);
	a=n;
	while (a>=10{
		particio++;
		a/=10;
	}
	a=n;
	a*a;
	for (i=particio; i>0; i--){
		xifra=n%10;
		xifra2=a%10;
		if(xifra==xifra2) curios++;
		else curios=0;
		n/=10;
		a/=10;
	}
	if (curios==particio) printf ("El n�mero �s curi�s");
	else printf("El numero no �s curi�s);
	return 0
	}
}
