import time
import random

def selectionSort(lista):
    global comparaciones
    n = len(lista)

    for i in range(n - 1):
        menor = i
        comparaciones += 1

        for j in range(i + 1, n):
            if lista[j] < lista[menor]:
                menor = j

        lista[i], lista[menor] = lista[menor], lista[i]


N = 2000
for i in range(N):
    L = []
    for j in range(i):
        L.append(random.randrange(1, 101, 1))
comparaciones = 0

start_time = time.time()
selectionSort(L)

print("Lista ordenada con Selection Sort:")
print(L, "\n")

print("Tiempo: ", time.time()-start_time)
print("Comparaciones:", comparaciones)