#include <stdio.h>
#include <string.h>

#define MAX 80
int main()
{
    /*Fes un programa que llegeix de teclat una cadena de caràcters 
    i un caràcter. Per pantalla mostrarà el nombre de vegades que 
    apareix el caràcter a la cadena. */
    
    int  i=0, coincidencies = 0;
    char nom[MAX], comparador[1]; 
    
    printf("Escriu una cadena de caràcters: "); gets(nom);
    printf("Dona'm un caràcter: "); gets(comparador);
    
    for (i=0; i<strlen(nom); i++)
    {
        if (nom[i] == comparador[0])
        {
            coincidencies++;
        }
    }
    
    printf("Número coincidències: %d\n", coincidencies);
    
     return 0;
}

