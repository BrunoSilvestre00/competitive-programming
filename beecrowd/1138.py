
while(True):
	qtd = [0]*10
	a, b = input().split()
	if a == '0' and b == '0':
		break

	for n in range(int(a), int(b)+1):
		for c in str(n):
			qtd[int(c)] += 1

	print(qtd[0], qtd[1], qtd[2], qtd[3], qtd[4], qtd[5], qtd[6], qtd[7], qtd[8], qtd[9])