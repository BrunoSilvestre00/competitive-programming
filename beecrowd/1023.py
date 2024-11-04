


def main():
    city = 1
    while(True):
        if not (n:= int(input())):
            break
        
        consumos = [0]*201
        pt = 0
        ct = 0
        for _ in range(n):
            p, c = list(map(int, input().split(' ')))
            pt += p
            ct += c
            cm = c // p
            consumos[cm] += p
        ctm = ct / pt
        ctm = int(ctm * 100) / 100
        
        if city != 1:
            print('\n')
        print(f'Cidade# {city}:')
        print(' '.join([f'{consumos[i]}-{i}' for i in range(200) if consumos[i]]))
        print(f'Consumo medio: {ctm:.2f} m3.', end='')
        
        city += 1

main()