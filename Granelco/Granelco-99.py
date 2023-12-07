with open("Info de las personas",'w',encoding = 'cp1252') as f:
   f.write("Nombre\n")
   f.write("Apellido\n")
   f.write("DNI\n")
   f.write("Fecha de nacimiento\n")
   f.write("Profesion\n")
   f.write("Genero\n")

with open("Info de las personas juridicas",'w',encoding = 'cp1252') as f:
   f.write("Razon social\n")
   f.write("CUIT\n")
   f.write("Fecha de inicio de actividades\n")
   f.write("Rubro\n")

with open("Info tarjeta granelco",'w',encoding = 'cp1252') as f:
   f.write("Numero de tarjeta\n")
   f.write("Fecha de vencimiento\n")
   f.write("Codigo de seguridad\n")

with open("Info de usuarios",'w',encoding = 'cp1252') as f:
   f.write("Pin\n")
   f.write("Cuenta ARS\n")
   f.write("Cuenta USD\n")
   f.write("Saldo disponible\n")
   f.write("Movimientos\n")

with open("Info de movimientos",'w',encoding = 'cp1252') as f:
   f.write("Fecha\n")
   f.write("Monto\n")
   f.write("Descripcion\n")
   f.write("Saldo disponible\n")

with open("Info de sistema",'w',encoding = 'cp1252') as f:
   f.write("Stock de billetes:\n")
   f.write("10 de 10 ARS\n")
   f.write("10 de 20 ARS\n")
   f.write("10 de 50 ARS\n")
   f.write("10 de 100 ARS\n")
   f.write("10 de 200 ARS\n")
   f.write("10 de 500 ARS\n")
   f.write("10 de 1000 ARS\n")
   f.write("10 de 1 USD\n")
   f.write("10 de 2 USD\n")
   f.write("10 de 5 USD\n")
   f.write("10 de 10 USD\n")
   f.write("10 de 20 USD\n")
   f.write("10 de 50 USD\n")
   f.write("10 de 100 USD\n")
   f.write("Cada dia se suman 10 billetes de cada tipo\n")
