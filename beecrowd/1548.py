for n in range(int(input())):
    input()
    lista = list(map(int, input().split()))
    new_lista = sorted(lista, reverse=True)
    mantem = 0
    for i, j in zip(lista, new_lista):
        mantem += 1 if i == j else 0
    print(mantem)