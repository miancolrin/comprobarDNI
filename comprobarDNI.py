# -*- coding: utf-8 -*-

# Programa que a partir del número de DNI/NIF nos da la letra
# Creado por @miancolrin

print "Introduce el numero de DNI"
numero = input()

resto = numero % 23

if resto == 0:
    print "La letra es T"
elif resto == 1:
    print "La letra es R"
elif resto == 2:
    print "La letra es W"
elif resto == 3:
    print "La letra es A"
elif resto == 4:
    print "La letra es G"
elif resto == 5:
    print "La letra es M"
elif resto == 6:
    print "La letra es Y"
elif resto == 7:
    print "La letra es F"
elif resto == 8:
    print "La letra es P"
elif resto == 9:
    print "La letra es D"
elif resto == 10:
    print "La letra es X"
elif resto == 11:
    print "La letra es B"
elif resto == 12:
    print "La letra es N"
elif resto == 13:
    print "La letra es J"
elif resto == 14:
    print "La letra es Z"
elif resto == 15:
    print "La letra es S"
elif resto == 16:
    print "La letra es Q"
elif resto == 17:
    print "La letra es V"
elif resto == 18:
    print "La letra es H"
elif resto == 19:
    print "La letra es L"
elif resto == 20:
    print "La letra es C"
elif resto == 21:
    print "La letra es K"
elif resto == 22:
    print "La letra es E"
