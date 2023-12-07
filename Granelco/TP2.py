from datetime import date

class deposito:
    # ==== Atributos ====
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
    USD_100 = 10

    # ==== Métodos ====
    def ingresoARS(self, x):
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

    def ingresoUSD(self, x):
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

    def egresoARS(self, x):
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
            self.ingresoARS(t)
            return 1
        else:
            return 0

    def egresoUSD(self, x):
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
            self.ingresoARS(t)
            return 1
        else:
            return 0

    def totalARS(self):
        totalARS = (self.ARG_10*10) + (self.ARG_20*20) + (self.ARG_50*50) + (self.ARG_100*100) + (self.ARG_200*200) + (self.ARG_500*500) + (self.ARG_1000*1000)
        return  totalARS

    def totalUSD(self):
        totalUSD = (self.USD_1 * 1) + (self.USD_2 * 2) + (self.USD_5 * 5) + (self.USD_10 * 10) + (self.USD_20 * 20) + (self.USD_50 * 50) + (self.USD_100 * 100)
        return  totalUSD

    # ==== Constructor ====
    def __init__(self, ARG_10, ARG_20, ARG_50, ARG_100, ARG_200, ARG_500, ARG_1000, USD_1, USD_2, USD_5, USD_10, USD_20, USD_50, USD_100):
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

class mov:
    # ==== Atributos ====
    m1 = ""
    m2 = ""
    m3 = ""
    m4 = ""
    m5 = ""

    # ==== Constructor ====
    def __init__(self, m1, m2, m3, m4, m5):
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3
        self.m4 = m4
        self.m5 = m5

class Tarjeta:
    # ==== Atributos ====
    numero = ""
    vencimiento = ""
    codigo = ""
    estado = ""

    # ==== Constructor ====
    def __init__(self, numero, vencimiento, codigo, estado):
        self.numero = numero
        self.vencimiento = vencimiento
        self.codigo = codigo
        self.estado = estado

class cuenta:
    # ==== Atributos ====
    pin = ""
    ARG = ""
    USD = ""
    movimientos = mov("", "", "", "", "")

    # ==== Constructor ====
    def __init__(self, pin, ARG, USD, movimientos):
        self.pin = pin
        self.ARG = ARG
        self.USD = USD
        self.movimientos = movimientos

