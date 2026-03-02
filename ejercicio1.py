import sys

i=1
for line in sys.stdin:
    print("Linea",i,line,end="")
    i +=1
    if i>=5:
        break

