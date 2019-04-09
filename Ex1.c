#include<stdio.h>

int main(){

int med_VE;
int VC;
int VF;


printf("Digite a media da VE:");
scanf("%d", &med_VE);

if (0 < med_VE < 10){
printf("Digite o valor da VC:");
            }
    else {
        printf("Valor incorreto.");
    }

scanf("%d", &VC);

VF = 10-(med_VE+VC)/2;

if (VF<4) {
    printf("Parabens! Voce precisa tirar 4.");

}
else{
    printf("Que pena. Voce precisa tirar %d\n.", VF);
}
return 0;
}
