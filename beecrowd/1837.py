# https://www.urionlinejudge.com.br/judge/pt/problems/view/1837

def operacao(a,b):
    r = a % b
    q = (a - r) // b
    return q,r

inp = input()
a = int(inp.split()[0])
b = int(inp.split()[1])

# q = a//b
# r = a - b*q

if(b < 0):
    b = -b
    q, r = operacao(a,b)
    q = -q
else:
    q, r = operacao(a,b)

print(q, r)
