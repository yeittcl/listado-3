#include <stdio.h>
#include <stdlib.h>

int main(){

  int number;
  do {
    printf("Ingrese un numero:\n");
    scanf("%i",&number);
  } while(number<0 && number>255);

  char character;
  character = number;
  printf("%c\n",character);

  unsigned int unnumber;
  unnumber = number;
  printf("%u\n",unnumber);

  printf("%o\n",number);

  printf("%x\n",number);

  return(0);
}
