lista = []
while 1:
    x = input()
    if x.isdigit() == True:
        break
    lista.append(x)
lista.sort()
for x in range(len(lista)):
    print(lista[x])
