#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char number1[500], number2[500];
  int aux1=0, aux2=0;
  printf("Ingrese sus textos\n");
  scanf("%s",number1);
  scanf("%s",number2);

  for(int i=2; i<strlen(number1);i++){
    aux1=aux1*10;
    aux1=aux1 + (number1[i]-'0');
  }
  for(int i=2; i<strlen(number2);i++){
    aux2=aux2*10;
    aux2=aux2 + (number2[i]-'0');
  }
  if(aux1<aux2){
    printf("%d\n",aux1 );
  }else{
    printf("%d\n",aux2 );
  }
  return(0);


}
