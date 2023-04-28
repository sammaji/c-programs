echo "\e[92m[created]\e[0m \e[36m$1.c\e[0m"
echo "#include<stdio.h>\n\nvoid main() {\n\n}" > ${1:-file}.c
${2:-vim} ${1:-file}.c