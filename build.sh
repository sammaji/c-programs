#!/bin/bash

counter=0
output_file="output.txt"
subdir=${1:-march_14_23}
c_files=$(find ./$subdir -name "*.c")

touch $output_file
echo "" > $output_file

for file in $c_files; do
    base=$(basename -- "$file")
    executable="${base%.*}.exe"
    
    echo "Problem: " >> $output_file
    echo "Solution: " >> $output_file
    echo -e "\e[1;32m[⚡ reading...]\e[0m $base"
    cat $file >> $output_file
    gcc $file -o $executable
    
    printf "\n" >> $output_file
    
    echo "Output: " >> $output_file
    printf "\e[1;34m[Enter]\e[0m input for $base: "
    ./$executable >> $output_file
    
    echo -e "\e[1;32m[✅ Read]\e[0m $file"
    printf "\n" >> $output_file
    printf "\n"
    counter=$((counter+1))
done

echo -e "Read \e[1;32m$counter\e[m files"
echo -e "Successfully created \e[1;32m$output_file\e[0m"

printf "\n"
delete_counter=0
cache=$(find . -name "*.exe")
for executable in $cache; do
    rm $executable
    echo -e "\e[1;31m[deleted]\e[0m $executable"
    delete_counter=$(($delete_counter+1))
done
printf "\n"
echo -e "Deleted \e[1;31m$delete_counter\e[0m files"