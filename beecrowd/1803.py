matring = []
for i in range(4):
    matring.append(input())

F = int(''.join([line[0] for line in matring]))
L = int(''.join([line[-1] for line in matring]))

for i in range(1, len(matring[0])-1):
    Mi = int(''.join([line[i] for line in matring]))
    Ci = (F*Mi + L)%257
    print(chr(Ci), end='')
print()