#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char number[200];
  int aux=0;
  printf("Ingrese un numero flotante\n");
  scanf("%s",number);

  for(int i=0;i<strlen(number);i++){
    if(number[i]=='.'){
      continue;
    }else{
      aux = aux + (number[i]-'0');
    }
  }
  printf("%d\n",aux);
  return(0);
}
