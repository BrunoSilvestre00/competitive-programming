buffer = [0]*100

def ways(n):
    if a := buffer[n-1]:
        return a
    a = n if n in [1, 2, 3] else ways(n-1) + ways(n-2)
    buffer[n-1] = a
    return a

while(n := int(input())):
    print(ways(n))