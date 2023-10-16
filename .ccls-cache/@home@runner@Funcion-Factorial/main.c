#include <stdio.h>

int main(void) {
  int num, resultado;
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  resultado = factorial(num);
  printf("El factorial es: %d", resultado);
  return 0;
}
int factorial(int n){
  int r = 1;
  if(n == 0 || n == 1){
    return 1;
  
  }else{
    r = n*factorial(n - 1);
    printf("%d ", r);
    return r;
  }
}