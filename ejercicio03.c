#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d",&n);
  double array[n];

  double promedio=0;
  for(int i=0;i<n;i++){
    scanf("%lf",&array[i]);
    promedio = promedio + array[i];
  }
  promedio = promedio/n;

  double min, max, aux;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n-1; j++){
      if(array[j] < array[i]){
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
      }
    }
  }
  min = array[0];
  max = array[n-1];

  double mediana;
  if(n%2==0){
    mediana = (array[n/2]+array[(n/2)+1])/2;
  }else{
    mediana = array[(n+1)/2];
  }

  double varianza=0, desviacion, desviacionMedia=0;
  for(int i=0;i<n;i++){
    varianza = varianza + pow(array[i]-promedio,2);
    desviacionMedia = desviacionMedia + fabs(array[i]-promedio);
  }
  desviacionMedia = desviacionMedia/n;
  varianza = varianza/n;
  desviacion = sqrt(varianza);

  printf("min=%e, max=%+010lf, promedio=%010.2lf, mediana=%.4lf, Desviacon media=%.2f, Desviacion standart=%.3g, Varianza=%g",min,max,promedio,mediana,desviacionMedia,desviacion,varianza );

  return(0);
}
