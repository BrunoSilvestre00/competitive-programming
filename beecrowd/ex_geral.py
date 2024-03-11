def conta_fat(n):
    end = 365 - n
    current = 365
    total = 1
    while(current != end):
        total *= current
        current -= 1
    return total

def not_p(n):
    return conta_fat(n)/(365**n)

def p(n):
    return 1-not_p(n)

for i in range(10, 96, 5):
    prob = p(i)
    print(f'{i} | {prob:.15f} | {prob*100:.3f}%')
