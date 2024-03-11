import string

def unpass1(string):
	for i in range(len(string)):
		c = ord(string[i])
		c -= 3
		if (65 <= c <= 90) or (97 <= c <= 122):
			string[i] = chr(c)
	return string

def unpass2(string):
	return string[::-1]

def unpass3(string):
	tam = len(string)
	for i in range(tam//2, tam):
		c = ord(string[i])
		string[i] = chr(c+1)
	return string

def decrypt(string):
	return ''.join(unpass1(unpass2(unpass3(list(string)))))

for i in range(5):
	print(decrypt(input()))