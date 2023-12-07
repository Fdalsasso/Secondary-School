# Esta clase representa a una persona
class persona:

    # ==== Atributos ====
    nombre = ''
    apellido = ''
    documento = ''

    # ==== Métodos ====


    # ==== Constructor ====
    def __init__(self, nombre, apellido, documento):
        self.nombre = nombre
        self.apellido = apellido
        self.documento = documento

    # Getters.
    def getNombre(self):
        return self.nombre

    def getApellido(self):
        return self.apellido

    def getDocumento(self):
        return self.documento

    # Setters
    def setNombre(self, unNombre):
        self.nombre = unNombre

    def setApellido(self, unApellido):
        self.apellido = unApellido

    def setDocumento(self, unDocumento):
        self.documento = unDocumento

# Esta clase representa a un empleado
class empleado(persona):
    # ==== Atributos ====
    sueldo = 0

    # ==== Métodos ====

    # ==== Constructor ====
    def __init__(self, nombre, apellido, documento, sueldo):
        # Primero inicializo los atributos de la clase persona heredada
        persona.__init__(self, nombre, apellido, documento)

        # Ahora construyo las variables específicas de esta clase
        self.sueldo = sueldo

    # Getters.
    def getSueldo(self):
        return self.sueldo

    # Setters
    def setSueldo(self, unSueldo):
        self.sueldo = unSueldo


# Esta clase representa a un cliente
class cliente(persona):

    # ==== Atributos ====
    cuenta = ''

    # ==== Métodos ====

    # ==== Constructor ====
    def __init__(self, nombre, apellido, documento, cuenta):

        # Primero inicializo los atributos de la clase persona heredada
        persona.__init__(self, nombre, apellido, documento)

        # Ahora construyo las variables específicas de esta clase
        self.cuenta = cuenta

    # Getters.
    def getCuenta(self):
        return self.cuenta

    # Setters
    def setCuenta(self, unaCuenta):
        self.cuenta = unaCuenta

# Esta clase representa a un alumno
class alumno(persona):
    # ==== Atributos ====
    carrera = ''

    # ==== Métodos ====

    # ==== Constructor ====
    def __init__(self, nombre, apellido, documento, carrera):
        # Primero inicializo los atributos de la clase persona heredada
        persona.__init__(self, nombre, apellido, documento)

        # Ahora construyo las variables específicas de esta clase
        self.carrera = carrera

    # Getters.
    def getCarrera(self):
        return self.carrera

    # Setters
    def setCarrera(self, unaCarrera):
        self.carrera = unaCarrera


# Programa principal

# Creamos 1 persona general y luego 1 empleado, 1 cliente y 1 alumno.
P1 = persona('Federico','Gonzalez','36789542')
E1 = empleado('Raul','Alvarez','34783522',50000)
C1 = cliente('Jose','Rodriguez','34783522','68764')
A1 = alumno('Johnny','Lawrence','24683822','Cobra Kay')

print(P1.getNombre(), P1.getApellido(), P1.getDocumento())
print(E1.getNombre(), E1.getApellido(), E1.getDocumento(), E1.getSueldo())
print(C1.getNombre(), C1.getApellido(), C1.getDocumento(), C1.getCuenta())
print(A1.getNombre(), A1.getApellido(), A1.getDocumento(), A1.getCarrera())
