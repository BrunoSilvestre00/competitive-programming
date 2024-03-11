import string

def pass1(string):
	for i in range(len(string)):
		c = ord(string[i])
		if (65 <= c <= 90) or (97 <= c <= 122):
			c = ord(string[i])
			string[i] = chr(c+3)
	return string

def pass2(string):
	return string[::-1]

def pass3(string):
	tam = len(string)
	for i in range(tam//2, tam):
		c = ord(string[i])
		string[i] = chr(c-1)
	return string

def crypt(string):
	return ''.join(pass3(pass2(pass1(list(string)))))

qtd = int(input())
for i in range(qtd):
	print(crypt(input()))
