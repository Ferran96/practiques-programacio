#include <stdio.h>
#include <string.h>

#define MAX 80
int main()
{
    /*Fes un programa que llegeix de teclat una cadena de car�cters 
    i un car�cter. Per pantalla mostrar� el nombre de vegades que 
    apareix el car�cter a la cadena. */
    
    int  i=0, coincidencies = 0;
    char nom[MAX], comparador[1]; 
    
    printf("Escriu una cadena de car�cters: "); gets(nom);
    printf("Dona'm un car�cter: "); gets(comparador);
    
    for (i=0; i<strlen(nom); i++)
    {
        if (nom[i] == comparador[0])
        {
            coincidencies++;
        }
    }
    
    printf("N�mero coincid�ncies: %d\n", coincidencies);
    
     return 0;
}

