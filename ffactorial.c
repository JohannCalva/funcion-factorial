#include <stdio.h>

int main(void) {
  int num, resultado;
  printf("Ingrese un numero: ");
  do{
    scanf("%d", &num);
    if(num<0){
      printf("Ingrese un numero positivo: ");
    }else{
      resultado = factorial(num);
    }
  }while(num<0);
  printf("El factorial es: %d", resultado);
  return 0;
}

int factorial(int n){
  int r = 1;
  if(n == 0 || n == 1){
    return 1;
  }else{
    for(int i = n; i > 0; i--){
      r = r*i;
    }
    return r;
  }
}