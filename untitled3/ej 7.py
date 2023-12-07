def mayor(l, n):
    l1 = []
    for x in range(len(l)):
        if l[x] < n:
            l1.insert(x, l[x])
    return l1


print("ingrese una lista de numeros, ingrese una letra cualquiera para dejar de ingresar numeros a la lista")
lista = []
cont = 0
while 50:
    f = input()
    if f.isdigit() is False:
        break
    else:
        lista.insert(cont, int(f))
        cont += 1
w = int(input("ingrese un numero "))
print(mayor(lista, w))