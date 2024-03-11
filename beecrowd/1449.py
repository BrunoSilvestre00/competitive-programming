for k in range(int(input())):
    d = {}
    m, n = list(map(int, input().split()))
    for i in range(m):
        s1 = input()
        d[s1] = input()
    for i in range(n):
        s = []
        inp = input().split(' ')
        for j in inp:
            s.append(d[j] if j in d else j)
        print(' '.join(s))
    print()    
        
