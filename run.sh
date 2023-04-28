gcc $1.c -o $1.exe
echo "\e[92m[created executable]\e[0m $1.exe"
echo "\e[94m[running...]\e[0m $1.exe"
./$1.exe
echo "\n\e[92m[successfully executed 👍]\e[0m $1.exe"
