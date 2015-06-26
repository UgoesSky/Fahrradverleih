#!/bin/bash
#Varialben
ausw=0
DATE=0
BNUM=0
PIN=0
read -p "Willkommen bei U-Ride. Bitte Benutzernummer eingeben!" BNUM #>Display
# TODO MySQL Abfrage
if [[ $BNUM == 0 ]]; then
  #statements
else

fi
if [[ $ausw == 1 ]]; then
  #AUSLEIHE
  #Überprüfung Uhrzeit -> Variable
    	DATEH=$(date +%H)
      DATED=$(date +%u )
      if [[  $DATEH  == 10 || $DATEH  == 11 || $DATEH  == 12 || $DATEH  == 13 || $DATEH  == 14 || $DATEH  == 15 || $DATEH  == 16 || $DATEH  == 17 || $DATEH  == 18 || $DATEH  == 19 || $DATEH  == 20 || $DATEH  == 21  ]]; then
      #TODO Wochentag implementieren und Abfrage
        #AUSLEIHE ok
      else
        #ausleihe verweigern

      fi
      #TODO Uhrzeit interpretieren, ggf. keine ausleihe.
      #TODO Hintertür
elif [[ $ausw == 2 ]]; then
    #RÜCKGABE
  else
    #HILFE
    echo "Bitte an das Team wenden! Bis bald!" #>Display
fi
