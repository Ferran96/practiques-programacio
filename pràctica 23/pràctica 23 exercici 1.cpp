#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int COLUMNES,FILES, i , j;
    bool esCreixent;
    printf("D�na�m el n�mero de files: "); 
    scanf("%d", &FILES);
    printf("D�na�m el n�mero de columnes: "); 
    scanf("%d", &COLUMNES);

    int matriu[FILES][COLUMNES];
    
  
    for (i=0; i<FILES; i++){
         for (j=0; j<COLUMNES; j++){
              printf ("Omple la matriu amb nUmeros enters: ");
           scanf("%d",&matriu[i][j]);  
         }
    }
    
    bool finalColumnaCalculat = false;
    esCreixent=true;
     for (i=0; i<FILES; i++){
         for (j=0; j<COLUMNES; j++){
             
             if(j + 1 < COLUMNES && i + 1 < FILES)
             {
                    if(matriu[i][j] <= matriu[i][j+1] && matriu[i][j] <= matriu[i+1][j])
                     {
                        esCreixent=true; 
                     }
                     else
                     {
                         esCreixent=false;
                     }
             }
             else
             {
                 if(finalColumnaCalculat == false)
                 {
                    if(matriu[i][j] <= matriu[i+1][j])
                     {
                        esCreixent=true; 
                     }
                     else
                     {
                         esCreixent=false;
                     }
                     finalColumnaCalculat = true; 
                                      }
                
             }
             
             
               if(j + 1 < COLUMNES && i + 1 < FILES)
         }
    }
    
       for (i=0; i<FILES; i++){
        for (j=0; j<COLUMNES; j++){
           printf("%4d - ",matriu[i][j]);    
        }
        printf("\n");    
        
    }
    
    if(esCreixent)
    {
        printf("La matriu �s creixent");
    }
    else
    {
         printf("La matriu NO �s creixent");
    }
         
    
    return 0;
}

