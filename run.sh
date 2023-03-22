#! /usr/bin/bash

echo "" > assignment.txt

echo "Solution" >> assignment.txt

cat "$2/$1.c" >> assignment.txt

echo "Output" >> assignment.txt

gcc $2/$1.c -o $1.exe >> assignment.txt

./$2/$1.exe >> assignment.txt