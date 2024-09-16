def valid(n):
    f = float(n)
    return f, 0 <= f <= 10

while(True):
    
    # fisrt grade
    while(True):
        n1 = input()
        f1, v1 = valid(n1)
        if v1:
            break
        print('nota invalida')
        
    # second grade
    while(True):
        n2 = input()
        f2, v2 = valid(n2)
        if v2:
            break
        print('nota invalida')
        
    # average
    print(f'media = {(f1 + f2) / 2:.2f}')
    
    # continue?
    while(True):
        print('novo calculo (1-sim 2-nao)')
        n = input()
        if n in ['1', '2']:
            break
        
    if n == '2':
        break

