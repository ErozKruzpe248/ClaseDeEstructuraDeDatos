//Problema 9
// Eros Alberto Gallegos Ramírez 1884457
//version 1 while
//programa que calcula el valor de un numero elevado a una potencia.

#include <stdio.h>
#include <conio.h>


int i, a, n;
float s;
int main(int argc, char const *argv[]) {
  do {
    printf("\n da el valor de la base debe ser diferente a cerro", );
    scanf("%d",&a );
  } while(a¡=0);

  do {
    printf("\n da el valor del exponente [> o iguala 0]:" );
    scanf("%d", & n);

  } while(n<0);
  s = 1;
  i = 1;
  while (i<=n)
  {
    s = s * a;
    i = i + 1;
  }
  printf("\n base: %d \t exponente: %d \t resultado: %0f", a, n, s);
  printf("\n Oprima cualquier tecla", );
  getch();
  return 0;
}
