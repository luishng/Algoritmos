import sys
from datetime import date

for row in sys.stdin:
    row = row.split()

    month = int(row[0])
    day = int(row[1])

    chrismas = date(2016, 12, 25)
    today = date(2016, month, day)

    result = (chrismas-today).days

    if result is 1:
        print("E vespera de natal!")
    elif result is 0:
        print("E natal!")
    elif result < 0:
        print("Ja passou!")
    else:
        print("Faltam "+ str(result) +" dias para o natal!")