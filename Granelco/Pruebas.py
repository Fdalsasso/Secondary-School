"""class mov:
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


class tarjeta:
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
        self.ARG = int(ARG)
        self.USD = int(USD)
        self.movimientos = movimientos


class empresa:
    razon_social = ""
    CUIT = ""
    fecha_de_inicio = ""
    rubro = ""
    usuario = cuenta("", "", "", "")

    def __init__(self, razon_social, CUIT, fecha, rubro, usuario):
        self.razon_social = razon_social
        self.CUIT = CUIT
        self.fecha_de_inicio = fecha
        self.rubro = rubro
        self.usuario = usuario


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

"""
