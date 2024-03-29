import time
import random

def particion(lista, izq, der):
    global comparaciones
    pivote = lista[der]
    indice = izq

    for i in range(izq, der):
        comparaciones += 1

        if lista[i] <= pivote:
            lista[indice], lista[i] = lista[i], lista[indice]
            indice += 1

    lista[indice], lista[der] = lista[der], lista[indice]
    return indice


def quicksort(lista, izq, der):
    if izq < der:
        pivote_indice = particion(lista, izq, der)
        quicksort(lista, izq, pivote_indice - 1)
        quicksort(lista, pivote_indice + 1, der)


N = 2000
for i in range(N):
    L = []
    for j in range(i):
        L.append(random.randrange(1, 101, 1))
comparaciones = 0

start_time = time.time()
quicksort(L, 0, len(L) - 1)

print("Lista ordenada con Quick Sort:")
print(L, "\n")

print("Tiempo:" , time.time()-start_time)
print("Comparaciones:", comparaciones)