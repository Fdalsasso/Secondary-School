import time
import random

def shellSort(lista):
    global comparaciones
    n = len(lista)
    gap = n // 2

    while gap > 0:
        for i in range(gap, n):
            val = lista[i]
            j = i
            comparaciones += 1

            while j >= gap and lista[j-gap] > val:
                lista[j] = lista[j-gap]
                j -= gap

            lista[j] = val

        gap = gap // 2


N = 2000
for i in range(N):
    L = []
    for j in range(i):
        L.append(random.randrange(1, 101, 1))
comparaciones = 0

start_time = time.time()
shellSort(L)

print("Lista ordenada con Shell Sort:")
print(L, "\n")

print("Tiempo:", time.time()-start_time)
print("Comparaciones:", comparaciones)