#include <wiringPi.h>           //WiringPi headers
#include <lcd.h>                //LCD headers from WiringPi
#include <stdio.h>              //Needed for the printf function below
#include <stdlib.h>
 
//Pin numbers below are the WiringPi pin numbers
 
#define LCD_RS  0               //Register select pin
#define LCD_E   1               //Enable Pin
#define LCD_D4  2               //Data pin 4
#define LCD_D5  3               //Data pin 5
#define LCD_D6  4               //Data pin 6
#define LCD_D7  5               //Data pin 7
 
int main()
{
printf ("start");
    int lcd;                //Handle for LCD
    wiringPiSetup();        //Initialise WiringPi
printf ("wPI");
 
    //Initialise LCD(int rows, int cols, int bits, int rs, int enable, int d0, int d1, int d2, int d3, int d4, int d5, int d6, int d7)
    if (lcd = lcdInit (2, 16,4, LCD_RS, LCD_E ,LCD_D4 , LCD_D5, LCD_D6,LCD_D7,0,0,0,0)){
//  if (lcd = lcdInit (2, 16,4,0,0,0,0, LCD_RS, LCD_E ,LCD_D4 , LCD_D5, LCD_D6,LCD_D7)){
            printf ("lcdInit failed! \n");
            return -1 ;
    }
while (1) {
printf ("while");
    lcdPosition(lcd,0,0);           //Position cursor on the first line in the first column
    lcdPuts(lcd, "Willkommen!");  //Print the text on the LCD at the current cursor postion
    delay(1000);
    lcdClear(lcd);
    lcdPuts(lcd, "Sag doch was!");
    delay(1000);
//  getchar();                      //Wait for key press
    lcdClear(lcd);                  //Clear the display
}
}
