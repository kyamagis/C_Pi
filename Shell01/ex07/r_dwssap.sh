cat /etc/passwd |grep -v '^#'| awk "NR%2==0" | rev | cut -f 7 -d  ":" | sort -r | awk "NR == $FT_LINE1, NR == $FT_LINE2 {print}" |tr "\n" ',' | sed -e 's/,$/./' | sed 's/,/, /g'|tr -d "\n"
