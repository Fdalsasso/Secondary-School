# Esta clase representa a un automovil
class automovil:

    # ==== Atributos ====
    marca = ''
    modelo = ''
    patente = ''

    # ==== Métodos ====


    # ==== Constructor ====
    def __init__(self, marca, modelo, patente):
        self.marca = marca
        self.modelo = modelo
        self.patente = patente

    # Getters.
    def getMarca(self):
        return self.marca

    def getModelo(self):
        return self.modelo

    def getPatente(self):
        return self.patente

    # Setters
    def setMarca(self, unaMarca):
        self.marca = unaMarca

    def setModelo(self, unModelo):
        self.modelo = unModelo

    def setPatente(self, unaPatente):
        self.patente = unaPatente

# Esta clase representa a una persona
class persona:

    # ==== Atributos ====
    nombre = ''
    apellido = ''
    documento = ''
    auto = automovil('','','')

    # ==== Métodos ====


    # ==== Constructor ====
    def __init__(self, nombre, apellido, documento, auto):
        self.nombre = nombre
        self.apellido = apellido
        self.documento = documento
        self.auto = auto

    # Getters.
    def getNombre(self):
        return self.nombre

    def getApellido(self):
        return self.apellido

    def getDocumento(self):
        return self.documento

    def getAuto(self):
        print(self.auto.marca)

    # Setters
    def setNombre(self, unNombre):
        self.nombre = unNombre

    def setApellido(self, unApellido):
        self.apellido = unApellido

    def setDocumento(self, unDocumento):
        self.documento = unDocumento

    def setAuto(self, unAuto):
        self.auto = unAuto


# Programa principal

# Creamos 1 persona con los siguientes datos:
P1 = persona('Federico','Gonzalez','36789542', automovil('Toyota','Yaris','AD345KL'))

print(P1.getNombre(), P1.getApellido())
print()

# Cambiamos el auto de la persona:
P1.setAuto(automovil('Audi','A3','AD987PI'))
print(P1.getNombre(), P1.getApellido())
P1.getAuto()