import random
import time
import matplotlib.pyplot as plt

# 1) definimos función bubble sort
def bubble_sort(L):
    n = len(L)
    for i in range(n - 1):

        for j in range(n - i - 1):

            if L[j] > L[j + 1]:
                aux = L[j]
                L[j] = L[j + 1]
                L[j + 1] = aux

    return L

# 2) generamos N arreglos de tamaños cada vez mas grandes y los
#    ordenamos contabilizando el tiempo que tarda el algoritmo.

N = 2000
L_tiempos = []
for i in range(N):

    L = []
    for j in range(i):
        L.append(random.randrange(1, 101, 1))

    start_time = time.time()

    bubble_sort(L)

    L_tiempos.append(time.time() - start_time)


print(L)
# 3) Ploteamos los tiempos de ejecución.
plt.plot(L_tiempos)
plt.show()