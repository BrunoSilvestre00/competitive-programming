def sub_pos(c, qtd):
    return chr((ord(c) - 65 - qtd)%26 + 65)

for i in range(int(input())):
    list_string = list(input())
    qtd = int(input())
    print(''.join([sub_pos(c, qtd) for c in list_string]))