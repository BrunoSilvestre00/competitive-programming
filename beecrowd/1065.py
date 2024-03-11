pares = 0
for i in range(5):
    pares += 1 if int(input())%2 == 0 else 0
print('{} valores pares'.format(pares))