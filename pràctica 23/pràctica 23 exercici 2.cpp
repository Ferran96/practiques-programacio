
#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int COLUMNES,FILES, posFil , posCol;
    printf("Dóna’m el número de files: "); 
    scanf("%d", &FILES);
    printf("Dóna’m el número de columnes: "); 
    scanf("%d", &COLUMNES);

    int matriu[FILES][COLUMNES];
    
  
    for (posFil=0; posFil<FILES; posFil++){
         for (posCol=0; posCol<COLUMNES; posCol++){
              printf ("Omple la matriu amb nUmeros enters: ");
           scanf("%d",&matriu[posFil][posCol]);  
         }
    }
  
    int sumatoriTotal = 0;
    int sumatori = 0; 
  
    //Aqui calculem la suma de les files
     for (posFil=0; posFil <= FILES - 1; posFil++){
       sumatori = 0; 
         for (posCol=0; posCol <= COLUMNES - 1; posCol++){
             sumatori += matriu[posFil][posCol];
         }
           printf("Filera %d - ", posFil + 1);  
           printf("%d \n", sumatori); 
           sumatoriTotal += sumatori;
    }
    
    //Aqui calculem la suma de les columnes
      for (posCol=0; posCol <= COLUMNES - 1; posCol++){
        sumatori = 0; 
         for (posFil=0; posFil <= FILES - 1; posFil++){
             sumatori += matriu[posFil][posCol];
         }
           printf("Columna %d - ", posCol + 1);  
           printf("%d \n", sumatori);   
            sumatoriTotal += sumatori;
    }
    
    
       printf("Suma total %d \n",sumatoriTotal);  
        printf("Mitja %f \n", sumatoriTotal / ((double)FILES + (double)COLUMNES));
   
    
    return 0;
}

