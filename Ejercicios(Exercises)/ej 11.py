comidas = ["sandwich", "tacos", "bebida", "hamburguesa", "pancho", "pizza", "nuggets", "papas fritas", "cafe", "dona"]
precios = [2.5, 1.5, 1.5, 2.5, 2.5, 3.5, 3, 2, 1.5, 1.5]
cuenta = []
cont = 0
total = 0
for x in range(len(comidas)):
    print(x+1, comidas[x], "   $", precios[x])
print("ingrese el numero de comida para añadirlo a la lista")
f = int(input())
cuenta.insert(cont, comidas[f-1])
cont += 1
total += precios[f-1]
while 50:
    print("usted ordeno:")
    for x in range(len(cuenta)):
        print(cuenta[x])
    print("\ntotal:                        $", total, "\ndesea seguir ordenando? (si/no)")
    if input() == 'si':
        f = int(input())
        cuenta.insert(cont, comidas[f - 1])
        cont += 1
        total += precios[f - 1]
    else:
        break
print("usted ordeno:")
for x in range(len(cuenta)):
    print(cuenta[x])
print("\ntotal:                      $", total)