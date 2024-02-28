import time
import csv


def dis(n1, n2):
    Rta = []
    d = ((float(n1[0]) - float(n2[0])) ** 2 + (float(n1[1]) - float(n2[1])) ** 2) ** 0.5
    Rta.append(d)
    Rta.append(n1)
    Rta.append(n2)
    return Rta


start_time = time.time()
with open('coordenadas1.csv', 'r') as file:
    x = [x for x in csv.reader(file)]
z = len(x)
rta = dis(x[0], x[1])
for a in range(z):
    b = a + 1
    while b < z:
        if dis(x[a], x[b])[0] < rta[0]:
            rta = dis(x[a], x[b])
        b += 1
print(rta)
print(time.time() - start_time)
