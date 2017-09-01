//progama para resolver la ecuacion AX + B = 0
#include <studio.h>
#include <conio.h>

float A,B,X;
int main(int argc, char const *argv[]) {
  do {
    printf("\nDa el valor de A diferente de cero", );
    scanf("%f",&A );
  } while(A == 0);
  do {
    printf("\nDa el valor de para b", );
    scanf("%f",&B );
  } while(B==0);
  return 0;
}
