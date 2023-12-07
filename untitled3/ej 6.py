y = 0
f = "\n"
while True:
    suma = input('Enter an integrer or Q: ')
    if suma.upper().startswith('Q'):
        suma = input('A or T: ')
        if suma.upper() == 'A':
            print(f)
            print(y)
            break
        elif suma.upper() == 'T':
            print(y)
            break
    elif suma.isalpha() == True:
        print('Invalid input')
    elif suma.isspace() == True:
        print('Invalid input')
    elif suma.isdigit() == True:
        y += int(suma)
        f += suma + "\n"
    else:
        print('Invalid input')
