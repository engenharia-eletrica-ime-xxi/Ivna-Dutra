#include <stdio.h>
#include <stdlib.h>


int main(){
    int i,j,k;
    for(i = 0; i < 1000;i++){
            printf("%d\n",i);
        for(j = 0; j < 1000;j++){
                if (i==127)printf("j is %d",j);
            for(k = 0; k< 1000;k++){
               if (i==127)printf("k: %d\n",k);
               malloc(4);
            }
        }
    }
return 0;
}
