#include <stdio.h>

int main()
{
    int edats[15];
    printf("Dona'm les edats de totes les persones\n");
    
    
    //amb això omplim el vector
    int edatIntroduida=0;
    for (int i=0; i<15; i++){
        scanf("%d", &edatIntroduida);
        edats[i]=edatIntroduida;
    }
    
    float sumatori=0;
     for (int i=0; i<15; i++){
         sumatori+=edats[i];
         
     }
    printf("Sumatori %.2f ",sumatori/15);
    
     

    return 0;
}

