/*Programa que determina dado un numero si es o no mayor a 10*/
//Eros Gallegos UANL 1884457
//Problema 4
#include <studio.h>
#include <conio.h>

int x;
int main(int argc, char const *argv[]) {
  printf("%s\nDa el valor del numero: ", );
  scanf("%d",&x);
  if(x>10)
  printf("\nEL numero es mayor a 10", );
  else
  printf("\nEl valor es menor a 10", );
  printf("\nOprima cualquier tecla", );
  getch();

  return 0;
}
