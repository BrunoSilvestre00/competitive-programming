c = False
while(True):
    n = int(input())
    if n == 0:
        break

    if c:
        print()
    c = True

    strs = []
    tams = []
    for i in range(n):
        s = input()
        strs.append(s)
        tams.append(len(s))

    m = max(tams)
    for i in range(n):
        print(f'{" "*(m-tams[i])}{strs[i]}')