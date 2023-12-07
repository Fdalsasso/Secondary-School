import time
import random
import matplotlib.pyplot as plt


def particion(Lista, izq, der):
    pivote = Lista[der]
    indice = izq
    for X in range(izq, der):
        if Lista[X] <= pivote:
            Lista[indice], Lista[X] = Lista[X], Lista[indice]
            indice += 1
    Lista[indice], Lista[der] = Lista[der], Lista[indice]
    return indice


def quicksort(ordenar, izq, der):
    if izq < der:
        pivote_indice = particion(ordenar, izq, der)
        quicksort(ordenar, izq, pivote_indice - 1)
        quicksort(ordenar, pivote_indice + 1, der)


def lista(Z, M):
    C = []
    V = len(Z) - 1
    while float(Z[V][0]) == float(Z[-1][0]):
        C.append(Z[V])
        if V == 0:
            break
        V -= 1
    V = 0
    while float(M[V][0]) == float(M[0][0]):
        C.append(M[V])
        V += 1
        if V == len(M):
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
        S = array[:r]
        M = array[r:]
        resuL = dyc(S)
        resuM = dyc(M)
        if resuL[0] < resuM[0]:
            Rta = resuL
        else:
            Rta = resuM
        Rta = fb(lista(S, M), Rta)
    elif n == 2:
        Rta = dis(array[0], array[1])
    else:
        Rta = [1000000000.0, array]
    return Rta


N = 1000
t_recursivo = []
t_fuerza_bruta = []
for i in range(2, N, 1):
    L = []
    for j in range(i):
        c = [random.randrange(1, 101, 1), random.randrange(1, 101, 1)]
        L.append(c)
    quicksort(L, 0, len(L)-1)
    start_time = time.time()
    dyc(L)
    t_recursivo.append(time.time() - start_time)
    start_time = time.time()
    fb(L, [999999.9, "hola", "menem"])
    t_fuerza_bruta.append(time.time() - start_time)
plt.title("Algoritmo Recursivo vs Fuerza Bruta")
plt.ylabel("tiempo [s]")
plt.xlabel("Cantidad de Listas")
plt.plot(t_recursivo, color='blue', label="Recursivo", linewidth=1)
plt.plot(t_fuerza_bruta, label="Fuerza_Bruta", color='red', linewidth=1)
plt.xlim(2, 1000)
plt.legend()
plt.show()
