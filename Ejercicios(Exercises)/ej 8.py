def f(l, c):
    l1 = []
    for x in range(len(l)):
        if ord(l[x][0]) == ord(c) - 1:
            l1.insert(x, l[x])
    return l1

print("ingrese palabras, cuando se aburra inserte un numero: ")
cont = 0
lista = []
while 50:
    a = input()
    if a.isalpha() is False:
        break
    else:
        lista.insert(cont, a)
        cont+=1
w = input("ingrese una letra ")
print(f(lista, w))