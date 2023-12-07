import csv
import math
import time

def mergeSort (array):
    if len(array) > 1:
        r = len(array) // 2
        L = array[:r]
        M = array[r:]

        mergeSort(L)
        mergeSort(M)

        i = j = k = 0

        while i < len(L) and j < len(M):
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

    return array

def dyc (array):
    n = len(array)
    if n > 2:
        r = n // 2
        L1 = array[:r]
        L2 = array[r:]

        res_1 = dyc(L1)
        res_2 = dyc(L2)
        if res_1[0] > res_2[0]:
            res_12 = res_2
        else:
            res_12 = res_1
        coordenada_vertical = recta(L1,L2)
        res_12 = fuerza_bruta(coordenada_vertical,res_12)
    elif n == 2:
        res_12 = distancia(array[0],array[1])
    else:
        res_12 = [999999999.9, array]

    return res_12

def recta (L1,L2):
    mayor = L1[-1][0]
    recta = []
    anterior = len(L1) - 1
    menor = L2[0][0]
    posterior = 0
    max = len(L2) - 1

    while L1[anterior][0] == mayor:
        recta.append(L1[anterior])
        if anterior > 0:
            anterior -= 1
        else:
            mayor = -1
    while L2[posterior][0] == menor:
        recta.append(L2[posterior])
        if posterior < max:
            posterior += 1
        else:
            menor = -1

    return recta

def fuerza_bruta (recta,res_12):
    l = len(recta)
    for a in range(0, l - 1):
        for b in range(a + 1, l):
            rta = distancia(recta[a], recta[b])
            if rta[0] < res_12[0]:
                res_12 = rta

    return res_12

def distancia (a,b):
    r = []
    d = math.sqrt((a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2)
    r.append(d)
    r.append(a)
    r.append(b)
    return r

with open("coordenadas totales.csv") as csvfile:
    data = [(float(x), float(y)) for x,y in csv.reader(csvfile,)]

ordenada = mergeSort(data)
r = dyc(ordenada)
print("\nMenor distancia:", r[0],"\nCoordenada 1:", r[1],"\nCoordenada 2:", r[2])
