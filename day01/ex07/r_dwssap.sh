cat /etc/passwd | awk 'NR%1 ==0'| grep -v '#' | cut -d : -f1 /etc/passwd | sort -r | awk 'NR>=$FT_LINE1 && NR<=$FT_LINE2' | paste -s -d "," - | sed 's/$/./g'
