m, n = list(map(int, input().split(' ')))
d = {}

for k in range(m):
    inp = input().split()  
    d[inp[0]] = int(inp[1])

for k in range(n):
    acu = 0 
    while True:
        inp = input().split(' ')
        if inp[0] == '.':
            break
        for i in inp:
            if i in d:
                acu += d[i]
    print(acu)