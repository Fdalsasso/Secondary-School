def fibonacci(l):
    if l == 0:
        x = 0
    elif l == 1:
        x = 1
    else:
        x = fibonacci(l-1) + fibonacci(l-2)
    return x

z = int(input("ingrese un numero "))
print("el numero de fibonacci de ", z, " es ", fibonacci(z))

