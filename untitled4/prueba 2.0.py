import math
import csv


def read_cvs():
    with open('coordenadas totales.csv', 'r') as file:
        data = [data for data in csv.reader(file)]

    return data


def orden(array):
    if len(array) > 1:
        r = len(array) // 2
        G = array[:r]
        B = array[r:]

        orden(G)
        orden(B)

        a = b = c = 0

        while a < len(G) and b < len(B):
            if G[a] < B[b]:
                array[c] = G[a]
                a += 1
            else:
                array[c] = B[b]
                b += 1
            c += 1

        while a < len(G):
            array[c] = G[a]
            a += 1
            c += 1

        while b < len(B):
            array[c] = B[b]
            b += 1
            c += 1
    return array


def lfd(P1, P2):
    X1 = float(P1[0])
    Y1 = float(P1[1])
    X2 = float(P2[0])
    Y2 = float(P2[1])
    dis = math.sqrt(((X1 - X2) ** 2) + ((Y1 - Y2) ** 2))
    var = [P1, P2, dis]
    return var


def fbbs(C, ref):
    z = len(C)
    for a in range(z):
        b = a + 1
        while b < z:
            if lfd(C[a], C[b])[2] < ref[2]:
                ref = lfd(C[a], C[b])
            b += 1
    minima = ref
    return minima


def rec(lis_co):
    if len(lis_co) > 2:
        r = len(lis_co) // 2
        G = lis_co[:r]
        B = lis_co[r:]

        res_1 = rec(G)
        res_2 = rec(B)

        if res_1[2] > res_2[2]:
            rta_12 = res_2
        else:
            rta_12 = res_1

        F = OP(G, B)
        rta_12 = fbbs(F, rta_12)


    elif len(lis_co) == 2:
        rta_12 = lfd(lis_co[0], lis_co[1])

    else:
        rta_12 = ["hola", "chau", 99999999999.9]

    return rta_12


def OP(L1, L2):
    x_L1 = L1[-1][0]
    C = []

    cont = len(L1) - 1
    while (L1[cont][0] == x_L1):
        C.append(L1[cont])
        if (cont == 0):
            break
        cont -= 1

    x_L2 = L2[0][0]
    cont2 = len(L2) - 1
    cont3 = 0
    while (L2[cont3][0] == x_L2):
        C.append(L2[cont3])
        if (cont3 == cont2):
            break
        cont3 += 1

    return C


lis = read_cvs()
lis1 = orden(lis)
resF = rec(lis1)
print(resF)