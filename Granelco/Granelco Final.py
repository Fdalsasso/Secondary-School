from datetime import date


class Sistema:
    ARG_10 = 10
    ARG_20 = 10
    ARG_50 = 10
    ARG_100 = 10
    ARG_200 = 10
    ARG_500 = 10
    ARG_1000 = 10
    USD_1 = 10
    USD_2 = 10
    USD_5 = 10
    USD_10 = 10
    USD_20 = 10
    USD_50 = 10
    USD_100 = 0

    def __init__(self, ARG_10, ARG_20, ARG_50, ARG_100, ARG_200, ARG_500, ARG_1000, USD_1, USD_2, USD_5, USD_10, USD_20, USD_50,
                 USD_100):
        self.ARG_10 = ARG_10 + 10
        self.ARG_20 = ARG_20 + 10
        self.ARG_50 = ARG_50 + 10
        self.ARG_100 = ARG_100 + 10
        self.ARG_200 = ARG_200 + 10
        self.ARG_500 = ARG_500 + 10
        self.ARG_1000 = ARG_1000 + 10
        self.USD_1 = USD_1 + 10
        self.USD_2 = USD_2 + 10
        self.USD_5 = USD_5 + 10
        self.USD_10 = USD_10 + 10
        self.USD_20 = USD_20 + 10
        self.USD_50 = USD_50 + 10
        self.USD_100 = USD_100 + 10


    def ingreso_ARG(self, x):
        i = x // 1000
        x = x % 1000
        self.ARG_1000 += i
        i = x // 500
        x = x % 500
        self.ARG_500 += i
        i = x // 200
        x = x % 200
        self.ARG_200 += i
        i = x // 100
        x = x % 100
        self.ARG_100 += i
        i = x // 50
        x = x % 50
        self.ARG_50 += i
        i = x // 20
        x = x % 20
        self.ARG_20 += i
        i = x // 10
        self.ARG_10 += i


    def ingreso_USD(self, x):
        i = x // 100
        x = x % 100
        self.USD_100 += i
        i = x // 50
        x = x % 50
        self.USD_50 += i
        i = x // 20
        x = x % 20
        self.USD_20 += i
        i = x // 10
        x = x % 10
        self.USD_10 += i
        i = x // 5
        x = x % 5
        self.USD_5 += i
        i = x // 2
        x = x % 2
        self.USD_2 += i
        i = x // 1
        self.USD_1 += i


    def egreso_ARG(self, x):
        t = x
        i = x // 1000
        x = x % 1000
        self.ARG_1000 -= i
        i = x // 500
        x = x % 500
        self.ARG_500 -= i
        i = x // 200
        x = x % 200
        self.ARG_200 -= i
        i = x // 100
        x = x % 100
        self.ARG_100 -= i
        i = x // 50
        x = x % 50
        self.ARG_50 -= i
        i = x // 20
        x = x % 20
        self.ARG_20 -= i
        i = x // 10
        self.ARG_10 -= i
        if self.ARG_10 < 0 or self.ARG_20 < 0 or self.ARG_50 < 0 or self.ARG_100 < 0 or self.ARG_200 < 0 or self.ARG_500 < 0 or self.ARG_1000 < 0:
            self.ingreso_ARG(t)
            return 1
        else:
            return 0


    def egreso_USD(self, x):
        t = x
        i = x // 100
        x = x % 100
        self.USD_100 -= i
        i = x // 50
        x = x % 50
        self.USD_50 -= i
        i = x // 20
        x = x % 20
        self.USD_20 -= i
        i = x // 10
        x = x % 10
        self.USD_10 -= i
        i = x // 5
        x = x % 5
        self.USD_5 -= i
        i = x // 2
        x = x % 2
        self.USD_2 -= i
        i = x // 1
        self.USD_1 -= i
        if self.USD_1 < 0 or self.USD_2 < 0 or self.USD_5 < 0 or self.USD_10 < 0 or self.USD_20 < 0 or self.USD_50 < 0 or self.USD_100 < 0:
            self.ingreso_ARG(t)
            return 1
        else:
            return 0


class mov:
    m1 = ""
    m2 = ""
    m3 = ""
    m4 = ""
    m5 = ""


    def __init__(self, m1, m2, m3, m4, m5):
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3
        self.m4 = m4
        self.m5 = m5


class Tarjeta:
    numero = ""
    vencimiento = ""
    codigo = ""
    estado = ""


    def __init__(self, numero, vencimiento, codigo, estado):
        self.numero = numero
        self.vencimiento = vencimiento
        self.codigo = codigo
        self.estado = estado


