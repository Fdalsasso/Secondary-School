import time
import csv


def particion(Lista, izq, der):
    pivote = Lista[der]
    indice = izq
    for i in range(izq, der):
        if Lista[i] <= pivote:
            Lista[indice], Lista[i] = Lista[i], Lista[indice]
            indice += 1
    Lista[indice], Lista[der] = Lista[der], Lista[indice]
    return indice


def quicksort(ordenar, izq, der):
    if izq < der:
        pivote_indice = particion(ordenar, izq, der)
        quicksort(ordenar, izq, pivote_indice - 1)
        quicksort(ordenar, pivote_indice + 1, der)


def lista(L, M):
    C = []
    c = len(L) - 1
    while float(L[c][0]) == float(L[-1][0]):
        C.append(L[c])
        if c == 0:
            break
        c -= 1
    c = 0
    while float(M[c][0]) == float(M[0][0]):
        C.append(M[c])
        c += 1
        if c == len(M):
            break
    return C


def dis(n1, n2):
    d = ((float(n1[0]) - float(n2[0])) ** 2 + (float(n1[1]) - float(n2[1])) ** 2) ** 0.5
    resu = [d, n1, n2]
    return resu


def fb(C, ref):
    z = len(C)
    for a in range(z):
        b = a + 1
        while b < z:
            if dis(C[a], C[b])[0] < ref[0]:
                ref = dis(C[a], C[b])
            b += 1
    minima = ref
    return minima


def dyc(array):
    n = len(array)
    if n > 2:
        r = n // 2
        L = array[:r]
        M = array[r:]
        resuL = dyc(L)
        resuM = dyc(M)
        if resuL[0] < resuM[0]:
            Rta = resuL
        else:
            Rta = resuM
        Rta = fb(lista(L, M), Rta)
    elif n == 2:
        Rta = dis(array[0], array[1])
    else:
        Rta = [1000000000.0, array]
    return Rta


start_time = time.time()
with open('./untitled/coordenadas totales.csv', 'r') as file:
    x = [x for x in csv.reader(file)]
quicksort(x, 0, len(x) - 1)
rta = dyc(x)
print(rta)
print(time.time() - start_time)
