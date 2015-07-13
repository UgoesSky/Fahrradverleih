#include <stdio.h>
#include <stdlib.h>

void lcd(char* text)
{
  printf(text);
}

int mysql(char* text)
{
  int num=1;
  printf(text);
  if (num=1) {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main(int argc, char const *argv[]) {
  int loginr;
  loginr=login();
  lcd("w\n");
  return 0;
}

int login()
{
  int mysqla;
  char* pin;
  char* knum;
  //EINGABE Kundennummer
//  knums: // goto-Sprungmarke
  printf("Geben Sie die Kundennummer ein:");
  scanf("%c", &knum);
//    printf(/*"%c",*/knum/*,"\n"*/); //Ausgabe Kundennummer
/*
  if (knum == "007")
  {
    printf("Korrekte Kundennummer!\n");
  }
  else
  {
  printf("Falsche Kundennummer!\n");
  //warten... (2 sec)
  goto knums;
}
*/
//printf("%d",knum); //Ausgabe Kundennummer (Nicht notwendig)
//Abfrage MySQL
mysqla=mysql("MySQL Abfrage Kundennummer, knum");
if (mysqla=1) {
  printf("Kundennummer unbekannt\n");
//  delay(2000);
//  knums:
}
//EINGABE PIN
printf("Geben Sie die PIN ein:");
scanf("%c", &pin);
// Verschüsselung MD5
//Abfrage MySQL
mysql("MySQL PIN");
return 0;
}
