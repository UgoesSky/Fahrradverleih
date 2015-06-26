#!/bin/bash
DATE=$(date +%H)
echo $DATE
if [[  $DATE  == 10 || $DATE  == 11  || $DATE  == 12 || $DATE  == 13 || $DATE  == 14 || $DATE  == 15 || $DATE  == 16 || $DATE  == 17 || $DATE  == 18 || $DATE  == 19 || $DATE  == 20 || $DATE  == 22 ]]; then
echo "OK"
else
  echo "zu spät"
fi
#
