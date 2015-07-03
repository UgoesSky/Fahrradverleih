#include <stdio.h>
#include <stdlib.h>

void lcd(char* text)
{
  printf(text);
}

void mysql(char* text)
{
  printf(text);
}

int main(int argc, char const *argv[]) {
  int loginr;
  loginr=login();
  lcd("w\n");
  return 0;
}

int login()
{
  char* pin;
  char* knum;
  //EINGABE Kundennummer
  knum: // goto-Sprungmarke
  printf("Geben Sie die Kundennummer ein:");
  scanf("%c", &knum);
  printf(/*"%c",*/knum/*,"\n"*/); //Ausgabe Kundennummer
/*
  if (knum == "007")
  {
    printf("Korrekte Kundennummer!\n");
  }
  else
  {
  printf("Falsche Kundennummer!\n");
  //warten... (2 sec)
  goto knum;
}
*/
//printf("%d",knum); //Ausgabe Kundennummer (Nicht notwendig)
//Abfrage MySQL
mysql("MySQL Abfrage Kundennummer");
//EINGABE PIN
printf("Geben Sie die PIN ein:");
scanf("%c", &pin);
// Verschüsselung MD5
//Abfrage MySQL
mysql("MySQL PIN");
return 0;
}
