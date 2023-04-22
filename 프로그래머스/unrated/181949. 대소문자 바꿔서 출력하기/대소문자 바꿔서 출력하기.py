str = input()

con_str = ""

for a in str :
    if(a.isupper()) :
        con_str += a.lower()
    else :
        con_str += a.upper()
        
print(con_str)