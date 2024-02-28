import time
import random

def bubbleSort(lista):
    global comparaciones
    n = len(lista)

    for i in range(1, n):
        for j in range(n-i):
            comparaciones += 1

            if lista[j] > lista[j+1]:
                lista[j], lista[j+1] = lista[j+1], lista[j]

N = 2000
for i in range(N):
    L = []
    for j in range(i):
        L.append(random.randrange(1, 101, 1))
comparaciones = 0

start_time = time.time()
bubbleSort(L)

print("Lista ordenada Bubble Sort:")
print(L, "\n")

print("Tiempo: ", time.time()-start_time)
print("Comparaciones:", comparaciones)