

SPECIAL = ['A', 'E', 'I', 'O', 'S']

for _ in range(int(input())):
    s = input()
    qtd = 1
    for i in s:
        if i.upper() in SPECIAL:
            qtd *= 3
        else:
            qtd *= 2
    print(qtd)




