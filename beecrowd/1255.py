def get_letter_index(letter):
    if(97 <= letter <= 122):
        return letter - 96
    if(65 <=  letter <= 90):
        return letter - 64
    return 0

def solve():
    inp = input()
    count = [0]*26
    for l in inp:
        if(i := get_letter_index(ord(l))):
            count[i-1] += 1
    m = max(count)
    for i, c in enumerate(count):
        if c == m:
            print(chr(i+97), end='')
    print()
    
for _ in range(int(input())):
    solve()