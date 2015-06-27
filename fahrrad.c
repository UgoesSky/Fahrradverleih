#include <stdio.h>
#include <stdlib.h>

void lcd(char* text)
{
  printf(text);
}

int main(int argc, char const *argv[]) {
  //EINGABE Kundennummer
  int knum;
  printf("Geben Sie die Kundennummer ein:");
  scanf("%d", &knum);
//printf("%d",knum); //Ausgabe Kundennummer (Nicht notwendig)
//Abfrage MySQL
//EINGABE PIN
printf("Geben Sie die Kundennummer ein:");
scanf("%d", &knum);

  lcd("w\n");
  return 0;
}
