#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int zahl1;
  int zahl2;
  int antw;
  int zahl3;

  printf("Zahl1 eingeben\n");
  scanf("%d", &zahl1);
  printf("Zahl2 eingeben\n");
  scanf("%d", &zahl2);
  printf("%d und %d\n", zahl1, zahl2);
  printf("Soll die Zahlen addiert werden?\n");
  scanf("%d", &zahl3);
if (zahl3 < 1) {
  antw = zahl2 + zahl1;
  printf("%d\n", antw);
}
else
{
  printf("Wiedersehn\n");
}
  return 0;
}
