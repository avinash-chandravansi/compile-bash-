#!/bin/bash 
#OUTPUT to get the list of  elf files 
OUTPUT=$(find $1 -type f -exec sh -c "file {}| grep -Pi ': elf (32|64)-bit' > /dev/null" \; -print );
len=($(echo "$OUTPUT" | tr ' ' '\n'))  #Finding the no of file returned
sort_out=$(ls -Sr $OUTPUT | head -n ${#len[@]});  #sorting the files according to size
a=($(echo "$sort_out" | tr ' ' '\n')) ; #storing sorted file into array 
for i  in "${a[@]}"
do :
FILENAME=${i};
file=$(basename $FILENAME);
FILESIZE=$(stat -c%s "$FILENAME"); #getting size of each file  
echo "$file - $FILESIZE bytes.";
done