class cuenta:
    pin = ""
    ARG = ""
    USD = ""
    movimientos = mov("", "", "", "", "")


    def __init__(self, pin, ARG, USD, movimientos):
        self.pin = pin
        self.ARG = ARG
        self.USD = USD
        self.movimientos = movimientos


class empresa:
    nombre = ""
    CUIT = ""
    fecha_de_inicio = ""
    rubro = ""
    tarjeta = Tarjeta("", "", "", "")
    usuario = cuenta("", "", "", "")


    def __init__(self, nombre, CUIT, fecha, rubro, tarjeta, usuario):
        self.nombre = nombre
        self.CUIT = CUIT
        self.fecha_de_inicio = fecha
        self.rubro = rubro
        self.tarjeta = tarjeta
        self.usuario = usuario


    def saldo_ARG(self):
        print("\nSu saldo en ARG es $", self.usuario.ARG)


    def saldo_USD(self):
        print("\nSu saldo en USD es $", self.usuario.USD)


    def movimientos(self):
        print("\nSus ultimos movimientos son:\n", self.usuario.movimientos.m1, self.usuario.movimientos.m2,
              self.usuario.movimientos.m3, self.usuario.movimientos.m4, self.usuario.movimientos.m5)


    def deposito_ARG(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingreso_ARG(d)
        self.usuario.ARG = int(self.usuario.ARG) + int(d)
        self.usuario.ARG = str(self.usuario.ARG) + "\n"
        self.usuario.movimientos.m1 = self.usuario.movimientos.m2
        self.usuario.movimientos.m2 = self.usuario.movimientos.m3
        self.usuario.movimientos.m3 = self.usuario.movimientos.m4
        self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
        self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Deposito de ARG        " + str(d)
        print("\nTransaccion realizada")


    def deposito_USD(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingreso_USD(d)
        self.usuario.USD = int(self.usuario.USD) + int(d)
        self.usuario.USD = str(self.usuario.USD) + "\n"
        self.usuario.movimientos.m1 = self.usuario.movimientos.m2
        self.usuario.movimientos.m2 = self.usuario.movimientos.m3
        self.usuario.movimientos.m3 = self.usuario.movimientos.m4
        self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
        self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Deposito de USD        " + str(d)
        print("\nTransaccion realizada")


    def extraccion_ARG(self):
        d = int(input("\nIngrese el monto a extraer: "))
        if int(self.usuario.ARG) - d > 0:
            if sistema.egreso_ARG(d) == 0:
                self.usuario.ARG = int(self.usuario.ARG) - int(d)
                self.usuario.ARG = str(self.usuario.ARG) + "\n"
                self.usuario.movimientos.m1 = self.usuario.movimientos.m2
                self.usuario.movimientos.m2 = self.usuario.movimientos.m3
                self.usuario.movimientos.m3 = self.usuario.movimientos.m4
                self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
                self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Egreso de ARG          -" + str(d)
                print("\nTransaccion realizada")
            else:
                print("\nNo poseemos los billetes suficientes, intentelo otro dia")
        else:
            print("\nUsted no posee los fondos suficientes")


    def extraccion_USD(self):
        d = int(input("\nIngrese el monto a extraer: "))
        if int(self.usuario.USD) - d > 0:
            if sistema.egreso_USD(d) == 0:
                self.usuario.USD = int(self.usuario.USD) - int(d)
                self.usuario.USD = str(self.usuario.USD) + "\n"
                self.usuario.movimientos.m1 = self.usuario.movimientos.m2
                self.usuario.movimientos.m2 = self.usuario.movimientos.m3
                self.usuario.movimientos.m3 = self.usuario.movimientos.m4
                self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
                self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Egreso de USD          -" + str(d)
                print("\nTransaccion realizada")
            else:
                print("\nNo poseemos los billetes suficientes, intentelo otro dia")
        else:
            print("\nUsted no posee los fondos suficientes")


    def cambio_de_pin(self):
        self.usuario.pin = input("\nIngrese su nuevo pin:\n") + "\n"


    def guardar(self):
        f.seek(0)
        g = ("j\n", str(self.nombre), str(self.CUIT), str(self.fecha_de_inicio), str(self.rubro), str(self.tarjeta.numero),
             str(self.tarjeta.vencimiento), str(self.tarjeta.codigo), str(self.tarjeta.estado), str(self.usuario.pin),
             str(self.usuario.ARG), str(self.usuario.USD), str(self.usuario.movimientos.m1), str(self.usuario.movimientos.m2),
             str(self.usuario.movimientos.m3), str(self.usuario.movimientos.m4), str(self.usuario.movimientos.m5))
        f.writelines(g)
        if c != 5:
            d = open(str(int(self.tarjeta.numero)), 'w+')
            d.writelines(g)
        else:
            d = open(str(int(self.CUIT)), 'w+')
            d.writelines(g)


    def datos(self):
        print(self.nombre, self.CUIT, self.fecha_de_inicio, self.rubro)


class persona:
    nombre = ""
    DNI = ""
    nacimiento = ""
    profesion = ""
    genero = ""
    tarjeta = Tarjeta("", "", "", "")
    usuario = cuenta("", "", "", "")


    def __init__(self, nombre, DNI, nacimiento, profecion, genero, tarjeta, usuario):
        self.nombre = nombre
        self.DNI = DNI
        self.nacimiento = nacimiento
        self.profesion = profecion
        self.genero = genero
        self.tarjeta = tarjeta
        self.usuario = usuario


    def saldo_ARG(self):
        print("\nSu saldo en ARG es $", self.usuario.ARG)


    def saldo_USD(self):
        print("\nSu saldo en USD es $", self.usuario.USD)


    def movimientos(self):
        print("\nSus ultimos movimientos son:\n", self.usuario.movimientos.m1, self.usuario.movimientos.m2,
              self.usuario.movimientos.m3, self.usuario.movimientos.m4, self.usuario.movimientos.m5)


    def deposito_ARG(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingreso_ARG(d)
        self.usuario.ARG = int(self.usuario.ARG) + int(d)
        self.usuario.ARG = str(self.usuario.ARG) + "\n"
        self.usuario.movimientos.m1 = self.usuario.movimientos.m2
        self.usuario.movimientos.m2 = self.usuario.movimientos.m3
        self.usuario.movimientos.m3 = self.usuario.movimientos.m4
        self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
        self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Deposito de ARG        " + str(d)
        print("\nTransaccion realizada")


    def deposito_USD(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingreso_USD(d)
        self.usuario.USD = int(self.usuario.USD) + int(d)
        self.usuario.USD = str(self.usuario.USD) + "\n"
        self.usuario.movimientos.m1 = self.usuario.movimientos.m2
        self.usuario.movimientos.m2 = self.usuario.movimientos.m3
        self.usuario.movimientos.m3 = self.usuario.movimientos.m4
        self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
        self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Deposito de USD        " + str(d)
        print("\nTransaccion realizada")


    def extraccion_ARG(self):
        d = int(input("\nIngrese el monto a extraer: "))
        if int(self.usuario.ARG) - d > 0:
            if sistema.egreso_ARG(d) == 0:
                self.usuario.ARG = int(self.usuario.ARG) - int(d)
                self.usuario.ARG = str(self.usuario.ARG) + "\n"
                self.usuario.movimientos.m1 = self.usuario.movimientos.m2
                self.usuario.movimientos.m2 = self.usuario.movimientos.m3
                self.usuario.movimientos.m3 = self.usuario.movimientos.m4
                self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
                self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Egreso de ARG          -" + str(d)
                print("\nTransaccion realizada")
            else:
                print("\nNo poseemos los billetes suficientes, intentelo otro dia")
        else:
            print("\nUsted no posee los fondos suficientes")


    def extraccion_USD(self):
        d = int(input("\nIngrese el monto a extraer: "))
        if int(self.usuario.USD) - d > 0:
            if sistema.egreso_USD(d) == 0:
                self.usuario.USD = int(self.usuario.USD) - int(d)
                self.usuario.USD = str(self.usuario.USD) + "\n"
                self.usuario.movimientos.m1 = self.usuario.movimientos.m2
                self.usuario.movimientos.m2 = self.usuario.movimientos.m3
                self.usuario.movimientos.m3 = self.usuario.movimientos.m4
                self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
                self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Egreso de USD          -" + str(d)
                print("\nTransaccion realizada")
            else:
                print("\nNo poseemos los billetes suficientes, intentelo otro dia")
        else:
            print("\nUsted no posee los fondos suficientes")


    def cambio_de_pin(self):
        self.usuario.pin = input("\nIngrese su nuevo pin:\n") + "\n"


    def guardar(self):
        f.seek(0)
        g = ("p\n", str(self.nombre), str(self.DNI), str(self.nacimiento), str(self.profesion), str(self.genero),
             str(self.tarjeta.numero), str(self.tarjeta.vencimiento), str(self.tarjeta.codigo), str(self.tarjeta.estado),
             str(self.usuario.pin), str(self.usuario.ARG), str(self.usuario.USD), str(self.usuario.movimientos.m1),
             str(self.usuario.movimientos.m2), str(self.usuario.movimientos.m3), str(self.usuario.movimientos.m4),
             str(self.usuario.movimientos.m5))
        f.writelines(g)
        if c != 5:
            d = open(str(int(self.tarjeta.numero)), 'w+')
            d.writelines(g)
        else:
            d = open(str(int(self.DNI)), 'w+')
            d.writelines(g)


    def datos(self):
        print(self.nombre, self.DNI, self.nacimiento, self.profesion, self.genero)


def sobreescribir():
    f.seek(0)
    for z in x:
        f.write(z)


def menu():
    while 1:
        s = int(input("\nQue operacion desea realizar?\n1-verificar saldo\n2-revisar ultimos movimientos\n3-realizar un deposito\n"
            "4-realizar una extraccion\n5-cambiar de pin\n6-ver datos personales\n7-salir\n\n"))
        if s == 1:
            s = int(input("\nQuiere ver su saldo en:\n1-ARG\n2-USD\n\n"))
            if s == 1:
                o.saldo_ARG()
            elif s == 2:
                o.saldo_USD()
            else:
                print(s)
                print("\nOpercacion no valida")
        elif s == 2:
            o.movimientos()
        elif s == 3:
            s = int(input("\nQuiere quiere realizar un deposito en:\n1-ARG\n2-USD\n\n"))
            if s == 1:
                o.deposito_ARG()
            elif s == 2:
                o.deposito_USD()
            else:
                print("\nOpercacion no valida")
        elif s == 4:
            s = int(input("\nQuiere quiere realizar una extraccion en:\n1-ARG\n2-USD\n\n"))
            if s == 1:
                o.extraccion_ARG()
            elif s == 2:
                o.extraccion_USD()
            else:
                print("\nOpercacion no valida")
        elif s == 5:
            o.cambio_de_pin()
        elif s == 6:
            o.datos()
        elif s == 7:
            print("\nHasta la proxima", o.nombre)
            o.guardar()
            break
        else:
            print("\nOperacion no valida")


def admin():
    while 1:
        s = int(input("\nQue operacion desea realizar?\n1-crear un usuario\n2-desbloquear usuarios\n3-ingresar billetes\n"
                      "4-realizar operaciones como un usuario normal\n5-salir\n\n"))
        if s == 1:
            if input("\nIngrese j si se trata de una persona juridica, sino continue ") == "j":
                x = input("\nIngrese el CUIT: ")
                t = input("Ingrese el numero de tarjeta: ")
                n = open(x, "w+")
                N = open(t, "w+")
                p = ("j", "\n", input("Nombre de la empresa: "), "\n", x, "\n", input("Fecha de Inicio: "), "\n",
                     input("Rubro: "), "\n", t, "\n", input("Fecha de Vencimiento de la tarjeta: "), "\n",
                     input("Codigo de seguridad: "), "\n", "activo", "\n", input("Pin: "), "\n",
                     input("Saldo en ARG: "), "\n",
                     input("Saldo en USD: "), "\n", "-", "\n", "-", "\n", "-", "\n", "-", "\n", "-")
                n.writelines(p)
                N.writelines(p)
                n.close()
                N.close()
            else:
                x = input("\ningrese el DNI: ")
                t = input("ingrese el numero de tarjeta: ")
                n = open(x, "w+")
                N = open(t, "w+")
                p = ("p", "\n", input("Nombre: "), "\n", x, "\n", input("Fecha de Nacimiento: "), "\n", input("Profesion: "), "\n",
                     input("Genero: "), "\n", t, "\n", input("Fecha de Vencimiento de la tarjeta: "), "\n",
                     input("Codigo de seguridad: "), "\n", "activo", "\n", input("Pin: "), "\n", input("Saldo en ARG: "), "\n",
                     input("Saldo en USD: "), "\n", "-", "\n", "-", "\n", "-", "\n", "-", "\n", "-")
                n.writelines(p)
                N.writelines(p)
                n.close()
                N.close()
        elif s == 2:
            log = input("\nIngrese un numero CUIT/DNI o tarjeta: ")
            try:
                f = open(log, 'r+')
                x = [x for x in f]
                if x[0] == "j\n":
                    if x[8] == "activo\n":
                        print("\nEl usuario no esta bloqueado")
                    else:
                        x[8] = "activo\n"
                        f.seek(0)
                        for z in x:
                            f.write(z)
                        f.close()
                        print("\nUsuario desbloqueado")
                else:
                    if x[9] == "activo\n":
                        print("\nEl usuario no esta bloqueado")
                    else:
                        x[9] = "activo\n"
                        f.seek(0)
                        for z in x:
                            f.write(z)
                        f.close()
                        print("\nUsuario desbloqueado")
            except:
                print("\nNumero invalido")
        elif s == 3:
            S = int(input("\nIngresar:\n1=billetes argentinos\n2-billetes estadounidenses\n\n"))
            if S == 1:
                m = int(input("\nEscriba monto a ingresar: "))
                sistema.ingreso_ARG(m)
            elif S == 2:
                m = int(input("\nEscriba monto a ingresar: "))
                sistema.ingreso_USD(m)
            else:
                print("\nOperacion no valida")
        elif s == 4:
            menu()
        elif s == 5:
            print("\n\nHasta pronto administrador")
            break


def persona_real():
    p = persona(x[1], x[2], x[3], x[4], x[5], Tarjeta(x[6], x[7], x[8], x[9]), cuenta(x[10], x[11], x[12], mov(x[13], x[14], x[15],
                x[16], x[17])))
    return p


def persona_juridica():
    e = empresa(x[1], x[2], x[3], x[4], Tarjeta(x[5], x[6], x[7], x[8]), cuenta(x[9], x[10], x[11], mov(x[12], x[13],  x[14],
                x[15], x[16])))
    return e


def hola():
    input("\nBienvenido\n\nPulse cualquier tecla para continuar")


s = open("Sistema", 'r+')
system = [int(system) for system in s]
sistema = Sistema(system[0], system[1], system[2], system[3], system[4], system[5], system[6], system[7], system[8], system[9],
                  system[10], system[11], system[12], system[13])
fecha = date.today()
while 1:
    hola()
    log = input("\nIngrese su numero de CUIT/DNI o tarjeta: ")
    try:
        f = open(log, 'r+')
        x = [x for x in f]
        if x[0] == "j\n":
            c = 0
            while c < 3:
                if x[8] == "activo\n":
                    if int(x[9]) == int(input("\nIngrese su pin: ")):
                        if int(log) == int(x[2]):
                            c = 7
                        else:
                            c = 5
                        o = persona_juridica()
                    else:
                        c += 1
                        print("\nPin incorrecto, intentos fallidos = ", c)
                else:
                    c = 4
                    log = 0
            if c == 4:
                print("\nSu cuenta esta bloqueada")
                log = 0
            elif c == 3:
                print("\nSu cuenta sera bloqueada hasta que verifique su identidad")
                x[8] = "bloqueado\n"
                o = persona_juridica()
                o.guardar()
                log = 0
            else:
                print("\nAcceso concedido\n\nBienvenid@ ", x[1])
        else:
            c = 0
            while c < 3:
                if x[9] == "activo\n":
                    if int(x[10]) == int(input("\nIngrese su pin: ")):
                        if log == "43628431":
                            c = 666
                        else:
                            if int(log) == int(x[2]):
                                c = 7
                            else:
                                c = 5
                        o = persona_real()
                    else:
                        c += 1
                        print("\nPin incorrecto, intentos fallidos = ", c)
                else:
                    c = 4
            if c == 4:
                print("\nSu cuenta esta bloqueada")
                log = 0
            elif c == 3:
                print("\nSu cuenta sera bloqueada hasta que verifique su identidad")
                x[9] = "bloqueado\n"
                o = persona_real()
                o.guardar()
                log = 0
            else :
                print("\nAcceso concedido\n\nBienvenid@ ", x[1])
        if log != 0:
            if c == 666:
                admin()
            else:
                menu()
        f.close()
    except:
        print("\nNumero invalido")
    s.seek(0)
    l = (str(sistema.ARG_10), "\n", str(sistema.ARG_20), "\n", str(sistema.ARG_50), "\n", str(sistema.ARG_100), "\n", str(sistema.ARG_200), "\n",
         str(sistema.ARG_500), "\n", str(sistema.ARG_1000), "\n", str(sistema.USD_1), "\n", str(sistema.USD_2), "\n", str(sistema.USD_5), "\n",
         str(sistema.USD_10), "\n", str(sistema.USD_20), "\n", str(sistema.USD_50), "\n", str(sistema.USD_100))
    s.writelines(l)
