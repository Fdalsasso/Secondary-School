import array as arr

a = arr.array("i")
b = arr.array("i")
d = 0
for i in range(100):
    a.append(i + 1)
    if a[i] > 1:
        for x in range(2, a[i]):
            if (a[i] % x) == 0:
                break
        else:
            b.append(a[i])
print(b)
