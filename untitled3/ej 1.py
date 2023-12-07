import math

x = int(input("ingrese el valor de x: "))
y = int(input("ingrese el valor de y: "))
print("enter 1 for the 1st operation\nenter 2 for the 2nd operation\nenter 3 for the 3rd operation\n")
e = int(input())
if e == 1:
    c = x + y ** 2
    print("\nel resultado es: ", c)
elif e == 2:
    if x == 0:
        print("\nx es 0\n")
    elif y == 0:
        print("\ny es 0\n")
    else:
        c = (x ** 2) + (y ** 2)
        c = c / (x * y)
        print("\n", c)
else:
    c = (x ** 2) * math.log(y, 2)
    print("\nel resultado es: ", c)
