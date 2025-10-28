def solve(n):
    for i in range(n):
        for j in range(n):
            print(min(i+1, j+1, n-i, n-j), end=' ')
        print()
    print()

while(True):
    if (n:= int(input())) == 0: break
    solve(n)
    