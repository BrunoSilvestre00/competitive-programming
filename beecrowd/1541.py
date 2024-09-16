while(True):
    i = input()
    if i == '0':
        break
    l1, l2, p = map(int, i.split())
    s = l1 * l2
    L = ((s*100)/p)**0.5
    print(int(L))
