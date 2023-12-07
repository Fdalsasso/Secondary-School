class numero_complejo():
    R = 0
    j = 0
    m = 0
    p = 0

    def __init__(self, R, j):
        self.R = R
        self.j = j
        self.m = #calculo de modulo
        self.p = #calculo de fase

    def suma(self, x):
        pass

    def resta(self, x):
        pass

    def multiplicacion(self, x):
        pass

    def div(self, x):
        pass

    def printc(self):
        print("(", self.R, ",", self.j, ")")

    def printp(self):
        print(self.m, "(", self.p, ")")


class Objeto():
    color = "verde"
    tamanio = "grande"
    aspecto = "feo"

    def flotar(self):
        print (12)

et = Objeto()
print (et.color)
print (et.tamanio)
print (et.aspecto)
et.color = "rosa"
print (et.color)
et.flotar()
c = numero_complejo(1, 2)
print(c.R)
print(c.j)
print(c.printc())
print(c.printp())