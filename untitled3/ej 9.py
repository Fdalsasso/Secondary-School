def f(l, s):
    x = int
    for c in range(len(l)):
        if l[c] == s:
            x = c + 1
            break
        else:
            x = -1
    return x


print("escriba palabras, escriba un numero para finalizar")
cont = 0
lista = []
while 50:
    a = input()
    if a.isalpha() is False:
        break
    else:
        lista.insert(cont, a)
        cont += 1
w = input("ingrese una palabra ")
print(f(lista, w))
