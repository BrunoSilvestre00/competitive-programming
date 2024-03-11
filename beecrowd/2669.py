import string

alfa = list(string.ascii_lowercase)
dic = {}
for i in range(26):
    dic[alfa[i]] = i+1

def calc_peso(sub_str):
    if len(sub_str) != 0:
        peso = 0
        for s in sub_str:
            peso += dic[s]
        return peso
    return 0

#==================================#

s = list(input())
pesos = []
tam = len(s)

for i in range(tam+1):
    for j in range(tam):
        sub = s[j:j+i]
        peso = calc_peso(sub)
        if peso not in pesos:
            pesos.append(peso)

print(len(pesos)-1)