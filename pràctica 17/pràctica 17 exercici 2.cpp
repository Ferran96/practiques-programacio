#include <stdio.h>

int main()
{
    int edats[15];
    int posicionsEdat[120];
    printf("Dona'm les edats de totes les persones\n");
    
    
    int edatIntroduida=0;
   
   //inicialitzem el vector amb totes les posicions a 0
   for (int i=0; i<120; i++){
       posicionsEdat[i]=0;
   }
   
   //amb això omplim el vector de edats
    for (int i=0; i<15; i++){
        scanf("%d", &edatIntroduida);
        edats[i]=edatIntroduida;
        //aquí posem a la posicio igual a l'edat el contador
        posicionsEdat[edatIntroduida] += 1;
    }
    
    //Edat mitja
    float sumatori=0;
     for (int i=0; i<15; i++){
         sumatori+=edats[i];
     }
    printf("Sumatori %.2f ",sumatori/15);
    
    //Moda versió 1
    int moda=0;
    int valorComprobat = 0;
    //Mirem totes les posicions del vector de posicionsEdat
    for (int i=0; i<120; i++){
        //Si el numero guardat a la posició i és més gran que el valor comprovat
        if(posicionsEdat[i] > valorComprobat)
       {
           //la moda és la posició i
           moda = i;
           //el valor comprobat és igual al valor assignat a la posició i del vector
           valorComprobat = posicionsEdat[i];
       }
    }
      printf("Moda %d\n", moda);
      
     
     
     

    return 0;
}

