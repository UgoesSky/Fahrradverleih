#include <stdio.h>
#include <stdlib.h>

void lcd(char* text)
{
  printf(text);
}

int main(int argc, char const *argv[]) {
  int knum;
  printf("Geben Sie die Kundennummer ein:");
  scanf("%d", &knum);
printf("%d",knum);

  lcd("w\n");
  return 0;
}
