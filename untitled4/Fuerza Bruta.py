import time
import random
import matplotlib.pyplot as plt


def dis(n1, n2):
    Rta = []
    d = ((float(n1[0]) - float(n2[0])) ** 2 + (float(n1[1]) - float(n2[1])) ** 2) ** 0.5
    Rta.append(d)
    Rta.append(n1)
    Rta.append(n2)
    return Rta


def fb(C):
    z = len(C)
    ref = dis(C[0], C[1])
    for a in range(z):
        b = a + 1
        while b < z:
            if dis(C[a], C[b])[0] < ref[0]:
                ref = dis(C[a], C[b])
            b += 1
    minima = ref
    return minima


N = 1000
L_tiempos = []
for i in range(2, N, 1):
    L = []
    for j in range(i):
        c = [random.randrange(1, 101, 1), random.randrange(1, 101, 1)]
        L.append(c)
    start_time = time.time()
    rta = fb(L)
    L_tiempos.append(time.time() - start_time)
plt.plot(L_tiempos)
plt.show()
