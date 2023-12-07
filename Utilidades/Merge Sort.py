import time
import random

def mergeSort(array):
    print(array)
    global comparaciones
    if len(array) > 1:
        r = len(array)//2
        L = array[:r]
        M = array[r:]
        mergeSort(L)
        mergeSort(M)
        i = j = k = 0
        while i < len(L) and j < len(M):
            comparaciones += 1
            if L[i] < M[j]:
                array[k] = L[i]
                i += 1
            else:
                array[k] = M[j]
                j += 1
            k += 1
        while i < len(L):
            array[k] = L[i]
            i += 1
            k += 1
        while j < len(M):
            array[k] = M[j]
            j += 1
            k += 1
    print(array, "\n")

N = 9
for i in range(N):
    L = []
    for j in range(i):
        L.append(random.randrange(1, 101, 1))
comparaciones = 0

start_time = time.time()
mergeSort(L)

print("Lista ordenada con Merge Sort:")
print(L, "\n")

print("Tiempo: ", time.time()-start_time)
print("Comparaciones:", comparaciones)