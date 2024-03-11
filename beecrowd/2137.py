

while True:
    try:
        books = []
        N = int(input())
        for i in range(N):
            books.append(int(input()))
        for b in sorted(books):
            print('{:0>4}'.format(b))
    except EOFError:
        break
