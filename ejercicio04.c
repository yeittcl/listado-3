#include <stdio.h>
#include <stdlib.h>

int main(){
  char caracter;
  int aux;
  printf("Ingrese un caracter\n");
  scanf("%c",&caracter);
  aux=caracter;
  if(aux>=65 && aux<=90){
    printf("Mayuscula\n");
  }else if(aux>=97 && aux<=122){
    printf("Minuscula\n");
  }else if(aux>=48 && aux<=57){
    printf("Numero\n");
  }else{
    printf("Otro\n");
  }
  return(0);
}
