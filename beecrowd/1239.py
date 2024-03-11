
while True:
	try:
		string = list(input())
		begin_ = True
		begin = True
		for i in range(len(string)):
			if string[i] == '_':
				if begin_:	
					string[i] = '<i>'
				else:
					string[i] = '</i>'
				begin_ = not begin_
			elif string[i] == '*':
				if begin:	
					string[i] = '<b>'
				else:
					string[i] = '</b>'
				begin = not begin

		print(''.join(string))

	except EOFError:
		break