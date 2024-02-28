password = input("ingrese su contraseña: ")
password = password.lower()
print(password)
for x in password:
    if x.isdigit() == True:
        break
if x.isdigit() == True:
    print("tiene numeros")
else:
    print("no tiene numeros")
if password.isalnum() == False:
    print("hay caracteres especiales")
else:
    print("no hay caracteres especiales")
