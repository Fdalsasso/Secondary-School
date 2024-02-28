import time
import random

def insertionSort(lista):
    n = len(lista)
    global comparaciones

    for i in range(1, n):
        val = lista[i]
        j = i

        while j > 0 and lista[j-1] > val:
            lista[j] = lista[j-1]
            j -= 1
            comparaciones += 1

        lista[j] = val


N = 2000
for i in range(N):
    L = []
    for j in range(i):
        L.append(random.randrange(1, 101, 1))
comparaciones = 0

start_time = time.time()
insertionSort(L)

print("Lista ordenada con Insertio Sort:")
print(L, "\n")

print("Tiempo: ", time.time()-start_time)
print("Comparaciones:", comparaciones)