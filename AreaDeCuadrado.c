//Area de una cuadrado
#include <studio.h>
#include <conio.h>

int L, A;
int main(int argc, char const *argv[]) {
  /* code */
  do {
    printf("%s\nda el valor de una lado del cuadrado", );
    scanf("%d",&L );

  } while(L<=0);
  A=L*L;
  printf("%s\n Area=%d",A );
  printf("%s\n oprima cualquier tecla");
  getch();
  return 0;
}
