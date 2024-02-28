import csv

#a = input()
#with open(a, 'r') as file:
 #   x = [x for x in csv.reader(file)]
with open("Prueba.txt",'w') as f:
   f.write("my first file\n")
   f.write("This file\n\n")
   f.write("contains three lines\n")

with open("Prueba.txt", 'r') as f:
   x = [x for x in f]
   print(x[0])

f = open("43628431", 'w+')
f.write("Facundo\n")
f.write("18\n\n")
f.write("contains two lines\n")
f.seek(0)
x = [x for x in f]
print(x[0])
f.seek(0)
z = f.read()
f.close()
print(z)
