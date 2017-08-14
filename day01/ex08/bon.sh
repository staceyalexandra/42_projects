ldapsearch  -Q  "(sn=*bon*)" | grep "numEntries" | cut -d : -f 2
