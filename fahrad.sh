#!/bin/bash
read -p "Willkommen bei U-Ride. Bitte wählen!" ausw #>Display
if [[ $ausw == 1 ]]; then
  #AUSLEIHE
  #Überprüfung Uhrzeit -> Variable
    	DATE=$(date +%H)
      if [[  $DATE  == 10 || $DATE  == 11 || $DATE  == 12 || $DATE  == 13 || $DATE  == 14 || $DATE  == 15 || $DATE  == 16 || $DATE  == 17 || $DATE  == 18 || $DATE  == 19 || $DATE  == 20 || $DATE  == 21 ]]; then
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
