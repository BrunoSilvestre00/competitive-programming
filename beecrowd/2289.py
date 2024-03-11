def to_binary_easy(n):
    return bin(n)[2:]

def to_binary(n):
    rest = [0]*64
    i = 0
    while(n!=0):
        rest[i] = n%2
        n //= 2
        i += 1
    return rest[::-1]

def hamming(str1, str2):
    c = 0
    for i in range(64):
        c += 0 if str1[i] == str2[i] else 1
    return c

while True:
    x, y = input().split(' ')
    if x == y == '0':
        break
    print(hamming(to_binary(int(x)), to_binary(int(y))))
    print(2**64-1)