class personaJuridica:
    # ==== Atributos ====
    razonSocial = ""
    CUIT = ""
    fdInicio = ""
    rubro = ""
    tarjeta = Tarjeta("", "", "", "")
    usuario = cuenta("", "", "", "")

    # ==== Métodos ====
    def saldo(self):
        print(" Saldo ARS:", self.usuario.ARG,"Saldo USD:", self.usuario.USD)

    def movimientos(self):
        print("\nSus ultimos movimientos son:\n", self.usuario.movimientos.m1, self.usuario.movimientos.m2,
              self.usuario.movimientos.m3, self.usuario.movimientos.m4, self.usuario.movimientos.m5)

    def deposito_ARG(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingresoARS(d)
        self.usuario.ARG = int(self.usuario.ARG) + int(d)
        self.usuario.ARG = str(self.usuario.ARG) + "\n"
        self.usuario.movimientos.m1 = self.usuario.movimientos.m2
        self.usuario.movimientos.m2 = self.usuario.movimientos.m3
        self.usuario.movimientos.m3 = self.usuario.movimientos.m4
        self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
        self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Deposito de ARS        " + str(d)
        print("\nTransaccion realizada")

    def deposito_USD(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingresoUSD(d)
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
            if sistema.egresoARS(d) == 0:
                self.usuario.ARG = int(self.usuario.ARG) - int(d)
                self.usuario.ARG = str(self.usuario.ARG) + "\n"
                self.usuario.movimientos.m1 = self.usuario.movimientos.m2
                self.usuario.movimientos.m2 = self.usuario.movimientos.m3
                self.usuario.movimientos.m3 = self.usuario.movimientos.m4
                self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
                self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Egreso de ARS          -" + str(d)
                print("\nTransaccion realizada")
            else:
                print("\nNo poseemos los billetes suficientes, intentelo otro dia")
        else:
            print("\nUsted no posee los fondos suficientes")

    def extraccion_USD(self):
        d = int(input("\nIngrese el monto a extraer: "))
        if int(self.usuario.USD) - d > 0:
            if sistema.egresoUSD(d) == 0:
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

    def cambiarPin(self):
        print("Su pin actual es:", self.usuario.pin)
        newPin = input("Indique su nuevo PIN de 4 digitos:\n")
        while (len(newPin) != 4):
            print("Cantidad de digitos incorrecta.Por favor intente de nuevo.")
            newPin = input("\nIndique su nuevo PIN de 4 digitos:\n")
        self.usuario.pin = newPin + '\n'
        print("PIN cambiado exitosamente.\nNuevo PIN:", self.usuario.pin)

    def guardar(self):
        f.seek(0)
        g = ("j\n", str(self.razonSocial), str(self.CUIT), str(self.fdInicio), str(self.rubro), str(self.tarjeta.numero),
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

    # ==== Constructor ====
    def __init__(self, razonSocial, CUIT, fdInicio, rubro, tarjeta, usuario):
        self.razonSocial = razonSocial
        self.CUIT = CUIT
        self.fdInicio = fdInicio
        self.rubro = rubro
        self.tarjeta = tarjeta
        self.usuario = usuario

class personaFisica:
    # ==== Atributos ====
    nombre = ""
    DNI = ""
    nacimiento = ""
    profesion = ""
    genero = ""
    tarjeta = Tarjeta("", "", "", "")
    usuario = cuenta("", "", "", "")

    # ==== Métodos ====
    def saldo(self):
        print(" Saldo ARS:", self.usuario.ARG, "Saldo USD:", self.usuario.USD)

    def movimientos(self):
        print("\nSus ultimos movimientos son:\n", self.usuario.movimientos.m1, self.usuario.movimientos.m2,
              self.usuario.movimientos.m3, self.usuario.movimientos.m4, self.usuario.movimientos.m5)

    def deposito_ARG(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingresoARS(d)
        self.usuario.ARG = int(self.usuario.ARG) + int(d)
        self.usuario.ARG = str(self.usuario.ARG) + "\n"
        self.usuario.movimientos.m1 = self.usuario.movimientos.m2
        self.usuario.movimientos.m2 = self.usuario.movimientos.m3
        self.usuario.movimientos.m3 = self.usuario.movimientos.m4
        self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
        self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Deposito de ARS        " + str(d)
        print("\nTransaccion realizada")

    def deposito_USD(self):
        d = int(input("\nIngrese el monto a depositar: "))
        sistema.ingresoUSD(d)
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
            if sistema.egresoARS(d) == 0:
                self.usuario.ARG = int(self.usuario.ARG) - int(d)
                self.usuario.ARG = str(self.usuario.ARG) + "\n"
                self.usuario.movimientos.m1 = self.usuario.movimientos.m2
                self.usuario.movimientos.m2 = self.usuario.movimientos.m3
                self.usuario.movimientos.m3 = self.usuario.movimientos.m4
                self.usuario.movimientos.m4 = self.usuario.movimientos.m5 + "\n"
                self.usuario.movimientos.m5 = fecha.strftime("%d/%m/%Y") + "      Egreso de ARS          -" + str(d)
                print("\nTransaccion realizada")
            else:
                print("\nNo poseemos los billetes suficientes, intentelo otro dia")
        else:
            print("\nUsted no posee los fondos suficientes")

    def extraccion_USD(self):
        d = int(input("\nIngrese el monto a extraer: "))
        if int(self.usuario.USD) - d > 0:
            if sistema.egresoUSD(d) == 0:
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

    def cambiarPin(self):
        print("Su pin actual es:",self.usuario.pin)
        newPin = input("Indique su nuevo PIN de 4 digitos:\n")
        while (len(newPin) != 4):
            print("Cantidad de digitos incorrecta.Por favor intente de nuevo.")
            newPin = input("\nIndique su nuevo PIN de 4 digitos:\n")
        self.usuario.pin = newPin + '\n'
        print("PIN cambiado exitosamente.\nNuevo PIN:", self.usuario.pin)

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

    # ==== Constructor ====
    def __init__(self, nombre, DNI, nacimiento, profecion, genero, tarjeta, usuario):
        self.nombre = nombre
        self.DNI = DNI
        self.nacimiento = nacimiento
        self.profesion = profecion
        self.genero = genero
        self.tarjeta = tarjeta
        self.usuario = usuario

class administrador:
    # ==== Atributos ====
    usuarioAdmin = ''
    passwordAdmin = ''

    # ==== Métodos ====

    # ==== Constructor ====
    def __init__(self, usuarioAdmin, passwordAdmin):
        self.usuarioAdmin = usuarioAdmin
        self.passwordAdmin = passwordAdmin

    # Getters.
    def getUsuarioAdmin(self):
        return self.usuarioAdmin

    def getPasswordAdmin(self):
        return self.passwordAdmin

    # Setters
    def setUsuarioAdmin(self, unUsuarioAdmin):
        self.usuarioAdmin = unUsuarioAdmin

    def setPasswordAdmin(self, unaPasswordAdmin):
        self.passwordAdmin = unaPasswordAdmin


def acciones():
    accion = int(input("\n¿Que desea hacer?\nPresione 0 para consultar su saldo.\nPresione 1 para ver sus ultimos 5 movimientos.\nPresione 2 para depositar dinero.\nPresione 3 para extraer dinero.\nPresione 4 para cambiar su PIN.\nPresione 5 para cerrar sesion.\n"))
    if (accion == 0):
        print("\nEl saldo en sus distintas cuentas es:")
        o.saldo()
    elif (accion == 1):
        o.movimientos()
    elif (accion == 2):
        s = int(input("\nPresione 1 si quiere realizar un deposito en ARS\nPresione 2 si quiere realizar una extraccion en USD\n"))
        if (s == 1):
            o.deposito_ARG()
        elif (s == 2):
            o.deposito_USD()
        else:
            print("\nOperacion no valida")
    elif (accion == 3):
        s = int(input("\nPresione 1 si quiere realizar una extraccion en ARS.\nPresione 2 si quiere realizar una extraccion en USD\n"))
        if (s == 1):
            o.extraccion_ARG()
        elif (s == 2):
            o.extraccion_USD()
        else:
            print("\nOperacion no valida")
    elif (accion == 4):
        o.cambiarPin()
    elif (accion == 5):
        print("\nHasta la proxima", o.razonSocial)
        o.guardar()
        return
    else:
        print("\nOperacion no valida")
    acciones()

def pFisica():
    perFisica = personaFisica(x[1], x[2], x[3], x[4], x[5], Tarjeta(x[6], x[7], x[8], x[9]), cuenta(x[10], x[11], x[12], mov(x[13], x[14], x[15],
                x[16], x[17])))
    return perFisica

def pJuridica():
    perJuridica = personaJuridica(x[1], x[2], x[3], x[4], Tarjeta(x[5], x[6], x[7], x[8]), cuenta(x[9], x[10], x[11], mov(x[12], x[13],  x[14],
                x[15], x[16])))
    return perJuridica

def bienvenida():
    input("\nBienvenido al Banco Granelco\nPulse cualquier boton para continuar.\n")

def inicio():
    while 1:
        desicion = int(input("\nPresione 0 si desea iniciar sesion como administrador.\nPresione 1 si desesa iniciar sesion como usuario del Banco Granelco.\n"))
        if(desicion == 0):
            a = 0
            return a
        if(desicion == 1):
            a = 1
            return a
        print("Presiono un boton incorrecto.Por favor intente de nuevo")

def loginAdministrador(usuario):
    usu = input("\nPor favor ingrese su usuario:\n")
    if(usu == usuario):
        print("Usuario reconocido")
        recoPass(admin.getPasswordAdmin())
    else:
        print("Usuario incorrecto. Intente de nuevo.")
        loginAdministrador(admin.getUsuarioAdmin())

def recoPass(password):
    passw = input("\nPor favor ingrese su contraseña especial:\n")
    if(passw == password):
        print("Contaseña aceptada.\n\nBienvenido", admin.getUsuarioAdmin())
        accionesAdmin()
    else:
        print("Contraseña incorrecta. Por favor intente de nuevo.")
        recoPass(admin.getPasswordAdmin())

def accionesAdmin():
    action = int(input("\nQue desea hacer?\nPresione 0 si desea crear un usuario nuevo.\nPresione 1 si desea desbloquear a un usuario Granelco.\nPresione 2 si desea arquear la caja del Banco Granelco.\nPresione 3 si desea cerrar sesion.\n"))
    a = 0
    if(action == 0):
        if input("\nEs una persona juridica?\n") == "si":
            x = input("\nIngrese el CUIT: ")
            t = input("Ingrese el numero de tarjeta: ")
            n = open(x, "w+")
            N = open(t, "w+")
            p = ("j", "\n", input("Razon social: "), "\n", x, "\n", input("Fecha de Inicio: "), "\n", input("Rubro: "), "\n", t, "\n", input("Fecha de Vencimiento de la tarjeta: "), "\n", input("Codigo de seguridad: "), "\n", "activo", "\n", input("Pin: "), "\n",input("Saldo en ARS: "), "\n",input("Saldo en USD: "), "\n", "-", "\n", "-", "\n", "-", "\n", "-", "\n", "-")
            n.writelines(p)
            N.writelines(p)
            n.close()
            N.close()
        else:
            x = input("\ningrese el DNI: ")
            t = input("ingrese el numero de tarjeta: ")
            n = open(x, "w+")
            N = open(t, "w+")
            p = ("p", "\n", input("Nombre: "), "\n", x, "\n", input("Fecha de Nacimiento: "), "\n", input("Profesion: "), "\n",  input("Genero: "), "\n", t, "\n", input("Fecha de Vencimiento de la tarjeta: "), "\n",input("Codigo de seguridad: "), "\n", "activo", "\n", input("PIN: "), "\n", input("Saldo en ARS: "), "\n",input("Saldo en USD: "), "\n", "-", "\n", "-", "\n", "-", "\n", "-", "\n", "-")
            n.writelines(p)
            N.writelines(p)
            n.close()
            N.close()
        a = 1
    if(action == 1):
        log = input("\nIngrese un numero CUIT/DNI o tarjeta: ")
        try:
            f = open(log, 'r+')
            x = [x for x in f]
            if x[0] == "j\n":
                if x[8] == "activo\n":
                    print("\nEl usuario no esta bloqueado.")
                else:
                    x[8] = "activo\n"
                    f.seek(0)
                    for z in x:
                        f.write(z)
                    f.close()
                    print("\nUsuario desbloqueado.")
            else:
                if x[9] == "activo\n":
                    print("\nEl usuario no esta bloqueado.")
                else:
                    x[9] = "activo\n"
                    f.seek(0)
                    for z in x:
                        f.write(z)
                    f.close()
                    print("\nUsuario desbloqueado.")
        except:
            print("\nNumero invalido")
        a = 1
    if(action == 2):
        S = int(input("\nPresione 1 para ingresar ARS.\nPresione 2 para ingresar USD.\n"))
        if S == 1:
            m = int(input("\nEscriba el monto a ingresar: "))
            sistema.ingresoARS(m)
        elif S == 2:
            m = int(input("\nEscriba el monto a ingresar: "))
            sistema.ingresoUSD(m)
        else:
            print("\nOperacion no valida")
        stock = sistema.totalARS()
        stock1 = sistema.totalUSD()
        print(stock)
        print("El deposito en las distintas monedas es:\nARS:", stock,"\nUSD:", stock1)
        a = 1
    if(action == 3):
        a = 1
        print("\n", admin.getUsuarioAdmin(), "que tenga un buen dia.")
        return
    if(a == 0):
        print("Presiono un boton incorrecto. Por favor intente de nuevo.")
    accionesAdmin()


admin = administrador('ItachiGod', 'goku123')
s = open("Sistema", 'r+')
stock = [int(stock) for stock in s]
sistema = deposito(stock[0], stock[1], stock[2], stock[3], stock[4], stock[5], stock[6], stock[7], stock[8], stock[9], stock[10], stock[11], stock[12], stock[13])
fecha = date.today()
while 1:
    bienvenida()
    a = inicio()
    if (a == 0):
        loginAdministrador(admin.getUsuarioAdmin())
    if(a == 1):
        log = input("\nIngrese su numero de DNI/CUIT o tarjeta.\n")
        try:
            f = open(log, 'r+')
            x = [x for x in f]
            if x[0] == "j\n":
                c = 0
                while c < 3:
                    if x[8] == "activo\n":
                        if int(x[9]) == int(input("\nPor favor ingrese su PIN.\n")):
                            if int(log) == int(x[2]):
                                c = 7
                            else:
                                c = 5
                            o = pJuridica()
                        else:
                            c += 1
                            print("\nPIN incorrecto. Por favor intente de nuevo.")
                    else:
                        c = 4
                        log = 0
                if c == 4:
                    print("Su cuenta esta bloqueada. Contacte al administrador del banco para desbloquearla.")
                    log = 0
                elif c == 3:
                    print("\nSu cuenta sera bloqueada hasta que verifique su identidad.Contacte al administrador del banco para desbloquearla.")
                    x[8] = "bloqueado\n"
                    o = pJuridica()
                    o.guardar()
                    log = 0
                else:
                    print("Acceso concedido\n\nBienvenid@ ", x[1])
            else:
                c = 0
                while c < 3:
                    if x[9] == "activo\n":
                        if int(x[10]) == int(input("Por favor ingrese su PIN.\n")):
                            if int(log) == int(x[2]):
                                c = 7
                            else:
                                c = 5
                            o = pFisica()
                        else:
                            c += 1
                            print("PIN incorrecto. Por favor intente de nuevo.")
                    else:
                        c = 4
                if c == 4:
                    print("Su cuenta esta bloqueada. Contacte al administrador del banco para desbloquearla.")
                    log = 0
                elif c == 3:
                    print("Su cuenta sera bloqueada hasta que verifique su identidad.Contacte al administrador del banco para desbloquearla.")
                    x[9] = "bloqueado\n"
                    o = pFisica()
                    o.guardar()
                    log = 0
                else :
                    print("Acceso concedido\n\nBienvenid@ ", x[1])
            if log != 0:
                acciones()
            f.close()
        except:
            print("Numero no reconocido.")
    s.seek(0)
    l = (str(sistema.ARG_10), "\n", str(sistema.ARG_20), "\n", str(sistema.ARG_50), "\n", str(sistema.ARG_100), "\n", str(sistema.ARG_200), "\n",
         str(sistema.ARG_500), "\n", str(sistema.ARG_1000), "\n", str(sistema.USD_1), "\n", str(sistema.USD_2), "\n", str(sistema.USD_5), "\n",
         str(sistema.USD_10), "\n", str(sistema.USD_20), "\n", str(sistema.USD_50), "\n", str(sistema.USD_100))
    s.writelines(l)