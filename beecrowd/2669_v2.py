#Time limit exceeded: 8.0s

def calc_preco(sub_str):
    peso = 0
    for i in sub_str:
        peso += ord(i)-96
    return peso

s = input()
tam =len(s)
pesos = []

for i in range(tam):
    for j in range(tam):
        if j+i+1 <= tam:
            sub = s[j:j+i+1]
            peso = calc_preco(sub)
            if peso not in pesos:
                pesos.append(peso)

print(len(pesos))