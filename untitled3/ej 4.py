import array as arr

alumnos = ["abad", "barbera", "barreiros", "borrajo", "carteri", "cepeda", "cigolloti", "dalsasso", "diaz", "esteve",
           "folino", "garcia", "gasser", "ghiorzo", "gonse", "haite", "jaralampidis", "odzomek", "olivera", "ostertag",
           "parolari", "pereira", "rodriguez", "saenz", "scheffer"]
edades = [18, 18, 18, 18, 18, 18, 18, 18, 17, 18, 18, 18, 18, 18, 18, 17, 18, 17, 18, 17, 18, 17, 18, 18, 18]
mes = ["enero", "agosto", "diciembre", "abril", "enero", "agosto", "septiembre", "noviembre", "mayo", "noviembre",
       "enero", "julio", "febrero", "septiembre", "enero", "mayo", "noviembre", "mayo", "abril", "junio", "octubre",
       "junio", "julio", "junio", "marzo"]
abc = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"]
deg = ["m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
cl = ["marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"]
mayores = arr.array("i")
a = []
b = []
c = 0
f = 0
g = 0


def chan(n):
    gg = False
    for m in range(10):
        if cl[m] == mes[n]:
            gg = True
    return gg


for i in range(len(edades)):
    if edades[i] >= 19:
        mayores.append(edades[i - 1])
        c += 1
print("la cantidad de alumnos mayores de edad son: ", c)

for v in range(len(edades)):
    for x in range(len(abc)):
        if alumnos[v][0] == abc[x]:
            a.insert(v, alumnos[v])
            f += edades[v]
            break
        elif alumnos[v][0] == deg[x]:
            b.insert(v, alumnos[v])
            g += edades[v]
            break
print("el promedio de la lista 1 es: ", f / len(a), "\nel promedio de la lista 2 es: ", g / len(b))

g = 0
f = 0
for z in range(len(mes)):
    if z < len(mes) - len(b):
        if chan(z) is True:
            g += 1
    else:
        if chan(z) is True:
            f += 1
print("en la lista 1 ", g, " alumnos cumplen en meses lectivos\nen la lista 2 ", f,
      " alumnos cumplen en meses lectivos")
